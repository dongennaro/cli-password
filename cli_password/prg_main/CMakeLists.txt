cmake_minimum_required(VERSION 3.0)

project(cli-password)

set(CMAKE_CXX_STANDARD 11)

add_executable(cli-password main.cpp)

target_include_directories(cli-password PRIVATE ~/cli_password/prg_main ~/cli_password/prg_main/prg_hdrs)