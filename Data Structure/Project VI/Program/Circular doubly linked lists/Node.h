#ifndef _NODE_
#define _NODE_
#include <cstddef>

template<class ItemType>
class Node{
private:
   ItemType item;       // A data item
   Node<ItemType>* next; // Pointer to next node
   Node<ItemType>* back;
   
public:
   Node();
   Node(const ItemType& anItem);
   Node(const ItemType& anItem, Node<ItemType>* nextNodePtr, Node<ItemType>* BackNodePtr);
   void setItem(const ItemType& anItem);
   void setNext(Node<ItemType>* nextNodePtr);
   void setBack(Node<ItemType>* backNodePtr);
   ItemType getItem()const;
   Node<ItemType>* getNext()const;
   Node<ItemType>* getBack()const;
   int getBinario()const;
   char getCharacter()const;
}; // end Node
#endif

template<class ItemType>
Node<ItemType>::Node() : next(NULL), back(NULL){
	
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem) : item(anItem), next(NULL), back(NULL){
	
} // end constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem, Node<ItemType>* nextNodePtr, Node<ItemType>* backNodePtr) : item(anItem), next(nextNodePtr), back(backNodePtr){
	
} // end constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& anItem){
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
Node<ItemType>* Node<ItemType>::getNext() const{
   return next;
} // end getNext

template<class ItemType>
void Node<ItemType>::setBack(Node<ItemType>* backNodePtr){
   back = backNodePtr;
} // end setBack

template<class ItemType>
Node<ItemType>* Node<ItemType>::getBack()const{
   return back;
} // end setBack

template<class ItemType>
int Node<ItemType>::getBinario()const{
   return item.getNumBinario();
} // end getBinario

template<class ItemType>
char Node<ItemType>::getCharacter()const{
   return item.getCharacter();
} // end setCharacter

