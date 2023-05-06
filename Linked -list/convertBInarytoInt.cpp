#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    int pairSum(ListNode* head) {
        int sum = 0;
        int maxi = -1;
        while (head && head->next) {
            sum = sum + head->val + head->next->val;
            maxi = max(sum, maxi);
            sum = 0;
            head = head->next;
        }
        return maxi;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(10);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution s;
    int result = s.pairSum(head);

    cout << "The maximum sum of adjacent node pairs is: " << result << endl;

    return 0;
}
