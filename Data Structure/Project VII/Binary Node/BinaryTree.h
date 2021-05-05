#pragma once

#include <iostream>
#include<string>

using namespace std;

#include "TreeNode1.h"

#include "BinaryTreeInterface.h" 
#include "TreeException.h"
//#include "PrecondViolatedExcep.h"


typedef void(*ItemType);

template <class ItemType>
class BinaryTree
{

protected:


	BinaryTree(TreeNode1<ItemType> *nodePtr);

	void copyTree(TreeNode1<ItemType> *treePtr, TreeNode1<ItemType> *&newTreePtr) const;

	void destroyTree(TreeNode1<ItemType> *& treePtr);

	TreeNode1<ItemType> *rootPtr() const;
	void setRootPtr(TreeNode1<ItemType>  *newRoot);

	void getChildPtrs(TreeNode1<ItemType> *nodePtr, TreeNode1<ItemType> *&leftChildPtr, TreeNode1<ItemType> *&rightChildPtr) const;
	void setChildPtrs(TreeNode1<ItemType> *nodePtr, TreeNode1<ItemType>  *leftChildPtr, TreeNode1<ItemType> *rightChildPtr);

	
	//void inorder(TreeNode1<ItemType>  *treePtr, FuctionType visit);
	//void postorder(TreeNode1<ItemType>  *treePtr, FuctionType visit);

private:

	TreeNode1<ItemType> *root;



public:
	BinaryTree();
	BinaryTree(const ItemType& rootItem);
	BinaryTree(const ItemType& rootItem, BinaryTree<ItemType> & leftTree, BinaryTree<ItemType> & rightTree);
	BinaryTree(const BinaryTree<ItemType> & tree);
	virtual ~BinaryTree();


	// operaciones
	virtual bool isEmpty() const;

	virtual ItemType getRootData() const;

	virtual void setRootData(const ItemType& newItem) throw (TreeException);


	virtual void attachLeft(const ItemType& newItem)throw (TreeException);

	virtual void attachRight(const ItemType& newItem)throw (TreeException);

	virtual void attachLeftSubtree(BinaryTree<ItemType> & leftTree) throw (TreeException);
	virtual void attacheRightSubtree(BinaryTree<ItemType> & rightTree) throw (TreeException);

	virtual void detachLeftSubtree(BinaryTree<ItemType> & leftTree) throw (TreeException);
		
	virtual void detachRightSubtree(BinaryTree<ItemType> & rightTree) throw (TreeException);
		

	virtual BinaryTree getLeftSubtree() const;
	virtual BinaryTree getRightSubtree() const;

	virtual void preorderTravers(ItemType visit);
	//virtual void inorderTraverse(FuctionType visit);
	//virtual void postorderTraverse(FuctionType visit);

	//overloadedoperatior
	virtual BinaryTree& operator=(const BinaryTree<ItemType> & rhs);
	
	void preorder(TreeNode1<ItemType>  *treePtr, ItemType visit);
	
	void displayinorder()const { displayinorder(root); }
	//void displaypreorder()const;
	void displaypostorder()const { displaypostorder(root); }
};

	template <class ItemType>
	BinaryTree<ItemType>::BinaryTree() : root(NULL) {


	}

	template <class ItemType>
	BinaryTree<ItemType>::BinaryTree(const ItemType& rootItem){

		root = new TreeNode1<ItemType>(rootItem, NULL, NULL);
		assert(root != Null);


	}
	template <class ItemType>
	BinaryTree<ItemType>::BinaryTree(const ItemType& rootItem, BinaryTree<ItemType> & leftTree, BinaryTree<ItemType> & rightTree) {
		root = new TreeNode1<ItemType>();//rooItem, NULL, NULL

		attachLeftSubtree(leftTree);
		attacheRightSubtree(rightTree);
	}

	template <class ItemType>
	BinaryTree<ItemType>::~BinaryTree() {


	}
	template <class ItemType>
	BinaryTree<ItemType>::BinaryTree(const BinaryTree<ItemType> & tree) {

		copyTree(tree.root, root);


	}
	template <class ItemType>
	BinaryTree<ItemType>::BinaryTree(TreeNode1<ItemType> * nodePtr) : root(nodePtr) {

	}
	template <class ItemType>
	bool BinaryTree<ItemType>::isEmpty() const {

		return(root == NULL);


	}

	template <class ItemType>
	ItemType BinaryTree<ItemType>::getRootData() const  {

		if (isEmpty())
			throw TreeException("TreeExcption: Empty Tree");
		return root->item;

	}
	template <class ItemType>
	void BinaryTree<ItemType>::setRootData(const ItemType& newItem) 
		throw(TreeException) {

		if (!isEmpty()) {

			root->item = newItem;

		}
		else {
			root = new TreeNode1<ItemType>(newItem, NULL, NULL);
			if (root == NULL) {
				throw TreeException("TreeException: Canoot allocate memory");
			}
		}


	}
	template <class ItemType>
	void BinaryTree<ItemType>::attachLeft(const ItemType& newItem)throw (TreeException){
		if (isEmpty())
			throw TreeException("TreeException: Empty tree");
		else if (root->leftChildPtr != NULL)
			throw TreeException("TreeException: Cannot overwrite left subtree");
		else {
			root->leftChildPtr = new TreeNode1<ItemType>(newItem, NULL, NULL);
			if (root->leftChildPtr == NULL)
				throw TreeException(
					"TreeException: Cannot allocate memory");
		}

	}

	template <class ItemType>
	void BinaryTree<ItemType>::attachRight(const ItemType& newItem) throw (TreeException){
		if (isEmpty())
			throw TreeException("TreeException: Empty tree");
		else if (root->rightChildPtr != NULL)
			throw TreeException(
				"TreeException: Cannot overwrite left subtree");
		else {
			root->leftChildPtr = new TreeNode1<ItemType>(newItem, NULL, NULL);
			if (root->rightChildPtr == NULL)
				throw TreeException(
					"TreeException: Cannot allocate memory");
		}
	}
	template <class ItemType>
	void BinaryTree<ItemType>::attachLeftSubtree(BinaryTree<ItemType> & leftTree) throw (TreeException){



		if (isEmpty())
			throw TreeException("TreeException: Empty tree");
		else if (root->leftChildPtr != NULL)
			throw TreeException("TreeException: Cannot overwrite left subtree");
		else
		{
			root->leftChildPtr = leftTree.root;
			leftTree.root = NULL;


		}

	}
	template <class ItemType>
	void BinaryTree<ItemType>::attacheRightSubtree(BinaryTree<ItemType> & rightTree) throw (TreeException) {


		if (isEmpty())
			throw TreeException("TreeException: Empty tree");
		else if (root->rightChildPtr != NULL)
			throw TreeException("TreeException: Cannot overwrite right subtree");
		else
		{
			root->leftChildPtr = rightTree.root;
			rightTree.root = NULL;


		}
	}
	template <class ItemType>
	void BinaryTree<ItemType>::detachLeftSubtree(BinaryTree<ItemType> & leftTree)throw (TreeException)
	{
		if (isEmpty())
			throw TreeException("TreeException: Empty tree");
		else
		{
			leftTree = BinaryTree(root->leftChildPtr);
			root->leftChildPtr = NULL;
		}
	}
	template <class ItemType>
	void BinaryTree<ItemType>::detachRightSubtree(BinaryTree<ItemType> & rightTree)throw (TreeException) {

		if (isEmpty())
			throw TreeException("TreeException: Empty tree");
		else
		{
			rightTree = BinaryTree(root->rightChildPtr);
			root->rightChildPtr = NULL;
		}



	}
	template <class ItemType>
	BinaryTree<ItemType>  BinaryTree<ItemType>::getLeftSubtree() const {
		TreeNode1<ItemType> *subTreePtr;
		if (isEmpty()) {
			return BinaryTree();
		}
		else {
			copyTree(root->leftChildPtr, subTreePtr);
			return BinaryTree(subTreePtr);
		}
	}
	template <class ItemType>
	BinaryTree<ItemType>  BinaryTree<ItemType>::getRightSubtree() const {
		TreeNode1<ItemType> *subTreePtr;
		if (isEmpty()) {
			return BinaryTree();
		}
		else {
			copyTree(root->rightChildPtr, subTreePtr);
			return BinaryTree(subTreePtr);
		}
	}

	template <class ItemType>
	void BinaryTree<ItemType>::preorderTravers(ItemType visit) {

		preorder(root,visit);

	}
	//template <class ItemType>
	//void BinaryTree<ItemType>::inorderTraverse(FuctionType visit) {

	//	inorder(root, visit);

	//}
	//template <class ItemType>
	//void BinaryTree<ItemType>::postorderTraverse(FuctionType visit) {


	//	postorder(root, visit);

	//}

	template <class ItemType>
	BinaryTree<ItemType>& BinaryTree<ItemType>::operator=(const BinaryTree<ItemType> & rhs){

		if (this != & rhs) {
			destroyTree(root);
			copyTree(rhs.root, root);

		}
		return (*this);

	}

	template <class ItemType>
		void BinaryTree<ItemType>::copyTree(TreeNode1<ItemType>  *treePtr, TreeNode1<ItemType>  *&newTreePtr)const
	{
		if (treePtr != NULL)
		{
			newTreePtr = new TreeNode1<ItemType>(treePtr->item, NULL, NULL);
			if (newTreePtr == NULL)
				throw TreeException("TreeException: Cannot allocate memory");
			copyTree(treePtr->leftChildPtr, newTreePtr->leftChildPtr);
			copyTree(treePtr->rightChildPtr, newTreePtr->rightChildPtr);

		}
		else newTreePtr = NULL;
	}
		template <class ItemType>
	void BinaryTree<ItemType>::destroyTree(TreeNode1<ItemType>  *& treePtr) {

		if (treePtr != NULL)
		{
			destroyTree(treePtr->leftChildPtr);
			destroyTree(treePtr->rightChildPtr);
			delete treePtr;
			treePtr = NULL;

		}
	}


	template <class ItemType>
	TreeNode1<ItemType>  *BinaryTree<ItemType>::rootPtr()const {
		return root;

	}
	template <class ItemType>
	void BinaryTree<ItemType>::setRootPtr(TreeNode1<ItemType>  *newRoot) {

		root = newRoot;

	}
	template <class ItemType>
	void BinaryTree<ItemType>::getChildPtrs(TreeNode1<ItemType> *nodePtr, TreeNode1<ItemType> *&leftPtr, TreeNode1<ItemType> *& rightPtr) const {
		leftPtr = nodePtr->leftChildPtr;
		right = nodePtr->rightChildPtr;
	}


	template <class ItemType>
	void BinaryTree<ItemType>::setChildPtrs(TreeNode1<ItemType>  *nodePtr, TreeNode1<ItemType>  *leftPtr, TreeNode1<ItemType> *rightPtr) {
		nodePtr->leftChildPtr = leftPtr;
		nodePtr->rightChildPtr = rightPtr;
	}

	template <class ItemType>
	void BinaryTree<ItemType>::preorder(TreeNode1<ItemType>  *treePtr, ItemType visit) {
		if (treePtr != NULL) {
			cout << (treePtr->item);
			preorder(treePtr->leftChildPtr,visit);
			preorder(treePtr->rightChildPtr,visit);
		}

	}
	//template <class ItemType>
	//void BinaryTree<ItemType>::inorder(TreeNode1<ItemType>  *treePtr, FuctionType visit) {
	//	if (treePtr != NULL) {
	//		inorder(treePtr->leftChildPtr,visit);
	//		visit(treePtr-> item);
	//		inorder(treePtr-> rightChildPtr,visit);
	//	}

	//}
	//template <class ItemType>
	//void BinaryTree<ItemType>::postorder(TreeNode1<ItemType>  *treePtr, FuctionType visit) {
	//	if (treePtr != NULL) {
	//		postorder(treePtr->leftChildPtr, visit);
	//		postorder(treePtr->rightChildPtr, visit);
	//		visit(treePtr->item);
	//	}
/*
	}*/
	/*template <class ItemType>
	void BinaryTree<ItemType>::displaypreorder(TreeNode1<ItemType> *treePtr)const{
	

	if (treePtr != NULL) {
		cout << (treePtr->item);
		preorder(treePtr->leftChildPtr, visit);
		preorder(treePtr->rightChildPtr, visit);


		}


	}

*/

