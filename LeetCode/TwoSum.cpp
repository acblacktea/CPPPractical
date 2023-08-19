//
// Created by ByteDance on 19/8/23.
//

#include "TwoSum.h"
#include <algorithm>
using namespace std;
namespace LeetCode {
    bool cmp(pair<int, int> a, pair<int, int>b){
        return a.first < b.first;
    }

    vector<int> TwoSum::twoSum(vector<int> &nums, int target) {
        vector<pair<int, int>>ve;
        for (int i = 0; i < nums.size(); ++i) {
            ve.emplace_back(nums[i], i);
        }

        sort(ve.begin(), ve.end(), cmp);

        int left = 0, right = ve.size() - 1;
        while(left < right) {
            int sum = ve[left].first + ve[right].first;
            if (sum == target) {
                return vector<int>{ve[left].second, ve[right].second};
            } else if (sum > target) {
                --right;
            } else {
                ++left;
            }
        }

        return {};
    }
}