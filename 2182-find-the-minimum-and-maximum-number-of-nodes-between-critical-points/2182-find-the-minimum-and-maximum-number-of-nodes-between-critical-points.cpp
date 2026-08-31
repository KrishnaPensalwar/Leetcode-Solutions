/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        // if (head == nullptr || head->next == nullptr ||
        //     head->next->next == nullptr) {
        //     return {-1, -1};
        // }

        // vector<int> points;

        // ListNode* prev = head;
        // ListNode* curr = prev->next;
        // ListNode* next = curr->next;

        // int index = 1;

        // while (next != nullptr) {

        //     if ((curr->val > prev->val && curr->val > next->val) ||
        //         (curr->val < prev->val && curr->val < next->val)) {
        //         points.push_back(index);
        //     }

        //     prev = curr;
        //     curr = curr->next;
        //     next = curr->next;
        //     index++;
        // }

        // if (points.size() < 2) {
        //     return {-1, -1};
        // }

        // int mini = INT_MAX;

        // for (int i = 0; i < points.size() - 1; i++) {
        //     mini = min(mini, points[i + 1] - points[i]);
        // }

        // int maxi = points.back() - points.front();

        // return {mini, maxi};

        // optimised version space


        ListNode*prev = head;
        ListNode*curr = head->next;
        int currpos = 0 ;
        int prevcp = -1;
        int firstcp =-1;
        int mindis = INT_MAX;


        while(curr->next!=NULL){
            if(curr->val < prev->val && curr->val < curr->next->val || curr->val > prev->val && curr->val > curr->next->val ){

                //ager hume abbhi tak koi critical point nhi mila toh 
                if(prevcp == -1){
                    prevcp = currpos;
                    firstcp = currpos;
                }
                else{
                    //ab hume mil chuka hai critical point toh 
                    
                    mindis = min(mindis , currpos - prevcp);
                    prevcp = currpos;
                }
            }
            currpos ++;
            prev = curr;
            curr = curr->next;
        }

        if(mindis == INT_MAX){
            return {-1,-1};
        }
        return {mindis,prevcp-firstcp};
    }
};