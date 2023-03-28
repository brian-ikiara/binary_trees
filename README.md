# Binary Trees

## General Idea

### Syntax of a basic Binary Tree node in C

#### Dynamically created nodes

*Can be used for all kinds of binary trees*

```c
	/**
	 * struct binaryTreeNode - Binary Tree Node.
	 * @data: Data
	 * @left: Left child
	 * @right: Right child
	 *
	 * Description: Describes a basic structure for a k-ary
	 * tree data structure XD
	 */
	typedef struct binaryTreeNode {
		<return_type> data;
		binaryTreeNode *left;
		binaryTreeNode *right;
	} binNode;
```

#### In arrays

*Only used in Complete binary trees*

```
	Given an array representing a binary tree:
			  	  +-0-+-1-+-2-+-3-+-4-+-5-+-6-+
		binaryTreeArray = | 2 | 4 | 1 | 5 | 8 | 7 | 9 |;
			  	  +---+---+---+---+---+---+---+
	To get the data in either the left and right children, the
	following logic is used:
		/* rootBinaryTree == 2 */
		rootBinaryTree = binaryTreeArray[0];
		FOR node at index i:
			/**
			 * IF i == 0:
			 * 	leftChild = binaryTreeArray[(2 * 0) + 1]
			 *		  = binaryTreeArray[1] == 4
			 */
			leftChild = binaryTreeArray[(2 * i) + 1];
			/**
			 * IF i == 0:
			 * 	rightChild = binaryTreeArray[(2 * 0) + 2]
			 *		   = binaryTreeArray[2] == 1
			 */
			rightChild = binaryTreeArray[(2 * i) + 2];
```

### Visual representation of a Binary Tree

```
				   root ==> [rootNode]
				+_______________/\_______________+
				|		  	         |
      		parents ==> [leftFirstNode]	          [rightFirstNode]
      	      		+________/\_______+               +________/\_________+
      	      		|		  |	          |		      |
      	children ==> [leftLFNode]       [NULL]        [leftRFNode]	[rightRFNode]
				   		+________/\_______+
						|		  |
			   leaf nodes ==> [leftLRFNode]    [rightLRFNode]
```

## Definition of terms

***Binary tree***

> Is a k-ary(k *is a constant*; *in our case*, k = 2) [tree](https://en.wikipedia.org/wiki/Tree_(data_structure)) data structure where each node(*called a parent*) branches into 2 other nodes(*called children*).[^1] Certain interpretations of the binary tree can be made:

* **Strict/Proper binary tree**: Where each node can either have 2 or no children per level.[^2]

![Full](https://www.upgrad.com/blog/wp-content/uploads/2020/09/Picture2-1.jpg)

* **Complete binary tree**: Where all levels are completely filled and all leaf nodes are as far left as possible.

![Complete](https://www.upgrad.com/blog/wp-content/uploads/2020/09/Picture4.jpg)

* **Perfect binary tree**: Where all levels are completely filled and only the last level contains leaf nodes.

![Perfect](https://www.upgrad.com/blog/wp-content/uploads/2020/09/Picture6.jpg)

* **Balanced binary tree**: Where the difference between the height of the left and right subtrees, for every node, is not more than a number n(*usually* n == 1).

![Balanced](https://www.upgrad.com/blog/wp-content/uploads/2020/09/Picture7.jpg)

* **Degenerate/Pathological binary tree**: Where all internal nodes have a single child. In terms of performance, it resembles a linked list.[^3]

![Degenerate](https://www.upgrad.com/blog/wp-content/uploads/2020/09/Picture8.jpg)

[^1]: In Set Theory, a binary tree can be defined as a tuple(L, S, R) where L and R are the *left* and *right* children and S is a singleton(*set containing only one element*) defining the *root* of the binary tree. ***More info***@[Wikipedia](https://en.wikipedia.org/wiki/Binary_tree)
[^2]: A level is defined by nodes at the same depth/height(*the number of nodes between the root and the node in question*). It can be easily seen that the maximum depth, i.e. number of nodes between the root to the last node of the tree, is the height of the tree.
[^3]: The minimum and maximum heights of the degenerate binary tree will be given as $$ \log_2 n $$ and $$ n - 1 $$ respectively

## A little Math...

#### To determine the maximum number of nodes n in a level i:

$$ n_{level} = {2^i} $$

#### To determine the maximum number of nodes n in a binary tree of height h and with levels i:

$$ n_{tree} = {2^0 + 2^1 + ... + 2^h} $$

*Which is equal to...*

$$ n_{tree} = {2^{h + 1} - 1} $$

*That is equal to...*

$$ n_{tree} = {2^i - 1} $$

#### To determine the maximum height h of a binary tree

*From equation (ii)...*

$$ n_{tree} = {2^{h + 1} - 1} $$

&there4;

$$ 2^{h + 1} = {n + 1} $$

*Introduce logarithms...*

$$ \log 2^{h + 1} = {\log (n + 1)} $$

*Can be written as...*

$$ (h + 1)\log 2 = {\log (n + 1)} $$

&there4;

$$ h + 1 = {\log (n + 1) \over \log 2} $$

$$ h = {\log (n + 1) \over \log 2} - 1 $$

*Which is simply...*

$$ h = {\log_2 (n + 1) - 1} $$

## Navigating your Binary Tree

There are 3 main techniques employed when traversing a binary tree:[^4]

* **Inorder**: Involves visiting all nodes in the left subtree, then the root node and, finally, all nodes in the right subtree.

* **Preorder**: Involves visiting the root node, then all nodes in the left subtree and, finally, all nodes in the right subtree.

* **Postorder**: Involves visiting all nodes in the left subtree, then all nodes in the right subtree and, finally, the root node.

[^4]: For visuals, visit [Programiz](https://www.programiz.com/dsa/tree-traversal)

## Sidebar

With all that Math and info, I think we're ready to do this thing! :grinning:
