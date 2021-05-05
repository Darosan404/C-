#include<iostream>
#include "Queue.h"
using namespace::std;

int main(){
	ArrayQueue<int> queue1, queue2, queueFront;
 
 queue1.enqueue(1);
 queue1.enqueue(2); 
 queue2.enqueue(3); 
 queue2.enqueue(4); 
 queue1.dequeue();
 //queueFront = queue2.peekFront(); 
// queue1.enqueue(queueFront); 
 queue1.enqueue(5); 
 queue2.dequeue(); 
 queue2.enqueue(6); 
	
	system("pause");
	return 0;
}
