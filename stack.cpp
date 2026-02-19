//Implemetation of Stack Using ARRAY-------------------------------------------------

// class myStack {
// private:
//    int *arr ; 
//    int topindex;
//    int size;
// public:
//     myStack(int n) {
//         size = n ;
//         topindex = -1 ;
//         arr = new int[size];
//         // Define Data Structures
//     }

//     bool isEmpty() {
//         return topindex == -1;
//         // check if the stack is empty
//     }

//     bool isFull() {
//         return topindex == size - 1;
//         // check if the stack is full
//     }

//     void push(int x) {
//         if(isFull()) return ;
//         arr[++topindex] = x ;
        
//     }

//     void pop() {
//         if(isEmpty())return ; 
        
//         topindex--;
//     }

//     int peek() {
//         if(isEmpty()) return -1;
//         return arr[topindex];
//     }
// };

//Implementation of Stack using Linked List-------------------------------------------------------------------------


// class myStack {
    
//   public:
//     Node* head=NULL;
//     int n=0;
//     myStack() {
//         // Initialize your data members
//     }

//     bool isEmpty() {
//         // check if the stack is empty
//         if(head!=NULL)return false;
//         return true;
        
//     }

//     void push(int x) {
//         // Adds an element x at the top of the stack
//         Node* nn=new Node(x);
//         nn->next=head;
//         head=nn;
//         n++;
//     }

//     void pop() {
//         // Removes the top element of the stack
//         head=head->next;
//         n--;
//     }

//     int peek() {
        
//         // Returns the top element of the stack
//         if(head)return head->data;
//         // If stack is empty, return -1
//         return -1;
        
//     }

//     int size() {
//         // Returns the current size of the stack.
//         return n;
//     }
// };

//Insert an element at the bottom of a Stack-------------------------------------------------------------------------


// class Solution {
//   public:
//     stack<int> insertAtBottom(stack<int> st, int x) {
//         if(st.empty()){
//             st.push(x);
//             return st;
            
//         }
//         int temp = st.top();
//         st.pop();
//         st = insertAtBottom(st , x);
//         st.push(temp);
//         return st;
//     }
// };

//Reverse a Stack --------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// public:
//     void insertatbottom(stack<int>& st , int x){
//         if(st.empty()){
//             st.push(x);
//             return ;
//         }
//         int temp = st.top();
//         st.pop();
//         insertatbottom(st , x);
//         st.push(temp);
//     }
//     void reverseStack(stack<int> &st){
//         if(st.size() <= 1) return ;
//         int temp = st.top();
//         st.pop();
//         reverseStack(st);
//         insertatbottom(st,temp);
//     }

// };

//LC 20 : Valid Parenthesis-------------------------------------------------------------------------------------



//Stack using Queue---------------------------------------------------------------------------------------------
// class myStack {
//     queue<int> q;

// public:

//     void push(int x) {
//         q.push(x);

//        

//         int sz = q.size();
//         while(sz > 1){
//             q.push(q.front());
//             q.pop();
//             sz--;
//         }
//     }

//     void pop() {
//         if(!q.empty())
//             q.pop();
//     }

//     int top() {
//         if(q.empty()) return -1;
//         return q.front();
//     }

//     int size() {
//         return q.size();
//     }
// };

//LC : 225 Implement Stack using Queues------------------------------------------------------------------------



//LC 496 Next Greater Element | ---------------------------------------------------------------------------------

// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
    
//         int n = arr.size();
//         vector<int> ans(n, -1);
//         stack<int> s;

//         for(int i=n-1 ; i>=0 ;i--){
//             while(!s.empty() && s.top() <= arr[i]){
//                  s.pop();
//              }
//             if(!s.empty()){
//                 ans[i] = s.top();
//             }
//             s.push(arr[i]);
//         }
//         unordered_map<int, int> mp ;
//         for(int i=0 ; i<n ;i++){
//             mp[arr[i]] = ans[i];
//         }
//         vector<int> res;
//         for(int i=0; i<nums1.size() ; i++){
//             res.push_back(mp[nums1[i]]);
//         }
//         return res;
                 
        
//     }
// };


//LC : 503 Next Greater Element || -----------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> ans(n, -1);
//         stack<int> s;
//         for(int i = n-2 ; i>= 0 ;i--){
//             s.push(arr[i]);
//         }
//         for(int i=n-1 ; i>=0 ; i--){
            
//             while(!s.empty() && s.top() <= arr[i]){
//                 s.pop();
//             }
//             if(i<n && !s.empty()){
//                 ans[i] = s.top();
//             }
//             s.push(arr[i]);
//         }
//         return ans;
        
//     }
// };

//lc 316 , infix , postfix , prefix-------------------------------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     string removeDuplicateLetters(string s) {
//         vector<int> count(26, 0);
//         vector<bool> visited(26, false);
        
//         // Count frequency of each character
//         for (char c : s) {
//             count[c - 'a']++;
//         }
        
//         stack<char> st;
        
//         for (char c : s) {
//             count[c - 'a']--;
            
//             // If already included, skip
//             if (visited[c - 'a']) 
//                 continue;
            
//             // Maintain lexicographical order
//             while (!st.empty() && 
//                    c < st.top() && 
//                    count[st.top() - 'a'] > 0) {
                
//                 visited[st.top() - 'a'] = false;
//                 st.pop();
//             }
            
//             st.push(c);
//             visited[c - 'a'] = true;
//         }
        
//         // Build result from stack
//         string result = "";
//         while (!st.empty()) {
//             result += st.top();
//             st.pop();
//         }
        
//         reverse(result.begin(), result.end());
//         return result;
//     }
// };


//LC 84 : Largest Rectangle in Histogram------------------------------------------------------------------

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();

//         vector<int> next(n, n);
//         vector<int> prev(n, -1);

//         stack<pair<int,int>> st;

//         // -------- NEXT SMALLER --------
//         for(int i = n - 1; i >= 0; i--) {
//             while(!st.empty() && st.top().first >= heights[i]) {
//                 st.pop();
//             }

//             if(!st.empty()) {
//                 next[i] = st.top().second;
//             }

//             st.push({heights[i], i});
//         }

//         // Clear stack
//         while(!st.empty()) st.pop();

//         // -------- PREVIOUS SMALLER --------
//         for(int i = 0; i < n; i++) {
//             while(!st.empty() && st.top().first >= heights[i]) {
//                 st.pop();
//             }

//             if(!st.empty()) {
//                 prev[i] = st.top().second;
//             }

//             st.push({heights[i], i});
//         }

//         // -------- MAX AREA --------
//         int res = 0;

//         for(int i = 0; i < n; i++) {
//             int width = next[i] - prev[i] - 1;
//             int area = width * heights[i];
//             res = max(res, area);
//         }

//         return res;
//     }
// };


//INFIX TO POSTFIX-----------------------------------------------------------------------------------------


// class Solution {
//   public:
//     int precedence(char c){
//         if(c == '+' || c == '-') return 1 ;
//         if(c == '/' || c == '*') return 2;
//         if(c == '^') return 3;
//         return -1;
        
//     }
//     string infixToPostfix(string& s) {
//         int n = s.length();
//         stack<char> st;
//         string result = "";
//         for(int i=0 ; i<n ; i++){
//             char ch = s[i];
            
//             if(isalnum(ch)){
//                 result += ch;
//             }
//             else if(ch == '('){
//                 st.push(ch);
//             }
//             else if(ch == ')'){
//                 while(!st.empty() && st.top() != '('){
//                     result += st.top();
//                     st.pop();
//                 }
//                 st.pop();
//             }
//             else{
//                 while(!st.empty() && precedence(st.top()) >= precedence(ch)){
//                     result += st.top();
//                     st.pop();
//                 }
//                 st.push(ch);
//             }
//         } 
        
//         while(!st.empty()){
//             result += st.top();
//             st.pop();
            
//         }
//         return result;
    
        
        
        
//     }
// };


//LC : 735 Asteroid Collision--------------------------------------------------------------------




