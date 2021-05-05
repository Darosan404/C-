#ifndef _NODE_
#define _NODE_
#include <cstddef>

template<class ItemType>
class Node{
private:
   ItemType item;       // A data item
   Node<ItemType>* next; // Pointer to next node
   
public:
   Node();
   Node(const ItemType& anItem);
   Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
   void setItem(const ItemType& anItem);
   void setNext(Node<ItemType>* nextNodePtr);
   ItemType getItem()const;
   Node<ItemType>* getNext()const;
   bool operator <= (const ItemType &) const;
   bool operator >= (const ItemType &) const; 
   ItemType getName()const;
}; // end Node
#endif

//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** @file Node.cpp 
    Listing 4-2 */

template<class ItemType>
Node<ItemType>::Node() : next(NULL){
	
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem) : item(anItem), next(NULL){
	
} // end constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem, Node<ItemType>* nextNodePtr) : item(anItem), next(nextNodePtr){
	
} // end constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& anItem){
	cin >> anItem;
   item = anItem;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextNodePtr){
   next = nextNodePtr;
} // end setNext

template<class ItemType>
ItemType Node<ItemType>::getItem() const{
   return item;
} // end getItem

template<class ItemType>
ItemType Node<ItemType>::getName() const{
   return item.getName();
} // end getName

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const{
   return next;
} // end getNext

template<class ItemType>
bool Node<ItemType>::operator <=(const ItemType & aItem) const{
	return (this->item <= aItem.item);
}   

template<class ItemType>
bool Node<ItemType>::operator >=(const ItemType & aItem) const{
	return (this->item >= aItem.item);
}   
