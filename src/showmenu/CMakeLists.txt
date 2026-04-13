project(showmenu)

add_library(${PROJECT_NAME}
SHARED
showmenu.cpp
)

target_include_directories(showmenu 
PRIVATE
${COMMON_INCLUDE_DIR})