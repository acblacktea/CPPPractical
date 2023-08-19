//
// Created by ByteDance on 19/8/23.
//

#ifndef CPPPRACTICAL_ADDTWONUMBERS_H
#define CPPPRACTICAL_ADDTWONUMBERS_H

#include <iostream>
using namespace std;
namespace LeetCode {
    class Convert
    {
    public:
        static string convert(string s, int numRows);
    protected:
    private:
    };

    string Convert::convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        string ansArray[numRows];
        int currentRow = 0, dir[2] = {1, -1}, currentIndex = 0, nextRow;
        for (int i = 0; i < s.size(); ++i) {
            ansArray[currentRow] += s[i];
            nextRow = currentRow + dir[currentIndex];
            if (nextRow >= numRows || nextRow < 0) {
                currentIndex = 1 - currentIndex;
            }

            currentRow = currentRow + dir[currentIndex];
        }

        string ans;
        for (int i = 0; i < numRows; ++i) {
            ans = ans + ansArray[i];
        }

        return ans;
    }

    void testConvert() {
        cout << Convert::convert("PAYPALISHIRING",3) << endl;
        cout << Convert::convert("PAYPALISHIRING", 4) << endl;
    }
}

#endif //CPPPRACTICAL_ADDTWONUMBERS_H
