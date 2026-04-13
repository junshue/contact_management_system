project(isexist)

add_library(${PROJECT_NAME}
SHARED
isexist.cpp
)

target_include_directories(isexist 
PRIVATE
${COMMON_INCLUDE_DIR})