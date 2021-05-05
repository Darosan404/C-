#include <iostream>
#include "BinaryTree.h"
#include"TreeNode1.h"
using namespace::std;

void display(ItemType& anItem);

int main(){
	BinaryTree<int> tree1, tree2, tree3, tree4,tree5;


	tree1.setRootData(1);
	tree1.attachLeft(2);
	tree1.attachRight(NULL);

	/*tree2.setRootData("D");
	tree2.attachLeftSubtree(tree1);
	tree2.attachRight(NULL);

	tree3.setRootData("B");
	tree3.attachLeftSubtree(tree2);
	tree3.attachRight("E");

	tree4.setRootData("A");
	tree4.attachLeftSubtree(tree3);
	tree4.attachRight("C");*/

//	tree1.preorderTravers(display);
	system("pause");
	return 0;
}

void display(ItemType& anItem)
{
	cout << anItem;
}
