project(showperson)

add_library(${PROJECT_NAME}
SHARED
showperson.cpp
)

target_include_directories(showperson 
PRIVATE
${COMMON_INCLUDE_DIR})