cmake_minimum_required(VERSION 2.6)
project(nick_generator)

add_executable(nick_generator main.cpp)

install(TARGETS nick_generator RUNTIME DESTINATION bin)
