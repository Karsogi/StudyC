# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(StudyC LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable target
add_executable(Guess src/Guess/Guess.cpp)
add_executable(EqualSequences src/EqualSequences/EqualSequences.cpp)
add_executable(CheckName src/CheckName/CheckName.cpp
        src/Test/test.cpp
        "src/Sum of two numbers/Sum of two numbers.cpp"
        src/boxPrint/boxPrint.cpp)
add_executable(Prime src/Prime/Prime.cpp)
add_executable(String src/String/String.cpp)
add_executable(Digit src/Digit/Digit.cpp)
