cmake_minimum_required(VERSION 3.8)
project(CPPBasic)

set(CMAKE_CXX_STANDARD 14)

#FILE(GLOB_RECURSE EXE_SOURCES
#        RELATIVE "${PROJECT_SOURCE_DIR}"
#        "src/dm01_basic/*.cpp"
#        "src/classbasic/*.cpp"
#        )

#add_executable(CPPBasic src/dm01_basic/dm01_namespace.cpp)
#add_executable(CPPBasic_d01_dm03 src/dm01_basic/dm03_struct.cpp)
#add_executable(CPPBasic_d01_dm04 src/dm01_basic/dm04_boolean.cpp)
#add_executable(CPPBasic_d01_dm05 src/dm01_basic/dm05_operation.cpp)
#add_executable(CPPBasic_d01_dm06 src/dm01_basic/dm06_const.cpp)
#add_executable(CPPBasic_d01_dm07 src/dm01_basic/dm07_const_define.cpp)
#add_executable(CPPBasic_d02_dm08 src/dm02_refrence/dm01_reference.cpp)
#add_executable(CPPBasic_d02_dm02 src/dm02_reference/dm02_reference_struct.cpp)
#add_executable(CPPBasic_d02_dm03 src/dm02_refrence/dm03_reference_pointer.cpp)
#add_executable(CPPBasic_d02_dm04 src/dm02_reference/dm04_reference_return.cpp)
#add_executable(CPPBasic_d02_dm05 src/dm02_reference/dm05_reference_pointer.cpp)
#add_executable(CPPBasic_d02_dm06 src/dm02_refrence/dm06_const.cpp)
#add_executable(CPPBasic_d03_dm01 src/dm03_class/dm01_basic.cpp)
#include_directories(src/dm03_class/)
#add_executable(CPPBasic_d03_dm02 src/dm03_class/dm02_header.cpp src/dm03_class/MyTeacher.cpp)
#target_include_directories(CPPBasic_d03_dm02
#        PRIVATE
#        ${PROJECT_SOURCE_DIR}/src/dm03_class
#        )
#add_executable(CPPBasic_d03_dm03 src/dm03_class/dm03_constructor.cpp)
#add_executable(CPPBasic_d03_dm04 src/dm03_class/dm04_copy_constructor.cpp)
#add_executable(CPPBasic_d03_dm05 src/dm03_class/dm05_copy_param_constructor.cpp)
#add_executable(CPPBasic_d03_dm06 src/dm03_class/dm06_copy_constructor.cpp)
#add_executable(CPPBasic_d03_dm07 src/dm03_class/dm07_deep_copy.cpp)
#add_executable(CPPBasic_d03_dm08 src/dm03_class/dm08_constructor_list.cpp)
#add_executable(CPPBasic_d03_dm09 src/dm03_class/dm09_new_delete.cpp)
#add_executable(CPPBasic_d03_dm10 src/dm03_class/dm10_static.cpp)
#add_executable(CPPBasic_d03_dm11 src/dm03_class/dm11_class.cpp)
#add_executable(CPPBasic_d03_dm12 src/dm03_class/dm12_const_this.cpp)
#add_executable(CPPBasic_d04_dm01 src/dm04/dm01_const.cpp)
#add_executable(CPPBasic_d04_dm02 src/dm04_operator/dm02_firend_class.cpp)
#add_executable(CPPBasic_d04_dm03 src/dm04_operator/dm03_operator_add.cpp)
#add_executable(CPPBasic_d04_dm04 src/dm04_operator/dm04_operator_print.cpp)
#add_executable(CPPBasic_d04_dm05 src/dm04/dm05_operator_equals.cpp)
#add_executable(CPPBasic_d04_dm06 src/dm04_operator/dm06_operator_bracket.cpp)
#include_directories(src/dm04_operator/)
#add_executable(CPPBasic_d04_dm07 src/dm04_operator/dm07_mystring_test.cpp src/dm04_operator/MyString.cpp)
#add_executable(CPPBasic_d05_01 src/dm05_extend/dm01_basic.cpp)
#add_executable(CPPBasic_d05_02 src/dm05_extend/dm02_constructor.cpp)
#add_executable(CPPBasic_d05_03 src/dm05_extend/dm03_multi_obj.cpp)
#add_executable(CPPBasic_d05_04 src/dm05_extend/dm04_same_var_fun.cpp)
#add_executable(CPPBasic_d05_05 src/dm05_extend/dm05_static.cpp)
#add_executable(CPPBasic_d05_06 src/dm05_extend/dm06_multi_extend.cpp)
#add_executable(CPPBasic_d05_07 src/dm05_extend/dm07_virtual_extend.cpp)
#add_executable(CPPBasic_d06_01 src/dm06_polymorphic/dm01_virtual.cpp)
#add_executable(CPPBasic_d06_02 src/dm06_polymorphic/dm02_polymorphic.cpp)
#add_executable(CPPBasic_d06_01 src/dm06_thread/dm01_thread.cpp)
#add_executable(CPPBasic_d06_02 src/dm06_thread/dm02_thread.cpp)
#add_executable(CPPBasic_d06_03 src/dm06_thread/dm03_mutex.cpp)
#add_executable(CPPBasic_d06_04 src/dm06_thread/dm04_condition1.cpp)
#add_executable(CPPBasic_d06_05 src/dm06_thread/dm05_condition2.cpp)
#add_executable(CPPBasic_d06_06 src/dm06_thread/dm06_wait_for.cpp)
#add_executable(CPPBasic_thread src/thread/thread_operator.cpp)

add_executable(CPPBasic_test src/exercise/Test.cpp)

#set(SRCS
#        src/thread/RunLoop.cpp
#        src/dm07_trhead_demo/LmRunLoop.cpp
#        src/dm07_trhead_demo/ThreadDemo.cpp
#        )
#
#include_directories(${CPPBasic_SOURCE_DIR}/src)
#
#add_executable(ThreadDemo ${SRCS})
#add_executable(app_cpp ${EXE_SOURCES}  src/classbasic/MyTeacher.cpp src/classbasic/MyTeacher.h src/classbasic/d202_class_header.cpp src/day03/d01_constructor.cpp src/day03/d04_constructor.cpp src/day03/d05_constructor.cpp src/day03/d06_constructor.cpp src/day03/d07_copy.cpp src/inerface.h src/day03/d10_constructor_list.cpp src/day03/d13_new_delete.cpp)