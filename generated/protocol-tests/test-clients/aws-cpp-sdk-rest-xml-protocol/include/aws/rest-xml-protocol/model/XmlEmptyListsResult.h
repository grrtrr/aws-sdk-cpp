﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
#include <aws/rest-xml-protocol/model/StructureListMember.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RestXmlProtocol
{
namespace Model
{
  class XmlEmptyListsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEmptyListsResult();
    AWS_RESTXMLPROTOCOL_API XmlEmptyListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlEmptyListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringList() const{ return m_stringList; }
    inline void SetStringList(const Aws::Vector<Aws::String>& value) { m_stringList = value; }
    inline void SetStringList(Aws::Vector<Aws::String>&& value) { m_stringList = std::move(value); }
    inline XmlEmptyListsResult& WithStringList(const Aws::Vector<Aws::String>& value) { SetStringList(value); return *this;}
    inline XmlEmptyListsResult& WithStringList(Aws::Vector<Aws::String>&& value) { SetStringList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddStringList(const Aws::String& value) { m_stringList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddStringList(Aws::String&& value) { m_stringList.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddStringList(const char* value) { m_stringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetStringSet() const{ return m_stringSet; }
    inline void SetStringSet(const Aws::Vector<Aws::String>& value) { m_stringSet = value; }
    inline void SetStringSet(Aws::Vector<Aws::String>&& value) { m_stringSet = std::move(value); }
    inline XmlEmptyListsResult& WithStringSet(const Aws::Vector<Aws::String>& value) { SetStringSet(value); return *this;}
    inline XmlEmptyListsResult& WithStringSet(Aws::Vector<Aws::String>&& value) { SetStringSet(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddStringSet(const Aws::String& value) { m_stringSet.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddStringSet(Aws::String&& value) { m_stringSet.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddStringSet(const char* value) { m_stringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerList() const{ return m_integerList; }
    inline void SetIntegerList(const Aws::Vector<int>& value) { m_integerList = value; }
    inline void SetIntegerList(Aws::Vector<int>&& value) { m_integerList = std::move(value); }
    inline XmlEmptyListsResult& WithIntegerList(const Aws::Vector<int>& value) { SetIntegerList(value); return *this;}
    inline XmlEmptyListsResult& WithIntegerList(Aws::Vector<int>&& value) { SetIntegerList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddIntegerList(int value) { m_integerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetBooleanList() const{ return m_booleanList; }
    inline void SetBooleanList(const Aws::Vector<bool>& value) { m_booleanList = value; }
    inline void SetBooleanList(Aws::Vector<bool>&& value) { m_booleanList = std::move(value); }
    inline XmlEmptyListsResult& WithBooleanList(const Aws::Vector<bool>& value) { SetBooleanList(value); return *this;}
    inline XmlEmptyListsResult& WithBooleanList(Aws::Vector<bool>&& value) { SetBooleanList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddBooleanList(bool value) { m_booleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const{ return m_timestampList; }
    inline void SetTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampList = value; }
    inline void SetTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampList = std::move(value); }
    inline XmlEmptyListsResult& WithTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestampList(value); return *this;}
    inline XmlEmptyListsResult& WithTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestampList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddTimestampList(const Aws::Utils::DateTime& value) { m_timestampList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddTimestampList(Aws::Utils::DateTime&& value) { m_timestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetEnumList() const{ return m_enumList; }
    inline void SetEnumList(const Aws::Vector<FooEnum>& value) { m_enumList = value; }
    inline void SetEnumList(Aws::Vector<FooEnum>&& value) { m_enumList = std::move(value); }
    inline XmlEmptyListsResult& WithEnumList(const Aws::Vector<FooEnum>& value) { SetEnumList(value); return *this;}
    inline XmlEmptyListsResult& WithEnumList(Aws::Vector<FooEnum>&& value) { SetEnumList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddEnumList(const FooEnum& value) { m_enumList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddEnumList(FooEnum&& value) { m_enumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumList = std::move(value); }
    inline XmlEmptyListsResult& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline XmlEmptyListsResult& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddIntEnumList(int value) { m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const{ return m_nestedStringList; }
    inline void SetNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_nestedStringList = value; }
    inline void SetNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_nestedStringList = std::move(value); }
    inline XmlEmptyListsResult& WithNestedStringList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetNestedStringList(value); return *this;}
    inline XmlEmptyListsResult& WithNestedStringList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetNestedStringList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddNestedStringList(const Aws::Vector<Aws::String>& value) { m_nestedStringList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddNestedStringList(Aws::Vector<Aws::String>&& value) { m_nestedStringList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetRenamedListMembers() const{ return m_renamedListMembers; }
    inline void SetRenamedListMembers(const Aws::Vector<Aws::String>& value) { m_renamedListMembers = value; }
    inline void SetRenamedListMembers(Aws::Vector<Aws::String>&& value) { m_renamedListMembers = std::move(value); }
    inline XmlEmptyListsResult& WithRenamedListMembers(const Aws::Vector<Aws::String>& value) { SetRenamedListMembers(value); return *this;}
    inline XmlEmptyListsResult& WithRenamedListMembers(Aws::Vector<Aws::String>&& value) { SetRenamedListMembers(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddRenamedListMembers(const Aws::String& value) { m_renamedListMembers.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddRenamedListMembers(Aws::String&& value) { m_renamedListMembers.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddRenamedListMembers(const char* value) { m_renamedListMembers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedList() const{ return m_flattenedList; }
    inline void SetFlattenedList(const Aws::Vector<Aws::String>& value) { m_flattenedList = value; }
    inline void SetFlattenedList(Aws::Vector<Aws::String>&& value) { m_flattenedList = std::move(value); }
    inline XmlEmptyListsResult& WithFlattenedList(const Aws::Vector<Aws::String>& value) { SetFlattenedList(value); return *this;}
    inline XmlEmptyListsResult& WithFlattenedList(Aws::Vector<Aws::String>&& value) { SetFlattenedList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddFlattenedList(const Aws::String& value) { m_flattenedList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddFlattenedList(Aws::String&& value) { m_flattenedList.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddFlattenedList(const char* value) { m_flattenedList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedList2() const{ return m_flattenedList2; }
    inline void SetFlattenedList2(const Aws::Vector<Aws::String>& value) { m_flattenedList2 = value; }
    inline void SetFlattenedList2(Aws::Vector<Aws::String>&& value) { m_flattenedList2 = std::move(value); }
    inline XmlEmptyListsResult& WithFlattenedList2(const Aws::Vector<Aws::String>& value) { SetFlattenedList2(value); return *this;}
    inline XmlEmptyListsResult& WithFlattenedList2(Aws::Vector<Aws::String>&& value) { SetFlattenedList2(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddFlattenedList2(const Aws::String& value) { m_flattenedList2.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddFlattenedList2(Aws::String&& value) { m_flattenedList2.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddFlattenedList2(const char* value) { m_flattenedList2.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListWithMemberNamespace() const{ return m_flattenedListWithMemberNamespace; }
    inline void SetFlattenedListWithMemberNamespace(const Aws::Vector<Aws::String>& value) { m_flattenedListWithMemberNamespace = value; }
    inline void SetFlattenedListWithMemberNamespace(Aws::Vector<Aws::String>&& value) { m_flattenedListWithMemberNamespace = std::move(value); }
    inline XmlEmptyListsResult& WithFlattenedListWithMemberNamespace(const Aws::Vector<Aws::String>& value) { SetFlattenedListWithMemberNamespace(value); return *this;}
    inline XmlEmptyListsResult& WithFlattenedListWithMemberNamespace(Aws::Vector<Aws::String>&& value) { SetFlattenedListWithMemberNamespace(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddFlattenedListWithMemberNamespace(const Aws::String& value) { m_flattenedListWithMemberNamespace.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddFlattenedListWithMemberNamespace(Aws::String&& value) { m_flattenedListWithMemberNamespace.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddFlattenedListWithMemberNamespace(const char* value) { m_flattenedListWithMemberNamespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListWithNamespace() const{ return m_flattenedListWithNamespace; }
    inline void SetFlattenedListWithNamespace(const Aws::Vector<Aws::String>& value) { m_flattenedListWithNamespace = value; }
    inline void SetFlattenedListWithNamespace(Aws::Vector<Aws::String>&& value) { m_flattenedListWithNamespace = std::move(value); }
    inline XmlEmptyListsResult& WithFlattenedListWithNamespace(const Aws::Vector<Aws::String>& value) { SetFlattenedListWithNamespace(value); return *this;}
    inline XmlEmptyListsResult& WithFlattenedListWithNamespace(Aws::Vector<Aws::String>&& value) { SetFlattenedListWithNamespace(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddFlattenedListWithNamespace(const Aws::String& value) { m_flattenedListWithNamespace.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddFlattenedListWithNamespace(Aws::String&& value) { m_flattenedListWithNamespace.push_back(std::move(value)); return *this; }
    inline XmlEmptyListsResult& AddFlattenedListWithNamespace(const char* value) { m_flattenedListWithNamespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetStructureList() const{ return m_structureList; }
    inline void SetStructureList(const Aws::Vector<StructureListMember>& value) { m_structureList = value; }
    inline void SetStructureList(Aws::Vector<StructureListMember>&& value) { m_structureList = std::move(value); }
    inline XmlEmptyListsResult& WithStructureList(const Aws::Vector<StructureListMember>& value) { SetStructureList(value); return *this;}
    inline XmlEmptyListsResult& WithStructureList(Aws::Vector<StructureListMember>&& value) { SetStructureList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddStructureList(const StructureListMember& value) { m_structureList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddStructureList(StructureListMember&& value) { m_structureList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<StructureListMember>& GetFlattenedStructureList() const{ return m_flattenedStructureList; }
    inline void SetFlattenedStructureList(const Aws::Vector<StructureListMember>& value) { m_flattenedStructureList = value; }
    inline void SetFlattenedStructureList(Aws::Vector<StructureListMember>&& value) { m_flattenedStructureList = std::move(value); }
    inline XmlEmptyListsResult& WithFlattenedStructureList(const Aws::Vector<StructureListMember>& value) { SetFlattenedStructureList(value); return *this;}
    inline XmlEmptyListsResult& WithFlattenedStructureList(Aws::Vector<StructureListMember>&& value) { SetFlattenedStructureList(std::move(value)); return *this;}
    inline XmlEmptyListsResult& AddFlattenedStructureList(const StructureListMember& value) { m_flattenedStructureList.push_back(value); return *this; }
    inline XmlEmptyListsResult& AddFlattenedStructureList(StructureListMember&& value) { m_flattenedStructureList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlEmptyListsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlEmptyListsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlEmptyListsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_stringList;

    Aws::Vector<Aws::String> m_stringSet;

    Aws::Vector<int> m_integerList;

    Aws::Vector<bool> m_booleanList;

    Aws::Vector<Aws::Utils::DateTime> m_timestampList;

    Aws::Vector<FooEnum> m_enumList;

    Aws::Vector<int> m_intEnumList;

    Aws::Vector<Aws::Vector<Aws::String>> m_nestedStringList;

    Aws::Vector<Aws::String> m_renamedListMembers;

    Aws::Vector<Aws::String> m_flattenedList;

    Aws::Vector<Aws::String> m_flattenedList2;

    Aws::Vector<Aws::String> m_flattenedListWithMemberNamespace;

    Aws::Vector<Aws::String> m_flattenedListWithNamespace;

    Aws::Vector<StructureListMember> m_structureList;

    Aws::Vector<StructureListMember> m_flattenedStructureList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
