
cmake_minimum_required(VERSION 3.5)

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(median main.cpp)
target_compile_features(median PRIVATE cxx_lambda_init_captures)



