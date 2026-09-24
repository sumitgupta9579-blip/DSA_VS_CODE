// /* Structure of Linked List Node
// class Node {
//   public:
//     int data;
//     Node* next;
//     Node(int x) {
//         data = x;
//         next = nullptr;
//     }
// }; */

// class Solution {
//   public:
//     int getKthFromLast(Node* head, int k) {
//         // code here
//         Node* temp = head ;
//         int length = 0 ;
//         while(temp!=NULL){
//             temp = temp->next;
//             length++;
//         }
//         if(k > length ) return -1;
//         temp = head ;
//         for(int i=1 ;i<=length-k;i++){
//             temp = temp->next;
//         }
//         return temp->data;
//     }
// };