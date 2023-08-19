#include <iostream>
#include "LeetCode/LeetCode.h"
int main() {

    std::vector<int> testCase1 = std::vector<int>{2, 7, 11, 15};
    std::vector<int> ans = LeetCode::LeetCode::twoSum(testCase1, 9);
    std::cout << ans[0] << " " << ans[1] << std::endl;

    testCase1 = std::vector<int>{3, 2, 4};
    ans = LeetCode::LeetCode::twoSum(testCase1, 6);
    std::cout << ans[0] << " " << ans[1] << std::endl;

    testCase1 = std::vector<int>{3, 3};
    ans = LeetCode::LeetCode::twoSum(testCase1, 6);
    std::cout << ans[0] << " " << ans[1] << std::endl;
    return 0;
}
