/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;

import lombok.Data;

import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


@Data
public class EndpointTests {
    static String formatString(String str){
        if (str.contains("\n") || str.contains("\"") || str.contains("\n") || str.contains("\t")) {
            return "R\"(" + str + ")\"";
        } else {
            return "\"" + str + "\"";
        }
    }

    @Data
    public static class EndpointTestParameter {
        enum ParameterType {
            BOOLEAN,
            INTEGER,
            STRING,
            STRING_ARRAY
        }

        ParameterType type;
        String name;
        Boolean boolValue;
        Integer intValue;
        String strValue;
        List<String> strArrayValue;

        public String getAsCppSourceString(boolean isEndpointProperty) throws Exception {
            String typeAlias = isEndpointProperty ? "EpProp" : "EpParam";
            if (ParameterType.BOOLEAN == this.type) {
                String val = boolValue ? "true" : "false";
                return new StringBuilder(typeAlias).append("(\"").append(name).append("\", ").append(val).append(")").toString();
            } else if (ParameterType.INTEGER == this.type) {
                return new StringBuilder(typeAlias).append("(\"").append(name).append("\",").append(intValue.toString()).append(")").toString();
            } else if (ParameterType.STRING == this.type) {
                String strValueEscaped = (strValue.contains("\"") || strValue.contains("\\")) ? "R\"(" + strValue + ")\"" : "\"" + strValue + "\"";
                return new StringBuilder(typeAlias).append("(\"").append(name).append("\", ").append(strValueEscaped).append(")").toString();
            }else if (ParameterType.STRING_ARRAY == this.type) {

                // Escape each string in the array and join them with commas.
                StringBuilder arrayBuilder = new StringBuilder("Aws::Vector<Aws::String>{");
                for (int i = 0; i < strArrayValue.size(); i++) {
                    String element = strArrayValue.get(i);
                    String escapedElement = element.contains("\"") || element.contains("\\")
                            ? "R\"(" + element + ")\""
                            : "\"" + element + "\"";
                    arrayBuilder.append(escapedElement);
                    if (i < strArrayValue.size() - 1) {
                        arrayBuilder.append(", ");
                    }
                }
                arrayBuilder.append("}");

                return new StringBuilder(typeAlias)
                        .append("(\"")
                        .append(name)
                        .append("\", ")
                        .append(arrayBuilder.toString())
                        .append(")")
                        .toString();
                
            }
            throw new Exception("EndpointTestParameter value not set!");
        }

        public String getAsCppSourceString() throws Exception {
            return getAsCppSourceString(false);
        }
    }

    public static class EndpointTestParams extends HashMap<String, EndpointTestParameter> {
        public String getAsCppSourceString(boolean isEndpointProperty, int indent) throws Exception {
            StringBuilder builder = new StringBuilder().append("{");
            String separator = "";
            int onPreviousLinesLength = 0;
            for (Map.Entry<String, EndpointTestParameter> paramEntry : this.entrySet()) {
                builder.append(separator);
                builder.append(paramEntry.getValue().getAsCppSourceString(isEndpointProperty));
                if (builder.length() > onPreviousLinesLength + 150) {
                    onPreviousLinesLength = builder.length();
                    if (isEndpointProperty)
                        separator = ",\n" + String.join("", Collections.nCopies(indent + 3, " "));
                    else
                        separator = ",\n" + String.join("", Collections.nCopies(indent + 1, " "));
                } else {
                    separator = ", ";
                }
            }
            builder.append("}");
            return builder.toString();
        }

        public String getAsCppSourceString(int indent) throws Exception {
            return getAsCppSourceString(false, indent);
        }
    }

    @Data
    public static class OperationInput {
        String operationName;
        EndpointTestParams clientParams;
        EndpointTestParams operationParams;
        EndpointTestParams builtinParams;

        public String getAsCppSourceString(int indent) throws Exception {
            StringBuilder builder = new StringBuilder("{");
            builder.append("/*operationName*/\"").append(operationName).append("\"");
            List<AbstractMap.SimpleEntry<String, EndpointTestParams>> allParams =
                    Arrays.asList(new AbstractMap.SimpleEntry<>("clientParams", clientParams),
                            new AbstractMap.SimpleEntry<>("operationParams", operationParams),
                            new AbstractMap.SimpleEntry<>("builtinParams", builtinParams));

            for(AbstractMap.SimpleEntry<String, EndpointTestParams> paramEntry : allParams) {
                String indentStr = String.join("", Collections.nCopies(indent + 2, " "));
                builder.append(",\n");
                builder.append(indentStr);
                builder.append("/*").append(paramEntry.getKey()).append("*/");
                if (paramEntry.getValue() != null)
                {
                    builder.append(paramEntry.getValue().getAsCppSourceString(indent+2));
                } else {
                    builder.append("{}");
                }
            }
            builder.append("}");
            return builder.toString();
        }
    }

    @Data
    public static class OperationInputs extends ArrayList<OperationInput> {
        public String getAsCppSourceString(int indent) throws Exception {
            if (this.isEmpty()) {
                return "{}";
            }
            StringBuilder builder = new StringBuilder("{");
            for(OperationInput value : this) {
                builder.append(value.getAsCppSourceString(indent+2));
            }
            builder.append("}");
            return builder.toString();
        }
    }

    @Data
    public static class EndpointTestProperties {
        /* TODO: Spec supports defining multiple auth schemes, but in practice
        its always one. Rest of the code assumes its one, so read one for now. */
        List<EndpointTestParameter> authScheme;
        EndpointTestParams genericProps;

        public String getAsCppSourceString(int indent) throws Exception {
            String indentStr = String.join("", Collections.nCopies(indent + 3, " "));

            StringBuilder builder = new StringBuilder("{/*authScheme*/");
            String separator = "";
            if (authScheme != null) {
                for (EndpointTestParameter authProp : authScheme) {
                    builder.append(separator);
                    builder.append("{");
                    builder.append(authProp.getAsCppSourceString(true));

                    builder.append("}");
                    separator = ", ";
                }
            }
            builder.append("}, \n");

            builder.append(indentStr);
            builder.append("{/*properties*/");
            if (genericProps != null) {
                separator = "";
                for (Map.Entry<String, EndpointTestParameter> prop : genericProps.entrySet()) {
                    builder.append(separator);
                    builder.append("{\"").append(prop.getKey()).append("\", ");
                    builder.append(prop.getValue().getAsCppSourceString(true));

                    builder.append("}");
                    separator = ", ";
                }
            }
            builder.append("}");

            return builder.toString();
        }
    }

    @Data
    public class TestCase {
        @Data
        public class Expect {
            @Data
            public class Endpoint {
                String url;
                EndpointTestProperties properties;
                Map<String, List<String>> headers;

                public String getAsCppSourceString(int indent) throws Exception {
                    StringBuilder builder = new StringBuilder().append("{");
                    if (url != null && !url.isEmpty()) {
                        builder.append("/*epUrl*/\"").append(url).append("\"");
                    } else {
                        builder.append("{/*No endpoint expected*/}");
                    }
                    // properties begin
                    // properties begin
                    String indentStr = String.join("", Collections.nCopies(indent + 3, " "));
                    builder.append(",\n");
                    builder.append(indentStr);
                    if (properties != null) {
                        builder.append(properties.getAsCppSourceString(indent));
                    } else {
                        builder.append("{/*authScheme*/}, \n");
                        builder.append(indentStr);
                        builder.append("{/*properties*/}");
                    }
                    // end of properties
                    indentStr = String.join("", Collections.nCopies(indent + 3, " "));
                    builder.append(",\n");
                    builder.append(indentStr);
                    builder.append("{/*headers*/");
                    if (headers != null && !headers.isEmpty()) {
                        String separator = "";
                        for (Map.Entry<String, List<String>> headerEntry : headers.entrySet()) {
                            builder.append(separator);
                            builder.append("{\"").append(headerEntry.getKey()).append("\", ");
                            builder.append("{"); // inner list of header under that key begin
                            String innerSeparator = "";
                            for (String header : headerEntry.getValue()) {
                                builder.append(innerSeparator);
                                builder.append("\"").append(header).append("\"");
                                innerSeparator = ", ";
                            }
                            builder.append("}"); // inner list of header under that key end
                            builder.append("}"); // header entry end
                            separator = ", ";
                        }
                    }
                    builder.append("}"); // end of headers
                    builder.append("}"); // end of whole expected endpoint entry

                    return builder.toString();
                }
            }

            Endpoint endpoint;
            String error;

            public String getAsCppSourceString(int indent) throws Exception {
                StringBuilder builder = new StringBuilder("{");

                if (endpoint != null && !endpoint.url.isEmpty() && error!= null && !error.isEmpty()) {
                    throw new RuntimeException("Cannot expect computed endpoint and an error together: url: '" + endpoint.url +
                            "', and error: '" + error + "'");
                }

                if (endpoint != null) {
                    builder.append(endpoint.getAsCppSourceString(indent));
                } else {
                    builder.append("{/*No endpoint expected*/}");
                }
                builder.append(", ");
                if (error != null && !error.isEmpty()) {
                    builder.append("/*error*/").append(formatString(error));
                } else {
                    builder.append("{/*No error*/}");
                }
                builder.append("}");
                return builder.toString();
            }
        }

        String documentation;
        EndpointTestParams params;
        List<String> tags;
        Expect expect;
        OperationInputs operationInputs;
    }

    String version;
    List<TestCase> testCases;
}