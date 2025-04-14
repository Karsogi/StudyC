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
add_executable(Guess src/archive/Guess/Guess.cpp)
add_executable(EqualSequences src/archive/EqualSequences/EqualSequences.cpp)
add_executable(CheckName src/archive/CheckName/CheckName.cpp)
add_executable(Test src/archive/Test/test1.cpp)
add_executable(SumOfTwoNumbers src/archive/SumOfTwoNumbers/SumOfTwoNumbers.cpp)
add_executable(BoxPrint src/archive/BoxPrint/BoxPrint.cpp)
add_executable(Prime src/archive/Prime/Prime.cpp)
add_executable(String src/archive/String/String.cpp)
add_executable(Digit src/archive/Digit/Digit.cpp)
add_executable(PassByRefVsPassByVal src/archive/PassByRevVsPassByVal/Main.cpp)
add_executable(MyGreatest src/archive/Greatest/MyGreatest.cpp)
add_executable(Greatest src/archive/Greatest/Greatest.cpp)
add_executable(SortingBiggerHalf src/archive/SortingBiggerHalf/SortingBiggerHalf.cpp)
add_executable(test2 src/archive/test2/testik.cpp)
add_executable(RemovingDuplicates src/archive/RemovingDuplicates/RemovingDuplicates.cpp)
add_executable(TextFormatting src/archive/TextFormatting/TextFormatting.cpp)
add_executable(ReverseWords src/archive/ReverseWords/ReverseWords.cpp)
add_executable(Palindromes src/archive/Palindromes/Palindromes.cpp)
add_executable(ShortTest1 src/archive/Practice/ShortTest1.cpp)
add_executable(SumOfTwo src/archive/Practice/SumOfTwo.cpp)
add_executable(FindingTheLongestString src/archive/FindingTheLongestString/FindingTheLongestString.cpp)
add_executable(MinMaxSwapped src/archive/MinMaxSwapped/test.cpp)
add_executable(ModificationOfElements src/archive/ModificationOfElements/ModificationOfElements.cpp)
add_executable(ReducingAdjacentWhitespaceCharacters src/archive/ReducingAdjacentWhitespaceCharacters/ReducingAdjacentWhitespaceCharacters.cpp)
add_executable(RefactoringWithLAndA src/archive/RefactoringWithLAndA/RefactoringWithLAndA.cpp)
add_executable(AlgorithCustomVersion src/archive/AlgorithmCustomVersion/AlgorithmCustomVersion.cpp)
add_executable(NaturalSorting src/archive/NaturalSorting/NaturalSortingClass.cpp)
add_executable(EnhancedLibrary src/archive/EnhancedLibrary/EnhancedLibrary.cpp)
add_executable(Main src/main.cpp)
add_executable(ShortTest2 src/shortTest2/main.cpp)
add_executable(ShortTest3 src/shortTest3/main.cpp)

target_link_libraries(MyGreatest fmt)
target_link_libraries(Test fmt)
target_link_libraries(SortingBiggerHalf fmt)
target_link_libraries(RemovingDuplicates fmt)
target_link_libraries(TextFormatting fmt)
target_link_libraries(ReverseWords fmt)
target_link_libraries(Palindromes fmt)
target_link_libraries(FindingTheLongestString fmt)
target_link_libraries(MinMaxSwapped fmt)
target_link_libraries(ModificationOfElements fmt)
target_link_libraries(ReducingAdjacentWhitespaceCharacters fmt)
target_link_libraries(RefactoringWithLAndA fmt)
target_link_libraries(AlgorithCustomVersion fmt)
target_link_libraries(NaturalSorting fmt)
target_link_libraries(ShortTest2 fmt)