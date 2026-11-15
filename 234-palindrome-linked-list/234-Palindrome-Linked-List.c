/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode Node;

bool isPalindrome(Node* head) {
    int stack[100000] = { 0 };
    int top = 0;
    Node* node = head;
    while (node) {
        stack[top++] = node->val;
        node = node->next;
    }
    while (head && head->val == stack[--top])
        head = head->next;
    return head == NULL;
}