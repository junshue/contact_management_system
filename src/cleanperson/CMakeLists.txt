project(cleanperson)

add_library(${PROJECT_NAME}
SHARED
cleanperson.cpp
)
target_include_directories(cleanperson 
PRIVATE
${COMMON_INCLUDE_DIR})