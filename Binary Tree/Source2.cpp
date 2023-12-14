#include <iostream>
#include <queue>
#include <cmath>
#define COUNT 10
using namespace std;

struct Node {
	struct Node* left;
	int data;
	struct Node* right;
	Node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

queue<Node*> q;

void createTreeByNode (Node* root, int n) {
	for (int i = 0;i < n;) {	
		root->left = new Node(1 + (rand() % 10));
		q.push(root->left);
		i += 1;
		if (i < n) {
			root->right = new Node(1 + (rand() % 10));
			q.push(root->right);
			i += 1;
		}
		root = q.front();
		q.pop();
	}
}

void print2DUtil(Node* root, int space)
{
	if (root == NULL)
		return;

	space += COUNT;

	print2DUtil(root->right, space);

	cout << endl;
	for (int i = COUNT; i < space; i++)
		cout << " ";
	cout << root->data << "\n";

	print2DUtil(root->left, space);
}

int main() {
	Node* root = new Node(1 + (rand() % 10));
	int choice = 0;
	
	cout << "How many nodes do you want: ";
	cin >> choice;

	createTreeByNode(root, choice);
	print2DUtil(root, 0);
	return 0;
}