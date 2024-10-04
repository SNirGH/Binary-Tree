# Purpose of the project
The purppose of this project was to understand how to construct a binary tree and generate one using to different methods.

Instead of inputting data one by one, which is still possible with a bit of restructuring, the tree is generated with random numbers as data.

## Methods
1. By Level - The first solution generates a tree by the number of levels the user enters.
2. By Node - The second soltuion generates a tree by the number of nodes the user enters.

# Learning experience
This project was also used to learn about smart pointers, namespaces, and binary trees. 

# How It Works
First thing to note is, both solutions can be run simply by changing the Solution number in the main function:

```Solution#::createTree(root, number);```

### Solution 1
This solution is done recursively by generating a left and right node for the root that is passed into the function. 
After words, it recursively calls the function with the left and right node that were generated, and increments the currentLevel by 1.
When the currentLevel is greater than the height the user inputed, the base case is called and the function is returned.

### Solution 2
This solution is done by creating a queue to track the pointer of the currentNode.
By doing this, I am able to track which node needs children and how many. 
The loop continues until the count (which counts the number of current nodes the tree has) has reached n (which is the number the user inputs). 
