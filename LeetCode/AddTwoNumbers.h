//
// Created by ByteDance on 19/8/23.
//

#ifndef CPPPRACTICAL_ADDTWONUMBERS_H
#define CPPPRACTICAL_ADDTWONUMBERS_H

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

namespace LeetCode {
    class AddTwoNumbers
    {
    public:
        static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    protected:
    private:
    };


    ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) {
        int nextAdd = 0, leftValue, rightValue, value;
        ListNode *head = nullptr, *current, *tmp, *l1Next, *l2Next;
        while (l1 != nullptr || l2 != nullptr) {
            leftValue = 0, rightValue = 0;
            if (l1 != nullptr) {
                leftValue = l1->val;
                tmp = l1;
                l1Next = l1->next;
            }

            if (l2 != nullptr) {
                rightValue = l2->val;
                tmp = l2;
                l2Next = l2->next;
            }


            value = leftValue + rightValue + nextAdd;
            nextAdd = value / 10;
            value = value % 10;
            if (head != nullptr) {
                current->next = tmp;
                current = tmp;
                current->val = value;
            } else {
                head = current = tmp;
                head->val = value;
            }

            l1 = l1Next;
            l2 = l2Next;
        }

        if (nextAdd) {
            current->next = new ListNode(1);
        }

        return head;
    }

    void testAddTwoNumbers() {
        ListNode *l1, *l2, *ans;
        l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
        l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
        ans = AddTwoNumbers::addTwoNumbers(l1, l2);
        while (ans != nullptr) {
            std::cout << ans->val;
            ans = ans->next;
        }

        std::cout << std::endl;

        l1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
        l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9)))))));
        ans = AddTwoNumbers::addTwoNumbers(l1, l2);
        while (ans != nullptr) {
            std::cout << ans->val;
            ans = ans->next;
        }

        std::cout << std::endl;

    }
}

#endif //CPPPRACTICAL_ADDTWONUMBERS_H
