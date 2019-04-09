
cmake_minimum_required(VERSION 3.5)
project(median_est)


add_compile_options(-Wall -Wextra -Wpedantic)


# Setup testing
find_package(GTest REQUIRED)
enable_testing()
include_directories(/usr/local/ /usr/local/include/ /usr/local/include/gtest/)


# Add tested cpp file
file(GLOB_RECURSE medianSRS "../*.cpp")
file(GLOB_RECURSE medianHEADERS "../*.h")

set (medianINCLUDE_DIRS "")
foreach(_headerfile ${medianHEADERS})
    get_filename_component(_dir ${_headerfile} PATH)
    list (APPEND medianINCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES medianINCLUDE_DIRS)

add_executable(runUnitTest main.cpp median.cpp list.cpp)
target_include_directories(runUnitTest PRIVATE medianINCLUDE_DIRS)

# Link tested executable with gtest and gtest_main
target_link_libraries(runUnitTest /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a)

add_test(NAME runUnitTest COMMAND runUnitTest)

target_compile_features(runUnitTest PRIVATE cxx_lambda_init_captures)



