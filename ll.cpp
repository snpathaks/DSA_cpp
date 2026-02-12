//Linked list : LL DSA is a collection of nodes consisting of values which points to the next node .
//Node: Node refers to the smallest block of  ll.
// ll consits of data and address(of the next node) .
//No contiguous memory location . each node is independent to each other. No indexing we can iterate it using 
//T.C of accessing an element : O(n).
//Structure of LL :
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public :
//     int data; 
//     Node* next ; 
//     Node(int data){
//       this->data = data;
//       this->next = NULL;
//     }
// };
// int main(){
//     Node* next;
//     Node* head = new  Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     Node* dummy = head; 
//     while(dummy != NULL){
//         cout<<dummy->data<<" ";
//         dummy = dummy->next;
//     }
// }

//Insertion at the start--------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public :
//     int data; 
//     Node* next ;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Node* insertatstart( Node* head , int val){
//     Node* newhead = new Node(val);
//     newhead->next = head;
//     return newhead;
// }

// int main(){
//     Node* head = new  Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head = insertatstart(head , 50);
//     Node* dummy = head; 
    
//     while(dummy != NULL){
//         cout<<dummy->data<<" ";
//         dummy = dummy->next;
//     }
// }

//Insert At end------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public :
//     int data; 
//     Node* next ;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Node* insertatend( Node* head , int val){
//     Node* newNode = new Node(val);
//     Node* last = head;
//     while(last->next != NULL){
//         last = last->next;
//     }
//     last->next = newNode;
//     return head;
// }

// int main(){
//     Node* head = new  Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head = insertatend(head , 50);
//     Node* dummy = head; 
    
//     while(dummy != NULL){
//         cout<<dummy->data<<" ";
//         dummy = dummy->next;
//     }
// }

//Deletion at Start---------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public :
//     int data; 
//     Node* next ;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Node* deleteatstart( Node* head , int val){
//     Node* newNode = new Node(val);
//     Node* top = head;
//     head = head->next;
//     delete(top);
//     return head;
   
//     // temp->next = newNode;
//     // return head;
// }

// int main(){
//     Node* head = new  Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head = deleteatstart(head , 50);
//     Node* dummy = head; 
    
//     while(dummy != NULL){
//         cout<<dummy->data<<" ";
//         dummy = dummy->next;
//     }
// }

//DeleteAtEnd---------------------??-----------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public :
//     int data; 
//     Node* next ;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// Node* deleteatstart( Node* head , int val){
//     Node* newNode = new Node(val);
//     Node* last = head;
//     head = head->next;
//     while(last->next != NULL){
//         delete(last);
//     }
//     last->next=newNode;
//     return head;
   
//     // temp->next = newNode;
//     // return head;
// }

// int main(){
//     Node* head = new  Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     head = deleteatstart(head , 50);
//     Node* dummy = head; 
    
//     while(dummy != NULL){
//         cout<<dummy->data<<" ";
//         dummy = dummy->next;
//     }
// }

//LC :237 Delete Node in  A LL----------------------------------------------------------------------------------------
    // ListNode* slow = head;
    //     ListNode* fast = head ;
    //     while(fast != nullptr && fast->next != nullptr){
    //         slow = slow->next ;
    //         fast = fast->next->next;

    //     }
    //     return slow;


//GFG: Delete in a Singly LiNKED List--------------------------------------------------------------------------------
// /*
// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }
// };
// */
// class Solution {
//   public:
//     Node* deleteNode(Node* head, int x) {

//         Node* temp = head;
//         if(x==1){
//             head = head->next;
//             delete temp;
//             return head;
//         }
//         Node* curr = head;
//         for(int i=0 ; i<x-2; i++){
//             curr = curr->next;
//             if(curr == NULL) return head;
//         }
//         curr->next = curr->next->next;
//         return head;
        
//     }
// };


//LC 876 :Middle of the LL------------------------------------------------------------------------------------------
//Tortoise AND Horse algo----------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//        ListNode* slow = head;
//        ListNode* fast = head;
//        while(fast != NULL && fast->next != NULL){
//           slow=slow->next;
//           fast = fast->next->next;
//        }
//        return slow;
//     }
// };



//LC : 141 Linked List Cycle----------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head ; 
//         ListNode* fast = head;
//         while(fast != NULL && fast->next != NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//             if(slow == fast){
//                 return true;
//             }
            
//         }
//         return false;
       
        
        
//     }
// };

//LC : 206 :Reverse a lInked LIST------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while(curr != NULL){
//            ListNode* next = curr->next;
//            curr->next= prev;
//            prev = curr;
//            curr = next;
//         }
//         return prev;
        
//     }
// };


//LC : 234 : Palindrome Linked List-----------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std; 
// class Solution{
// public:
//   ListNode* reverse(ListNode* head){
//     ListNode* prev = NULL;
//     ListNode* curr = head;
//     while(curr !=  NULL){
//         ListNode* next = curr->next; 
//         curr->next = prev ;
//          prev = curr;
//          curr = next; 
//     }
//     return prev;
//   }
//   bool isPalindrome(ListNode* head){
//     if(head == NULL && head->next == NULL)return true;
//     ListNode* slow = head;
//     ListNode* fast = head;
//     while(fast != NULL && fast->next != NULL && fast->next->next != NULL){
//          slow = slow->next;
//          fast = fast->next->next;
//     }
//     ListNode* sechalf = reverse(slow->next);
//     ListNode* frsthalf = head;
//     while(sechalf != NULL){
//      if(frsthalf->val != sechalf->val){
//           return false;
//      }
//      frsthalf = frsthalf->next;
//      sechalf = sechalf->next;
//     }
//     return true;

//   }


// };

//LC : 83 Remove duplicates from Sorted List---------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// class Solution{
// public:
//    ListNode* removeduplicates(ListNode* head){
//        if(head == NULL) return NULL;
//        ListNode* curr = head;
//        while(curr->next != NULL){
//           if(curr->val != curr->next->val){
//               ListNode* dup = curr->next;
//               curr->next = curr->next->next;
//               delete dup;
//           }else{
//             curr = curr->next;
//           }
//         }
//         return head;
//    }
// };

//LC 21 : merge two Sorted List------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// class Solution{
// public:
//   ListNode* mergelist(ListNode* list1 , ListNode* list2){

          
//   }
// }



// LC : 160 Intersection of Two Linekd List-------------------------------------------------------------
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode* curr1 = heada;
        ListNode* curr2 = headb;
        int cnt1 = 0;
        while(curr1 != NULL){
            cnt1++;
            curr1 = curr1->next;
        }
        int cnt2 = 0 ; 
        while(curr2 != NULL){
            cnt2++;
            curr2 = curr2->next;
        }
        int k  = abs(cnt1 - cnt2);
       
        
        if(cnt1 > cnt2){
            curr1 = heada ;
            curr2 = headb;
        }else{
            curr1 = headb;
            curr2 = heada;
        }
        for(int i=0 ; i<k ; i++) curr1 = curr1->next;
        while(curr1 != NULL && curr2 != NULL){
            if(curr1 == curr2)return curr1;
            curr1 = curr1->next; 
            curr2 = curr2->next;
            
        }
        return NULL;

        
    }
};


//LC 19 :Remove the nth node from end of list-----------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        ListNode* curr = head;
        int size  = 0 ; 
        while(curr){
            curr = curr->next;
            size++;
        }
        curr = head;
        if(n==size)return head->next;
        for(int i=1; i<size-n ; i++){
            curr = curr->next;
            
            
        }
        curr->next = curr->next->next;
        return head;
        
    }
};

//LC : 328 Odd Even Linked List-----------------------------------------------------------------------------------
 

#incldue<bits/stdc++.h>

// LC : 24 Swap Nodes in Pairs--------------------------------------------------------------


//DOUBLY LINKED LIST--------------------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node* prev;
//         Node(int data){
//             this->data=data;
//             next=NULL;
//             prev=NULL;   
//         }
        
// };
// Node* deleteAtEnd(Node* tail){
//      Node* temp=tail->prev;
//     tail->prev=NULL;
//     temp->next=NULL;
//     return temp;
// }
// Node* deleteAtStart(Node* head){
//     head->next->prev=NULL;
//     return head->next;
// }
// Node* insertatEnd(Node* tail, int val){
//     Node* nn=new Node(val);
//     tail->next=nn;
//     nn->prev=tail;
//     tail=nn;
//     return tail;
// }
// Node* insertAtStart(Node* head, int val){
//     Node* newNode=new Node(val);
//     newNode->next=head;
//     head->prev=newNode;
//     head=newNode;
//     return head;
// }
// int main() {
//     // Write C++ code here
//     Node* head=new Node(5);
//     Node* tail=head;
//     // Insertion at start
//     head=insertAtStart(head,4);
//     head=insertAtStart(head,3);
//     head=insertAtStart(head,2);
    
    
//     // insertion at end
//     tail=insertatEnd(tail,6);
//     tail=insertatEnd(tail,7);
//     tail=insertatEnd(tail,8);
    
    
//     // deletion at start
//     head=deleteAtStart(head);
    
//     // deletiion at end
//     tail=deleteAtEnd(tail);
    
    
//     // Printing the Node values
//     Node* curr=head;
//     while(curr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
    
    

//     return 0;
// }

//Reverse a Doubly Linekd list------------------------------------------------------------------
// /*
// class Node {
//   public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int val) {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };

// */
// class Solution {
//   public:
//     Node *reverse(Node *head) {
//         // code here
//         if(!head || !head->next) return head;
//         Node* curr = head;
//         Node* prevn = NULL;
//         //Node* prev = NULL;
//         while(curr){
//          prevn= curr->prev;
//          curr->prev = curr->next;
//          curr->next = prevn;
//          curr = curr->prev;
//         }
//         return prevn->prev;
         
        
        
        
        
//     }
// };

