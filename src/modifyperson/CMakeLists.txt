project(modifyperson)

add_library(${PROJECT_NAME}
SHARED
modifyperson.cpp
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${isexist_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
isexist
)

target_include_directories(modifyperson 
PRIVATE
${COMMON_INCLUDE_DIR})