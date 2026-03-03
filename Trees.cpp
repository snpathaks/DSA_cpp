


//TREE _____________________________________________________________________________________________________


// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data ; 
//     Node* left;
//     Node* right;
//     Node(int data){
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
  

// int main (){
//     Node* root = new  Node(5);
//     root->left = new Node(3);
//     root->right = new Node(7);
//     cout<<"The data on left is : "<<root->left->data<<endl;
//     cout<<"The data on right is : "<<root->right->data<<endl;


//     cout<<root->data;
// }

//___________________________________________Traversal of a BST ____________________________________________________
//1.DFS *DEPTH FIRST SEARCH------------------------------------------------------------------------------------
// DFS : Inorder(left-root-right), preorder(root-left-right), postorder(left-right-root)

//INORDER Traversal-------?----------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// Inorder(Node* root){
//     if(root == NULL) returun ;
// }

//LC : 94 Binary Tree Inorder--------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// public:
//      void inorder(TreeNode* root , vector<int> vt){
//         if(!root) return ;
//         inorder(root->left, vt);
//         vt.push_back(root->val);
//         inorder(root->right, vt);

//       }
//       vector<int> inorderTraversal(TreeNode* root){
//         vector<int> result;
//         inorder(root ,result);
//         return result;
//       }

   
// };

// LC : 144 binary Tree Preorder Traversal--------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;


// class Solution{
// public:
//      void preorder(TreeNode* root , vector<int> vt){
//         if(!root) return ;
//         vt.push_back(root->val);
//         preorder(root->left, vt);
//         preorder(root->right, vt);

//     }
//     vector<int> preorderTraversal(TreeNode* root){
//         vector<int> result ; 
//         preorder(root , result);
//         return result;
//     }


// };

//LC 104 Maximum Depth of a Binary Tree---------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int maxDepth(TreeNode* root){
//         if(root == NULL) return 0;
//         int left = maxDepth(root->left);
//         int right = maxDepth(root->right);
//         return max(left , right) +1;

//     }


// };


//Count the leaves of a Binary Tree---------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int countLeaves(TreeNode* root){
//         if(root == NULL) return 0;
//         if(root->left == NULL && root->right == NULL) return 1;
//         return countLeaves(root->left) + countLeaves(root->right);
//     }
// };


//LC : 404 Sum of Left Leaves--------------------------------------------------------------------------------
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
  
//     int sumOfLeftLeaves(TreeNode* root) {
//         if(!root) return 0;
//         TreeNode* left = root->left;
//         int curr = 0 ;
//         if( left != NULL && !left->right && !left->left){
//             curr = left->val;
//         }
//         return curr + sumOfLeftLeaves(root->right) + sumOfLeftLeaves(root->left);
      

        
//     }
// };


//LC 100 Sanme Tree-----------------------------------------------------------------------------------
// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(!p || !q) return p == q;
//         else return p -> val == q -> val && isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);
//     } 
// };


//Lc : 226 Invert Binary Tree-------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     TreeNode* invertTree(TreeNode* root){
//         if(root == nullptr) return nullptr;
//         TreeNode* left = invertTree(root->Left);
//         TreeNode* right = invertTree(root->right);
//         root->left = right;
//         root->right = left;
//         return root;
//     }
// };

//LC: 543 Diameter of Binary Tree-------------------------------------------------------------------------------



//dfs : Recursion + stack 
//bfd : level order Traversal + queue

//--------------------------------------------------dfs end--------------------------------------------------------//
//---------------------------------------------BFS start------------------------------------------------------
//BFS: Level Order Traversal----------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;



//LC : 102 Binary Tree Level Order Traversal--------------------------------------------------------------------


// #include<bits/stdc++.h>
// using namespace std;
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         vector<vector<int>> ans;
//         if(root == NULL) return ans;
//         while(!q.empty()){
//             int size = q.size();
//             vector<int> temp;
//             for(int i=0 ; i<size;i++){
//                 TreeNode* curr = q.front();
//                 temp.push_back(curr->val);
//                 q.pop();
//                 if(curr->left != NULL) q.push(curr->left);
//                 if(curr->right != NULL) q.push(curr->right);
//             }
//             ans.push_back(temp);

//         }
//         return ans;
        
//     }
// };

//LC : 103 Bianry tree ZigZag level Order Traversal-------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans ; 
//         if(root == NULL) return ans ; 
//         queue<TreeNode*> q;
//         q.push(root);
//         int level = 0;
//         while(!q.empty()){
//               int s = q.size();
//               vector<int> temp ;
//               for(int i=0 ; i<s ; i++){
//                  TreeNode* curr = q.front();
//                  temp.push_back(curr->val);
//                  q.pop();
//                  if(curr->left != NULL) q.push(curr->left);
//                  if(curr->right != NULL) q.push(curr->right);
//               }
//               if(level % 2 == 1) reverse(temp.begin() , temp.end());
//               level++;
//               ans.push_back(temp);
//         }
//         return ans;
        
//     }
// };

// LC : 199 Binary Tree Right side view--------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root == NULL) return {}; 
//         queue<TreeNode*> q ;
//         q.push(root);
//         while(!q.empty()){
//             int s= q.size();
//             vector<int> temp;
//             for(int i=0 ; i<s ; i++){
//                 TreeNode* curr = q.front();
//                 temp.push_back(curr->val);
//                 q.pop();
//                 if(curr->left != NULL) q.push(curr->left);
//                 if(curr->right != NULL) q.push(curr->right);

//             }
//             ans.push_back(temp);
//         }
//             vector<int> res; 
//             for(vector<int> it : ans){
//                 if(it.size() > 0){
//                     int last = it[it.size() -1];
//                     res.push_back(last);
//                 }
//             }
        
//         return res;
//     }
// };

//Tree Boundary Traversal------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// /*
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     // Constructor to initialize a new node
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// */

// class Solution {
//   public:
  
//     bool isleaf(Node* root){
//         if(!root) return ;
//         return (root->left == NULL && root->right == NULL);
//     }
//     void pushleaf(Node* root , vector<int>&vt){
//         if(!root)return ;
//         if(!root->left && !root->right)vt.push_back(root->val);
//         pushleaf(root->left , vt);
//         pushleaf(root->right , vt);
//     }
//     vector<int> boundaryTraversal(Node *root) {
//         // code here
//         vector<vector<int>  ans;
//         if(root == NULL) return {}; 
//         Node* curr = q.front();
//         queue<Node*> q ;
//         q.push(root);
//         while(!q.empty()){
//             int s= q.size();
//             vector<int> temp;
//             for(int i=0 ; i<s ; i++){
//                // TreeNode* curr = q.front();
//                 temp.push_back(curr->val);
//                 q.pop();
//                 if(curr->left && (!isleaf(curr->left))){
//                     q.push(curr->left);
//                 }
//                 if(curr->right && (!isleaf(curr->right))){
//                     q.push(curr->right);
//                 } 

//             }
            
//             ans.push_back(temp);
//         }
        
//         vector<int>res;
//         for(vector<int> it:ans){
//             if(it.size()>0){
//                 int last=it[it.size()-1];
//                 res.push_back(last);
//             }
            
//         }
        
//         return res;
        
//     }
// };


//Left View of Binary Tree-----------------------------------------------------------------------------------------
/*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */

// class Solution {
//   public:
//     vector<int> leftView(Node *root) {
//         vector<int> ans;
//         if(root == NULL) return ans; 
//         queue<Node*> q ;
//         q.push(root);
//         while(!q.empty()){
//             int s= q.size();
//             for(int i=0 ; i<s ; i++){
//                 Node* curr = q.front();
//                 q.pop();
//                 if(i == 0){
//                     ans.push_back(curr->data);
//                 }
//                 if(curr->left) q.push(curr->left);
//                 if(curr->right) q.push(curr->right);

//             }
//         }
//         return ans ;

        
        
        
        
//     }
// };

//Top View of Binary Tree----------------------------------------------------------------------------------------

// /*
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// */

// class Solution {
//   public:
//     vector<int> topView(Node *root) {
//         // code here
//         map<int , int> mp;
//         queue<pair<Node* , int>> q ;
//         q.push({root , 0});
//         vector<int> res;
//         if(root == NULL) return res;
//         while(!q.empty()){
//             auto n = q.front();
//             q.pop();
//             Node* curr = n.first ; 
//             int m = n.second;
//             if(mp.find(m) == mp.end()){
//                 mp[m] = curr->data;
                
//             }
//             if(curr->left) q.push({curr->left , m - 1});
//             if(curr->right) q.push({curr->right , m + 1});
           
//         }
//         for(auto i : mp){
//           res.push_back(i.second);
//         }
//         return res;
        
        
//     }
// };


//Bottom View of Binary Tree--------------------------------------------------------------------------


// /*
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int x) {
//         data = x;
//         left = right = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     vector<int> bottomView(Node *root) {
//         // code here
//         vector<int> res; 
//         map<int , int> mp ;
//         queue<pair<Node* , int>> q;
//         q.push({root , 0});
        
//         if(root == NULL) return res;
//         while(!q.empty()){
//             auto n = q.front();
//             q.pop();
//             Node* curr = n.first;
//             int m = n.second;
//             mp[m] = curr->data;
            
        
//            if(curr->left) q.push({curr->left , m -1});
//            if(curr->right) q.push({curr->right , m+1});
//         }
    
//         for(auto i : mp){
//             res.push_back(i.second);
//         }
        
//         return res;
        
//     }
// };

//vertical order traversal ------------------------------------------------------------------------------



///K distance from root----------------------------------------------------------------------------------------

// /* A binary tree node has data, pointer to left child
//    and a pointer to right child /
// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// }; */

// class Solution {
//   public:
//   void solve(Node* root , int d , int k , vector<int>& vt){
       
       
//        if(root == NULL) return;
//        if(d==k){
//            vt.push_back(root->data);
//            return ;
           
//        }
//        solve((root->left) , d+1 , k, vt);
//        solve((root->right) ,  d+1 , k, vt);
       
//   }
//     // function should print the nodes at k distance from root
//     vector<int> Kdistance(Node *root, int k) {
        
//        vector<int> ans;
//        solve(root , 0 ,k ,ans);
//        return ans;
        
//     }
// };

//lc :236 ----------------------------------------------------------
/**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
//         if(root == NULL) return NULL;
//         if(root == p || root == q) return root;
//         TreeNode* rs = lowestCommonAncestor(root->right, p ,q);
//         TreeNode* ls = lowestCommonAncestor(root->left , p , q);
//         if(rs && ls) return root ;
//         if(ls) return ls ; 
//         if(rs) return rs;
//         return NULL;


        


        
//     }
// };

//===================================BINARY SEARCH TREE=================================================

//Lc : 700 Search in a Binary Search Tree--------------------------------------------------------------------------

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL) return NULL;
        

//         if(root->val > val)
//             return searchBST(root->left , val);
        
//         else if(root->val < val)
//             return searchBST(root->right  , val);
        
//         else 
//             return root;
        
        

        
        
//     }
// };

// LC  : 938 Range Sum of BST--------------------------------------------------------------------------------
// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if (root == NULL) return 0;

//         // If value is smaller than low, ignore left subtree
//         if (root->val < low)
//             return rangeSumBST(root->right, low, high);

//         // If value is greater than high, ignore right subtree
//         if (root->val > high)
//             return rangeSumBST(root->left, low, high);

//         // If value is in range
//         return root->val 
//              + rangeSumBST(root->left, low, high)
//              + rangeSumBST(root->right, low, high);
//     }
// };

//LC : 108 Convert Sorted Array to Binary Search Tree------------------------------------------------------------






//LC : 653--------------------------------------------------------------------
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        unordered_set<int> st;
        return solve(root , k , st);
        
    }
    bool solve(TreeNode* root , int k , unordered_set<int>& st){
        if(root == NULL) return false;
        if(st.find(k - root->val) != st.end()) return true;
        st.insert(root->val);
        return solve(root->left , k , st) || solve(root->right , k , st);
    }
};

//LC  : 701 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        if(root->val < val){
            root->right = insertIntoBST(root->right , val);
        }
        else{
            root->left = insertIntoBST(root->left , val);
        }
        return root;
        
    }
};

// LC : 230 , LC 98 , LC 236








