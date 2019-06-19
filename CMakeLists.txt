cmake_minimum_required(VERSION 3.12)
project(CPPBasic)

set(CMAKE_CXX_STANDARD 14)

#FILE(GLOB_RECURSE EXE_SOURCES
#        RELATIVE "${PROJECT_SOURCE_DIR}"
#        "src/dm01_basic/*.cpp"
#        "src/classbasic/*.cpp"
#        )

add_executable(CPPBasic src/dm01_basic/dm01_namespace.cpp)
add_executable(CPPBasic_d01_dm03 src/dm01_basic/dm03_struct.cpp)
add_executable(CPPBasic_d01_dm04 src/dm01_basic/dm04_boolean.cpp)
add_executable(CPPBasic_d01_dm05 src/dm01_basic/dm05_operation.cpp)
add_executable(CPPBasic_d01_dm06 src/dm01_basic/dm06_const.cpp)
add_executable(CPPBasic_d01_dm07 src/dm01_basic/dm07_const_define.cpp)
add_executable(CPPBasic_d01_dm08 src/dm02_refrence/dm01_refrence.cpp)
add_executable(CPPBasic_d01_dm09 src/dm02_refrence/dm02_refrence2.cpp)
add_executable(CPPBasic_d01_dm10 src/dm02_refrence/dm03_reference3.cpp)
add_executable(CPPBasic_d02_dm05 src/dm02_refrence/dm05_refrence_pionter.cpp)
add_executable(CPPBasic_d02_dm06 src/dm02_refrence/dm06_const.cpp)
add_executable(CPPBasic_d03_dm03 src/dm03_class/dm03_constructor.cpp)
add_executable(CPPBasic_d03_dm04 src/dm03_class/dm04_copy_constructor.cpp)
add_executable(CPPBasic_d03_dm05 src/dm03_class/dm05_copy_param_constructor.cpp)
add_executable(CPPBasic_d03_dm06 src/dm03_class/dm06_copy_constructor.cpp)
add_executable(CPPBasic_d03_dm07 src/dm03_class/dm07_deep_copy.cpp)
#add_executable(czbk_cpp ${EXE_SOURCES}  src/classbasic/MyTeacher.cpp src/classbasic/MyTeacher.h src/classbasic/d202_class_header.cpp src/day03/d01_constructor.cpp src/day03/d04_constructor.cpp src/day03/d05_constructor.cpp src/day03/d06_constructor.cpp src/day03/d07_copy.cpp src/inerface.h src/day03/d10_constructor_list.cpp src/day03/d13_new_delete.cpp)