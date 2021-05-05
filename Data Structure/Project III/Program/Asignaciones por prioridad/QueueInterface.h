#ifndef _QUEUE_INTERFACE
#define _QUEUE_INTERFACE

template<class ItemType>
class QueueInterface{
public:
   /** Adds a new entry to the back of this queue.
    @post If the operation was successful, newEntry is at the 
       back of the queue.
    @param newEntry  The object to be added as a new entry.
    @return True if the addition is successful or false if not. */
   virtual bool add(const ItemType& newEntry) = 0;
   
   /** Removes the front of this queue.
    @post If the operation was successful, the front of the queue 
       has been removed.
    @return True if the removal is successful or false if not. */
   virtual bool remove() = 0;
}; // end QueueInterface
#endif
