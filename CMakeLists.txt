cmake_minimum_required(VERSION 3.11-3.18)

project(main)

add_executable(main main.c)

target_compile_features(main PUBLIC cxx_std_20)