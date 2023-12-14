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
//bool hasLeftChild(Node* root) {
//	if (root->left != NULL) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool hasRightChild(Node* root) {
//	if (root->right != NULL) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int i = 0, j = 0;
//int height = 1;
//queue<Node*> q;
//
//void createTreeByNode(Node* root, int n) {
//	double nodes = pow(2, height);
//	if (i < n) {
//		if (j < nodes) {
//			if (hasLeftChild(root) && hasRightChild(root)) {
//				root = q.front();
//				q.pop();
//				createTreeByNode(root, height);
//			}
//			if (hasLeftChild(root)) {
//				root->right = new Node(1 + (rand() % 10));
//				q.push(root->right);
//				i++;
//				j++;
//				createTreeByNode(root, n);
//			}
//			else {
//				root->left = new Node(1 + (rand() % 10));
//				q.push(root->left);
//				i++;
//				j++;
//				createTreeByNode(root, n);
//			}
//		}
//		else {
//			height++;
//			j = 0;
//			createTreeByNode(root, n);
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
//	Node* root = new Node(1 + (rand() % 10));
//	Node* temp = root;
//	int nodes = 0;
//
//	cout << "How many nodes do you want after the root: ";
//	cin >> nodes;
//
//	createTreeByNode(temp, nodes);
//
//	print2DUtil(root, 0);
//
//	return 0;
//}