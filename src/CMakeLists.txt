project(contact_management_system)


add_subdirectory(addperson)
add_subdirectory(cleanperson)
add_subdirectory(delectperson)
add_subdirectory(findperson)
add_subdirectory(modifyperson)
add_subdirectory(showmenu)
add_subdirectory(showperson)
add_subdirectory(isexist)

add_executable(${PROJECT_NAME} main.cpp)
# include_directories(${CMAKE_SOURCE_DIR}/include)

target_include_directories(${PROJECT_NAME}
PUBLIC
${addperson_Dir}
${cleanperson_Dir}
${delectperson_Dir}
${findperson_Dir}
${modifyperson_Dir}
${showmenu_Dir}
${showperson_Dir}
${isexist}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
addperson
cleanperson
delectperson
findperson
modifyperson
showmenu
showperson
)