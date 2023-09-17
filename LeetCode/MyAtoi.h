//
// Created by ByteDance on 17/9/23.
//

#ifndef CPPPRACTICAL_MYATOI_H
#define CPPPRACTICAL_MYATOI_H

#include<string>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                continue;
            }

            long long value = 0;
            int signal = 1;
            if (s[i] == '+') {
                ++i;
            } else if (s[i] == '-') {
                signal = -1;
                ++i;
            }

            long long upperLimit = signal == 1? (1ll<<31) - 1 : 1ll<<31;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                value = min(upperLimit, value * 10ll + s[i++] - '0');
            }

            return signal * value;
        }

        return 0;
    }
};


#endif //CPPPRACTICAL_MYATOI_H
