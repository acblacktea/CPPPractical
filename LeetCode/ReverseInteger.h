//
// Created by ByteDance on 19/8/23.
//

#ifndef CPPPRACTICAL_REVERSEINTEGER_H
#define CPPPRACTICAL_REVERSEINTEGER_H

#include <iostream>
using namespace std;
namespace LeetCode {
    class ReverseInteger
    {
    public:
        static int reverse(int x);
    protected:
    private:
    };

    int ReverseInteger::reverse(int x) {
       int ans = 0;
       cout << INT_MAX << "  " << INT_MIN << endl;
       while(x) {
           if (ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
           ans = ans * 10 + x % 10;
           x /= 10;
       }

       return ans;
    }

    void testReverse() {
        cout << ReverseInteger::reverse( 123) << endl;
        cout << ReverseInteger::reverse(-123) << endl;
        cout << ReverseInteger::reverse(120) << endl;
    }
}

#endif //CPPPRACTICAL_REVERSEINTEGER_H
