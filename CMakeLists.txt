
cmake_minimum_required(VERSION 3.5)
project(median_est)


add_compile_options(-Wall -Wextra -Wpedantic)


# Setup testing
find_package(GTest REQUIRED)
enable_testing()
include_directories(/usr/local/ /usr/local/include/ /usr/local/include/gtest/)

# Add tested cpp file
add_executable(runUnitTest main.cpp)

# Link tested executable with gtest and gtest_main
target_link_libraries(runUnitTest /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a)

add_test(NAME runUnitTest COMMAND runUnitTest)

target_compile_features(runUnitTest PRIVATE cxx_lambda_init_captures)



