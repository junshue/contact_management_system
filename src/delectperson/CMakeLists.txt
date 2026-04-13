project(delectperson)

add_library(${PROJECT_NAME}
SHARED
delectperson.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${isexist_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
isexist
)

target_include_directories(delectperson 
PRIVATE
${COMMON_INCLUDE_DIR})