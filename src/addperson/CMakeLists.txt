project(addperson)

add_library(${PROJECT_NAME}
SHARED
addperson.cpp
)
target_include_directories(addperson 
PRIVATE
${COMMON_INCLUDE_DIR})