 # cmake最低版本号要求
 cmake_minimum_required(VERSION 3.14)

 # 项目名
 project(UnitTestDemo1)

 set(CMAKE_CXX_STANDARD 11)

 set(GOOGLETEST_VERSION 1.10.0 )

 # 添加头文件, include头文件时搜索的所有目录
 include_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/include
 )

 # 添加下级目录，生成.a文件

 # 添加连接库
 link_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/src
 )

 add_executable(main

         src/include/Student.h
         src/include/test.h
         src/include/firstdirtest.h
         src/include/seconddirtest.h
         src/firstdir/Student.cpp
         src/test.cpp
         src/firstdir/seconddir/seconddirtest.cpp
         src/firstdir/firstdirtest.cpp
         src/main.cpp)

 # 将目标文件与库文件进行链接


 # 指定可执行文件的生成位置
 set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
