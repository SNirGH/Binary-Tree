#include <iostream>
#include <memory>
#include <random>
#include <queue>

constexpr int COUNT = 10;

struct Node {
	std::unique_ptr<Node> left;
	int data;
	std::unique_ptr<Node> right;
	Node(int data) : data(data), left(nullptr), right(nullptr) {}

};

// Generate a binary tree by height.
namespace Solution1 {
	static void createTree(std::unique_ptr<Node>& root, int height, int currentLevel = 1) {
		if (currentLevel > height) return;

		int leftValue = 1 + (std::rand() % 100);
		root->left = std::make_unique<Node>(leftValue);

		int rightValue = 1 + (std::rand() % 100);
		root->right = std::make_unique<Node>(rightValue);

		Solution1::createTree(root->left, height, currentLevel + 1);
		Solution1::createTree(root->right, height, currentLevel + 1);
	}
}

// Generate a binary tree by node.
namespace Solution2 {
	static void createTree(std::unique_ptr<Node>& root, int n) {
		if (n <= 0) return;

		std::queue<Node*> nodeQueue;
		nodeQueue.push(root.get());

		int count = 1;

		while (count <= n) {
			Node* currentNode = nodeQueue.front();
			nodeQueue.pop();
			
			int leftValue = 1 + (std::rand() % 100);
			currentNode->left = std::make_unique<Node>(leftValue);
			nodeQueue.push(currentNode->left.get());
			count++;
			

			if (count <= n) {
				int rightValue = 1 + (std::rand() % 100);
				currentNode->right = std::make_unique<Node>(rightValue);
				nodeQueue.push(currentNode->right.get());
				count++;
			}
		}
	}
}

static void print2DUtil(std::unique_ptr<Node>& root, int space)
{
	if (root == nullptr) return;

	space += COUNT;

	print2DUtil(root->right, space);

	std::cout << std::endl;

	for (int i = COUNT; i < space; i++)
		std::cout << " ";

	std::cout << root->data << "\n";

	print2DUtil(root->left, space);
}

int main() {
	std::srand(static_cast<unsigned int>(std::time(0)));

	std::unique_ptr<Node> root = std::make_unique<Node>(1 + (std::rand() % 100));
	int number = 0;

	std::cout << "Enter the number you want: ";
	std::cin >> number;

	Solution1::createTree(root, number);

	print2DUtil(root, 0);
}