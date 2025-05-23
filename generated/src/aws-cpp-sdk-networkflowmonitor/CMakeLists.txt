add_project(aws-cpp-sdk-networkflowmonitor "C++ SDK for the AWS networkflowmonitor service" aws-cpp-sdk-core)

file(GLOB AWS_NETWORKFLOWMONITOR_HEADERS
    "include/aws/networkflowmonitor/*.h"
)

file(GLOB AWS_NETWORKFLOWMONITOR_MODEL_HEADERS
    "include/aws/networkflowmonitor/model/*.h"
)

file(GLOB AWS_NETWORKFLOWMONITOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_NETWORKFLOWMONITOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB NETWORKFLOWMONITOR_UNIFIED_HEADERS
    ${AWS_NETWORKFLOWMONITOR_HEADERS}
    ${AWS_NETWORKFLOWMONITOR_MODEL_HEADERS}
)

file(GLOB NETWORKFLOWMONITOR_UNITY_SRC
    ${AWS_NETWORKFLOWMONITOR_SOURCE}
    ${AWS_NETWORKFLOWMONITOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("NETWORKFLOWMONITOR" NETWORKFLOWMONITOR_UNITY_SRC)
endif()

file(GLOB NETWORKFLOWMONITOR_SRC
    ${NETWORKFLOWMONITOR_UNIFIED_HEADERS}
    ${NETWORKFLOWMONITOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\networkflowmonitor" FILES ${AWS_NETWORKFLOWMONITOR_HEADERS})
        source_group("Header Files\\aws\\networkflowmonitor\\model" FILES ${AWS_NETWORKFLOWMONITOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_NETWORKFLOWMONITOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_NETWORKFLOWMONITOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(NETWORKFLOWMONITOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${NETWORKFLOWMONITOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_NETWORKFLOWMONITOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_NETWORKFLOWMONITOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/networkflowmonitor)
install (FILES ${AWS_NETWORKFLOWMONITOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/networkflowmonitor/model)

do_packaging()


