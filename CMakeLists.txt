cmake_minimum_required(VERSION 3.26)
project(CPPPractical)

set(CMAKE_CXX_STANDARD 23)

add_executable(CPPPractical main.cpp
        LeetCode/TwoSum.h
        LeetCode/TwoSum.cpp
        LeetCode/AddTwoNumbers.h
        LeetCode/LengthOfLongestSubstring.h
        LeetCode/ReverseInteger.h)
