cmake_minimum_required(VERSION 3.17.0)
project(GradeCalc VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_executable(main ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
