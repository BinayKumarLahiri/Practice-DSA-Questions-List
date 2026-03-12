/**/


#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // Floyd’s Cycle-Finding Algorithm (Tortoise and Hare)
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) {
            return false;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Moves 1 step
            fast = fast->next->next;    // Moves 2 steps

            if (slow == fast) {
                return true; // Pointers met, loop exists
            }
        }

        return false; // Fast reached the end, no loop
    }
};

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        if (n == 0) {
            int pos; cin >> pos;
            cout << "False" << endl;
            continue;
        }

        vector<int> vals(n);
        for (int i = 0; i < n; i++) {
            cin >> vals[i];
        }

        int pos;
        cin >> pos;

        // Create the nodes
        vector<ListNode*> nodes;
        for (int i = 0; i < n; i++) {
            nodes.push_back(new ListNode(vals[i]));
        }

        // Connect nodes linearly
        for (int i = 0; i < n - 1; i++) {
            nodes[i]->next = nodes[i + 1];
        }

        // Create the loop if pos is valid
        if (pos != -1 && pos < n) {
            nodes[n - 1]->next = nodes[pos];
        }

        Solution sol;
        if (sol.hasCycle(nodes[0])) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }

        // Memory Management:
        // Note: In a loop scenario, standard deletion will cause an infinite loop.
        // We break the loop before deleting for a clean exit.
        if (pos != -1) nodes[n - 1]->next = nullptr;
        for (ListNode* node : nodes) {
            delete node;
        }
    }

    return 0;
}