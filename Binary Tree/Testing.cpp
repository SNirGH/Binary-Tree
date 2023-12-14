//#include <cmath>
//#include <iostream>
//#include <queue>
//#include <stack>
//#define COUNT 10
//
//using namespace std;
//
//struct Node {
//	struct Node* left;
//	int data;
//	struct Node* right;
//	Node (int data) {
//		this->data = data;
//		left = right = NULL;
//	}
//};
//
//queue<Node*> q;
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
//	cout << "Enter data for left child: ";
//	cin >> left;
//	root->left = new Node(left);
//	q.push(root->left);
//
//	cout << "Enter data for right child: ";
//	cin >> right;
//	root->right = new Node(right);
//	q.push(root->right);
//}
//
//int i = 0;
//
//void createTree(Node* root, int n) {
//	Node* leftParent = root->left;
//	Node* rightParent = root->right;
//
//	
//	int j = 0;
//	double nodes = pow(2, i);
//	int m = 0;
//
//	if (i >= 1) {
//		while (i < n) {
//			nodes = pow(2, i);
//			m = 0;
//			j = 0;
//			if (hasChildren(leftParent) && hasChildren(rightParent)) {
//				while (m < nodes) {
//					if ((j / 2) == 0) {
//						leftParent = q.front();
//						q.pop();
//						createChildren(leftParent);
//						j++;
//						m++;
//					}
//					else {
//						rightParent = q.front();
//						q.pop();
//						createChildren(rightParent);
//						j++;
//						m++;
//					}
//				}
//			}
//			else {
//				createChildren(leftParent);
//				createChildren(rightParent);
//			}
//			i++;
//		}
//	}
//	else {
//		createChildren(root);
//		i++;
//		q.pop();
//		q.pop();
//		createTree(root, n);
//	}
//}
//
//void inOrder(struct Node* root)
//{
//	stack<Node*> s;
//	Node* curr = root;
//
//	while (curr != NULL || s.empty() == false)
//	{
//		while (curr != NULL)
//		{
//			s.push(curr);
//			curr = curr->left;
//		}
//		curr = s.top();
//		s.pop();
//
//		cout << curr->data << " ";
//		curr = curr->right;
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
//	Node* root = new Node(100);
//	int height = 0;
//
//	cout << "How many levels do you want: ";
//	cin >> height;
//
//	createTree(root, height);
//	
//	inOrder(root);
//	print2DUtil(root, 0);
//}

