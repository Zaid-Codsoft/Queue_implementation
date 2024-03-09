#include<iostream>
using namespace std;

// circular queue.......
class Node {
public:
	int data;
	Node* next;
	Node(int d) :data(d), next(NULL) {}
};
class queue {
public:
	Node* front;
	Node* rear;

	queue() :front(NULL), rear(NULL) {}
	bool isempty() {
		if (front == nullptr && rear == NULL) {
			return true;
		}
		else return false;
	}

	void enqueue(int d) {
		Node* addnode = new Node(d);
		addnode->next = nullptr;
		if (isempty()) {
			rear = addnode;
			front = addnode;
		}
		else {

			rear->next = addnode;
			rear = addnode;
		}
		rear->next = front;
	}
	int dequeue() {
		if (isempty()) {
			cout << "queue is Empty :\n";
			return -1;
		}
		int num = -1;
		num = front->data;
		Node* temp = front;
		front = front->next;
		rear->next = front;
		delete temp;


		return num;

	}
};
int main() {
	queue q;
	q.enqueue(2);
	q.enqueue(5);
	q.enqueue(7);
	q.enqueue(9);
	cout << q.dequeue();
	return 0;
}









// simple queue....


//class Node {
//public:
//	int data;
//	Node* next;
//	Node(int d):data(d),next(NULL){}
//};
//class queue {
//public:
//	Node* front;
//	Node* rear;
//
//	queue() :front(NULL), rear(NULL) {}
//	bool isempty() {
//		if (front == nullptr&&rear == NULL) {
//			return true;
//		}
//		else return false;
//	}
//
//	void enqueue(int d) {
//		Node* addnode = new Node(d);
//		addnode->next = nullptr;
//		if (isempty()) {
//			rear = addnode;
//			front = addnode;
//		}
//		else {
//
//			rear->next = addnode;
//			rear = addnode;
//		}
//	}
//	int dequeue() {
//		if (isempty()) {
//			cout << "queue is Empty :\n";
//			return -1;
//		}
//		int num=-1;
//		num = front->data;
//		Node* temp = front;
//		front = front->next;
//		delete temp;
//
//
//		return num;
//
//	}
//};
//int main() {
//	queue q;
//	q.enqueue(2);
//	q.enqueue(5);
//	q.enqueue(7);
//	q.enqueue(9);
//	cout << q.dequeue();
//	return 0;
//}