#ifndef _PRIORITY_QUEUE
#define _PRIORITY_QUEUE

#include <iostream>
#include "QueueInterface.h"
#include "Linked.h"
using namespace::std;

template<class ItemType>
class SL_PriorityQueue : public QueueInterface<ItemType>{
private:
   Linked<ItemType> slistPtr;  // Pointer to sorted list of
                                          // items in the priority queue

public:
   SL_PriorityQueue();
   ~SL_PriorityQueue();
   
   bool add(const ItemType& newEntry);
   bool remove();
   void showList()const;
}; // end SL_PriorityQueue
#endif

template<class ItemType>
SL_PriorityQueue<ItemType>::SL_PriorityQueue():slistPtr(){
	
} // end Contructor

template<class ItemType>
SL_PriorityQueue<ItemType>::~SL_PriorityQueue(){
	
} // end Destructure

template<class ItemType>
bool SL_PriorityQueue<ItemType>::add(const ItemType &newEntry){ 
   slistPtr.insertSorted(newEntry);
   return true;
}  // end add

template<class ItemType>
bool SL_PriorityQueue<ItemType>::remove(){
   // The highest priority item is at the end of the sorted list
   return slistPtr.remove();
}  // end remove

template<class ItemType>
void SL_PriorityQueue<ItemType>::showList()const{ 
   slistPtr.showLinked();
}
   
