# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.26)

# Set the project name
project(StudyC LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         11.0.2
)

FetchContent_MakeAvailable(fmt)

# Add the executable target
add_executable(Guess src/Guess/Guess.cpp)
add_executable(EqualSequences src/EqualSequences/EqualSequences.cpp)
add_executable(CheckName src/CheckName/CheckName.cpp)
add_executable(Test src/Test/test1.cpp)
add_executable(SumOfTwoNumbers src/SumOfTwoNumbers/SumOfTwoNumbers.cpp)
add_executable(BoxPrint src/BoxPrint/BoxPrint.cpp)
add_executable(Prime src/Prime/Prime.cpp)
add_executable(String src/String/String.cpp)
add_executable(Digit src/Digit/Digit.cpp)
add_executable(PassByRefVsPassByVal src/PassByRevVsPassByVal/Main.cpp)
add_executable(MyGreatest src/Greatest/MyGreatest.cpp)
add_executable(Greatest src/Greatest/Greatest.cpp)
add_executable(SortingBiggerHalf src/SortingBiggerHalf/SortingBiggerHalf.cpp)
add_executable(test2 src/test2/testik.cpp)
add_executable(RemovingDuplicates src/RemovingDuplicates/RemovingDuplicates.cpp)
add_executable(TextFormatting src/TextFormatting/TextFormatting.cpp)
add_executable(ReverseWords src/ReverseWords/ReverseWords.cpp)
add_executable(Palindromes src/Palindromes/Palindromes.cpp)
add_executable(ShortTest1 src/Practice/ShortTest1.cpp)
add_executable(SumOfTwo src/Practice/SumOfTwo.cpp)
add_executable(FindingTheLongestString src/FindingTheLongestString/FindingTheLongestString.cpp)

target_link_libraries(MyGreatest fmt)
target_link_libraries(Test fmt)
target_link_libraries(SortingBiggerHalf fmt)
target_link_libraries(RemovingDuplicates fmt)
target_link_libraries(TextFormatting fmt)
target_link_libraries(ReverseWords fmt)
target_link_libraries(Palindromes fmt)
target_link_libraries(FindingTheLongestString fmt)