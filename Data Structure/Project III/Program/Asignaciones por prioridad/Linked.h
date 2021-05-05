#ifndef _LINKED_
#define _LINKED_
 
#include<iostream>
#include "BagInterface.h"
#include "Node.h"
#include <cstddef>
using namespace::std;

template<class ItemType>
class Linked : public BagInterface<ItemType>
{
private:
   Node<ItemType>* headPtr; // Pointer to first node
   int itemCount;           // Current count of bag items
   
   Node<ItemType>* getNodeBefore(const ItemType& anEntry) const;
   
public:
   Linked();
   Linked(const Linked<ItemType>& aBag); // Copy constructor
   virtual ~Linked();                       // Destructor should be virtual
   bool isEmpty() const;
   void insertSorted(const ItemType& newEntry);
   bool remove();
   void clear();
   void showLinked()const;
}; // end LinkedBag
#endif

//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** ADT bag: Link-based implementation.
    @file LinkedBag.cpp */

template<class ItemType>
Linked<ItemType>::Linked() : headPtr(NULL), itemCount(0){
	
}  // end default constructor

template<class ItemType>
Linked<ItemType>::Linked(const Linked<ItemType>& aBag){
	itemCount = aBag.itemCount;
   Node<ItemType>* origChainPtr = aBag.headPtr;  // Points to nodes in original chain
   
   if (origChainPtr == NULL)
      headPtr = NULL;  // Original bag is empty
   else
   {
      // Copy first node
      headPtr = new Node<ItemType>();
      headPtr->setItem(origChainPtr->getItem());
      
      // Copy remaining nodes
      Node<ItemType>* newChainPtr = headPtr;      // Points to last node in new chain
      origChainPtr = origChainPtr->getNext();     // Advance original-chain pointer
      
      while (origChainPtr != NULL)
      {
         // Get next item from original chain
         ItemType nextItem = origChainPtr->getItem();
         
         // Create a new node containing the next item
         Node<ItemType>* newNodePtr = new Node<ItemType>(nextItem);
         
         // Link new node to end of new chain
         newChainPtr->setNext(newNodePtr);
         
         // Advance pointer to new last node
         newChainPtr = newChainPtr->getNext();
         
         // Advance original-chain pointer
         origChainPtr = origChainPtr->getNext();
      }  // end while
      
      newChainPtr->setNext(NULL);              // Flag end of chain
   }  // end if
}  // end copy constructor

template<class ItemType>
Linked<ItemType>::~Linked(){
   clear();
}  // end destructor

template<class ItemType>
bool Linked<ItemType>::isEmpty() const{
	return itemCount == 0;
}  // end isEmpty

template<class ItemType>
void Linked<ItemType>::insertSorted(const ItemType& newEntry){
    Node<ItemType>* newNodePtr = new Node<ItemType>(newEntry);
   Node<ItemType>* prevPtr = getNodeBefore(newEntry);
  
  if (isEmpty() || (prevPtr == NULL)) // Add at beginning
   {
      newNodePtr->setNext(headPtr);
      headPtr = newNodePtr;
   }
   else // Add after node before
   { 
      Node<ItemType>* aftPtr= prevPtr->getNext();;
      newNodePtr->setNext(aftPtr);
      prevPtr->setNext(newNodePtr);
   }  //end if
   
   itemCount++;
} // end insertSorted

template<class ItemType>
bool Linked<ItemType>::remove(){
   bool canRemoveItem = !isEmpty();
   if (canRemoveItem){  
      // Delete first node
      Node<ItemType>* nodeToDeletePtr = headPtr;
      headPtr = headPtr->getNext();
      
      // Return node to the system
      nodeToDeletePtr->setNext(NULL);
      delete nodeToDeletePtr;
      nodeToDeletePtr = NULL;
      
      itemCount--;
   } // end if
   
	return canRemoveItem;
}  // end remove

template<class ItemType>
void Linked<ItemType>::clear()
{
   Node<ItemType>* nodeToDeletePtr = headPtr;
   while (headPtr != NULL)
   {
      headPtr = headPtr->getNext();
      
      // Return node to the system
      nodeToDeletePtr->setNext(NULL);
      delete nodeToDeletePtr;
      
      nodeToDeletePtr = headPtr;
   }  // end while
   // headPtr is nullptr; nodeToDeletePtr is nullptr
   
	itemCount = 0;
}  // end clear

template<class ItemType>
void Linked<ItemType>::showLinked()const{
	Node<ItemType> * currentPtr = headPtr;
	
	while(currentPtr){
		cout <<currentPtr->getItem() << endl;
		currentPtr = currentPtr->getNext();
	}
	cout << endl << endl;
}

template<class ItemType>
Node<ItemType>* Linked<ItemType>::getNodeBefore(const ItemType& anEntry) const
{
   Node<ItemType>* curPtr = headPtr;
   Node<ItemType>* prevPtr = NULL;
   
   while ( (curPtr != NULL) && (anEntry >= curPtr->getItem()) )
   {
      prevPtr = curPtr;
      curPtr = curPtr->getNext();
   } // end while
   
   return prevPtr;
} // end getNodeBefore
