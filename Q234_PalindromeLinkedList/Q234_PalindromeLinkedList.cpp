#include <iostream>
#include <stack>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {
    ListNode* tmp = head;
    stack<int> seen;

    while (tmp != nullptr) {
        seen.push(tmp->val);
        tmp = tmp->next;
    }

    tmp = head;

    while (tmp != nullptr) {
        if (tmp->val != seen.top()) {
            return false;
        }
        seen.pop();
        tmp = tmp->next;
    }

    return true;
}

int main()
{
    return 0;
}