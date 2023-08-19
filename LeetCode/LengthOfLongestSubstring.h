//
// Created by ByteDance on 19/8/23.
//

#ifndef CPPPRACTICAL_LENGTHOFLONGESTSUBSTRING_H
#define CPPPRACTICAL_LENGTHOFLONGESTSUBSTRING_H

#include <string>
#include <iostream>
using namespace std;
//lengthOfLongestSubstring

namespace LeetCode {
    class LengthOfLongestSubstring
    {
    public:
        static int lengthOfLongestSubstring(string s);
    protected:
    private:
    };


    int lengthOfLongestSubstring(string s) {
        int flag[256];
        memset(flag, 0, sizeof(flag));
        int left = 0, ans = 0;
        for (int i = 0; i < s.size(); ++i) {
            ++flag[s[i]];
            if (flag[s[i]] > 1) {
                while (flag[s[i]] > 1) {
                    --flag[s[left]];
                    ++left;
                }
            } else {
                ans = max(ans, i - left + 1);
            }
        }

        return ans;
    }

    void testLengthOfLongestSubstring() {
        std::cout << lengthOfLongestSubstring("abcabcbb") << std::endl;
        std::cout << lengthOfLongestSubstring("bbbbb") << std::endl;
        std::cout << lengthOfLongestSubstring("pwwkew") << std::endl;
    }
}

#endif //CPPPRACTICAL_LENGTHOFLONGESTSUBSTRING_H
