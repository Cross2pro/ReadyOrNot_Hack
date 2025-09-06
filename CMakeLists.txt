cmake_minimum_required(VERSION 3.10)

# 项目名称
project(ReadyOrNotHack VERSION 1.0.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 添加源文件
set(SOURCES
    main.cpp
    Libs/Config.cpp
    Libs/Render.cpp
    
    Libs/Utils.cpp
    Libs/Ready.cpp
    SDK/Basic.cpp
    SDK/Engine_functions.cpp
    SDK/CoreUObject_functions.cpp
)

# 创建动态链接库
add_library(${PROJECT_NAME} SHARED ${SOURCES})

# 设置库的属性
set_target_properties(${PROJECT_NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
)

# 如果是Windows平台，导出所有符号
if(WIN32)
    set_target_properties(${PROJECT_NAME} PROPERTIES
        WINDOWS_EXPORT_ALL_SYMBOLS TRUE
    )
endif()

# 添加编译定义
target_compile_definitions(${PROJECT_NAME} PRIVATE
    BUILDING_DLL
)

# 设置包含目录
target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
    ${CMAKE_CURRENT_SOURCE_DIR}/Libs
)

# 安装规则
install(TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

install(FILES main.h
    DESTINATION include
)