// Basic Binary Tree implementation:::::::::::::::::::;

#include <iostream>
#include <queue>
using namespace std;

// Node structure definition
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;  // Use NULL instead of nullptr
        right = NULL; // Use NULL instead of nullptr
    }
};

// Function to create the binary tree
Node* createTree(int arr[],int n) {
    queue <Node*> q;
    Node* r= NULL;
    for(int i=0;i<n;i++){
    	Node* t= new Node(arr[i]);
    	if(i==0){
    		r=t;
    		q.push(t);
		}
		else{
			Node* te=q.front();
			if (te->left==NULL) te->left=t;
			else{
				te->right=t;
				q.pop();
			}
			q.push(t);
		}
	}

    return r;
}

// Preorder Traversal (Root -> Left -> Right)
void preorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Inorder Traversal (Left -> Root -> Right)
void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    cout << "Build your tree:" << endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    Node* root = createTree(arr,n);

    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}




