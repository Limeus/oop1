cmake_minimum_required(VERSION 3.27.8)
project(oop1)

set(CMAKE_CXX_STANDARD 20)

add_library(oop1_solution
        solution.cpp
)

add_executable(oop1
        main.cpp
)
target_link_libraries(oop1 oop1_solution)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/0953a17a4281fc26831da647ad3fcd5e21e6473b.zip
)
FetchContent_MakeAvailable(googletest)


add_executable(solution_tests
        solution_test.cpp
)
target_link_libraries(
        solution_tests
        oop1_solution
        GTest::gtest_main
)

enable_testing()
include(GoogleTest)
gtest_discover_tests(solution_tests)