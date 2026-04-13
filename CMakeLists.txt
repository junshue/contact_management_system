cmake_minimum_required(VERSION 4.3.1)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL https://github.com/junshue/contact_management_system.git
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(common_include_Dir ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(addperson_Dir ${CMAKE_SOURCE_DIR}/src/addperson)
set(cleanperson_Dir ${CMAKE_SOURCE_DIR}/src/cleanperson)
set(delectperson_Dir ${CMAKE_SOURCE_DIR}/src/delectperson)
set(findperson_Dir ${CMAKE_SOURCE_DIR}/src/findperson)
set(isexist_Dir ${CMAKE_SOURCE_DIR}/src/isexist)
set(modifyperson_Dir ${CMAKE_SOURCE_DIR}/src/modifyperson)
set(showmenu_Dir ${CMAKE_SOURCE_DIR}/src/showmenu)
set(showperson_Dir ${CMAKE_SOURCE_DIR}/src/showperson)
include_directories(${CMAKE_SOURCE_DIR}/include)

#添加子目录
add_subdirectory(src)