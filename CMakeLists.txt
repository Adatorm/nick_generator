cmake_minimum_required(VERSION 3.1)
project(nick_generator)

set (CMAKE_CXX_STANDARD 11)

# third party

# Includes files
INCLUDE_DIRECTORIES(/home/guner/Packages/nana/include)

# Link libraries
LINK_DIRECTORIES(/home/guner/Packages/nana/build/bin)



add_executable(nick_generator NickGenerator.cpp Alphabet.cpp main.cpp)

# Add the library that is used by nt_init
TARGET_LINK_LIBRARIES(nick_generator libnana.a X11 pthread rt Xft png asound fontconfig stdc++fs)



install(TARGETS nick_generator RUNTIME DESTINATION bin)

