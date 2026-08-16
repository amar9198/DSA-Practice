class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;

        // Store all node values in stack
        ListNode* temp = head;

        while (temp != NULL) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Compare linked list values with stack
        temp = head;

        while (temp != NULL) {
            if (temp->val != st.top()) {
                return false;
            }

            st.pop();
            temp = temp->next;
        }

        return true;
    }
};