#ifndef _LINKED_
#define _LINKED_
 
#include<iostream>
#include "Node.h"
#include <cstddef>
using namespace::std;

template<class ItemType>
class Linked{
private:
   Node<ItemType>* first = NULL; // Pointer to first node
   Node<ItemType>* last = NULL; 
   int itemCount;           // Current count of bag items
   
public:
   Linked();
  // Linked(const Linked<ItemType>& aBag); // Copy constructor
   virtual ~Linked();                       // Destructor should be virtual
   bool isEmpty() const;
   void add(const ItemType& newEntry);
   bool remove();
   void clear();
   void showLinked()const;
   char code(char[])const;
   void encode(char)const;
   int search(char)const;
}; // end LinkedBag
#endif

template<class ItemType>
Linked<ItemType>::Linked() : first(NULL), last(NULL) ,itemCount(0){
	
}  // end default constructor

template<class ItemType>
Linked<ItemType>::~Linked(){
   clear();
}  // end destructor

template<class ItemType>
bool Linked<ItemType>::isEmpty() const{
	return itemCount == 0;
}  // end isEmpty

template<class ItemType>
void Linked<ItemType>::add(const ItemType& newEntry){
	Node<ItemType> *current; //pointer to traverse the list 
	Node<ItemType> *temp;
	Node<ItemType> *newNode = new Node<ItemType>(newEntry); //pointer to create a node bool found;
	
	if (first  == NULL){ //if the list is empty, newNode is //the only node 
		first = newNode; 
		newNode->setNext(first);
		newNode->setBack(first);
		last = first; 
		itemCount++; 
	}
	else{
		current = first;
		for(int i = 0;i < itemCount; i++){
			temp = current;
			current = current->getNext();
		}
		
		temp->setNext(newNode);
		newNode->setBack(temp);
		newNode->setNext(first);
		last = newNode;
		itemCount++;
	}
} // end add

template<class ItemType>
bool Linked<ItemType>::remove(){
   bool canRemoveItem = !isEmpty();
   if (canRemoveItem){  
      // Delete first node
      Node<ItemType>* nodeToDeletePtr = first;
      first = first->getNext();
      
      // Return node to the system
      nodeToDeletePtr->setNext(NULL);
      delete nodeToDeletePtr;
      nodeToDeletePtr = NULL;
      
      itemCount--;
   } // end if
   
	return canRemoveItem;
}  // end remove

template<class ItemType>
void Linked<ItemType>::clear(){
   Node<ItemType>* nodeToDeletePtr;
   
   while (first != NULL){
   	nodeToDeletePtr = first;
    first = first->getNext();
      
      // Return node to the system
      nodeToDeletePtr->setNext(NULL);
      delete nodeToDeletePtr;
   }  // end while
   // headPtr is nullptr; nodeToDeletePtr is nullptr
   
   last = NULL;
	itemCount = 0;
}  // end clear

template<class ItemType>
void Linked<ItemType>::showLinked()const{
	Node<ItemType> *current; //pointer to traverse the list
	current = first; //set current to point to the first node
	
	for(int i = 0; i < itemCount; i++){ 
	cout << current->getItem() << endl; //output info 
	current = current->getNext(); 
	}//end while 
}

template<class ItemType>
void Linked<ItemType>::encode(char character)const{
	Node<ItemType> *current;
	current = first;
	int vueltas = search(character);
	int i = 0;
	
	while(i < vueltas){
	current = current->getNext();
	i++;
	}
		
	
	for(int i = 0; i < 5; i++){
		cout << current->getItem(); 
		current = current->getNext();
	}
}

template<class ItemType>
int Linked<ItemType>::search(char character)const{
	bool found = true;
	Node<ItemType> *current;
	current = first;
	int i = 0;
	
	while(found){
		if(current->getItem() == character)
			found = false;
		else{
			current = current->getNext();
			i++;
		}
	}	
	return i;
}

template<class ItemType>
char Linked<ItemType>::code(char numBinario[])const{
	Node<ItemType> *current;
	current = first;
	char temp[5];
	int i = 0;
	bool bandera = true;
	
	while(i < itemCount){
		bandera = true;
		for(int j = 0; j < 5; j++){
			if(current->getBinario() == 0)
				temp[j] = char(48);
			else
				temp[j] = char(49);
			current = current->getNext();
		}
		for(int k = 4; k > 0; k--)
			current = current->getBack();
			
		for(int z = 0; z < 5; z++){
			if ((temp[z] == numBinario[z]) && bandera)
				bandera = true;
			else
				bandera = false;
		}	
		if(bandera){
			current = current->getBack();
			return current->getCharacter();
		}
		i++;
	}	
	return ' ';
}
