//Basic queue code::::::::::::
/*
#include<iostream>
#include<queue>
using namespace std;
int main () {
	//create a queue::::::::::::::::
	queue<int> q;
	q.push(11);
	cout<<"front of q is "<<q.front()<<endl;
	q.push(15);
	q.push(13);
	cout<<"front of q is "<<q.front()<<endl;
	q.push(7);
	cout<<"Size of queue is: "<<q.size()<<endl;
	q.pop();
	cout<<"Size of queue is: "<<q.size()<<endl;
	//cout<<"Rear of q is "<<q.rear()<<endl;
} */

//Implementation of queue using array::::::

#include<iostream>
#include<queue>
using namespace std;
class Queue {
	int* arr;
	int front;
	int rear;
	int size;
public:
	Queue() {
		size = 100001;
		arr = new int[size];
		front = 0;
		rear = 0;
	}
	bool isempty() {
		
	}
	void enqueue(int data) {
		 if(rear == size)
		   cout<<"Queue is Full"<<endl;
		 else
		 {
		 	arr[rear]=data;
		 	rear++;
		 }
	}
	int dequeue() {
		if(front == rear) {
			return -1;
		}
		else
		{
			arr[front] = -1;
			front++;
		}
	}
};
int main () {
	
}

