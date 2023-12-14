//#include <queue>
//#include <iostream>
//#include <cmath>
//
//#define COUNT 10
//
//using namespace std;
//
//struct Node {
//	struct Node* left;
//	int data;
//	struct Node* right;
//	Node(int data) {
//		this->data = data;
//		left = right = NULL;
//	}
//};
//
//queue<Node*> q;
//int i = 1;
//int j = 0;
//
//
//bool hasChildren(Node* root) {
//	if (root->left != NULL && root->right != NULL) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void createChildren(Node* root) {
//	int left, right;
//
//	left = 1 + (rand() % 100);
//	root->left = new Node(left);
//	q.push(root->left);
//
//	right = 1 + (rand() % 100);
//	root->right = new Node(right);
//	q.push(root->right);
//}
//
//void createTreeRecursion(Node* root, int height) {
//	double nodes = pow(2, i);	
//	if (i <= height) {
//		if (j < nodes) {
//			if (hasChildren(root)) {
//				root = q.front();
//				q.pop();
//				createTreeRecursion(root, height);
//			}
//			else {
//				createChildren(root);
//				j += 2;
//				createTreeRecursion(root, height);
//			}
//		}
//		else {
//			i++;
//			j = 0;
//			createTreeRecursion(root, height);
//		}
//	}	
//}
//
//void print2DUtil(Node* root, int space)
//{
//	// Base case
//	if (root == NULL)
//		return;
//
//	// Increase distance between levels
//	space += COUNT;
//
//	// Process right child first
//	print2DUtil(root->right, space);
//
//	// Print current node after space
//	// count
//	cout << endl;
//	for (int i = COUNT; i < space; i++)
//		cout << " ";
//	cout << root->data << "\n";
//
//	// Process left child
//	print2DUtil(root->left, space);
//}
//
//int main() {
//	Node* root = new Node(1 + (rand() % 100));
//	Node* temp = root;
//	int height = 0;
//
//	cout << "How many levels do you want: ";
//	cin >> height;
//
//	createTreeRecursion(temp, height);
//	
//	print2DUtil(root, 0);
//}