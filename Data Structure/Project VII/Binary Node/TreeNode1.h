#pragma once

#include <iostream>
# include <string>
using namespace std;

template <class ItemType> 
class TreeNode1{
	private:
		ItemType item;
		TreeNode1<ItemType>  *leftChildPtr;
		TreeNode1<ItemType>  *rightChildPtr;
		// Declarations of the methods setItem, getItem, setLeft, getLeft,
		// setRight, and getRight are here.
		// end TreeNode
	public:
		TreeNode1(){
		};
		TreeNode1(const ItemType& nodeItem, TreeNode1<ItemType> *left = NULL, TreeNode1<ItemType>  *right = NULL) : item(nodeItem), leftChildPtr(left), rightChildPtr(right){
		};
	class BinaryTree ;
};
