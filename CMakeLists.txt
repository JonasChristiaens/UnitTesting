cmake_minimum_required(VERSION 3.20)
cmake_policy(SET CMP0135 NEW)

project(UnitTesting)

# specify source files
SET(${PROJECT_NAME}_SOURCES
	"src/main.cpp"
	"src/FunctionsUtil.h"
	"src/FunctionsUtil.cpp"
)

# specify source files for test
SET(TEST_SOURCES
	"src/doctest_UnitTesting.cpp"
	"src/FunctionsUtil.h"
	"src/FunctionsUtil.cpp"
)

# create executables for main and for tests
add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})
add_executable(UnitTesting_tests ${TEST_SOURCES})

# specify c++ standard for main and for tests
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_compile_features(UnitTesting_tests PRIVATE cxx_std_17)

include(FetchContent)
FetchContent_Declare(
	doctest 
	URL https://github.com/doctest/doctest/archive/refs/tags/v2.4.11.tar.gz
)
FetchContent_MakeAvailable(doctest)

# link libraries for main and for tests
target_link_libraries(${PROJECT_NAME} PRIVATE doctest::doctest)
target_link_libraries(UnitTesting_tests PRIVATE doctest::doctest)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${doctest_SOURCE_DIR}/scripts/cmake/")
include(doctest)

enable_testing()
doctest_discover_tests(${PROJECT_NAME})
doctest_discover_tests(UnitTesting_tests)