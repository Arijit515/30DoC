#include <bits/stdc++.h> 
using namespace std; 

struct Queue { 
	stack<int> stack1, stack2; 

	void enqueue(int x) 
	{ 
		while (!stack1.empty()) { 
			stack2.push(stack1.top()); 
			stack1.pop(); 
		}  
		stack1.push(x); 
		while (!stack2.empty()) { 
			stack1.push(stack2.top()); 
			stack2.pop(); 
		} 
	} 
	int dequeue() 
	{ 
		if (stack1.empty()) { 
			cout << "queue is Empty"; 
			exit(0); 
		} 
		int x = stack1.top(); 
		stack1.pop(); 
		return x; 
	} 
}; 

int main() 
{ 
	Queue q; 
	q.enqueue(3); 
	q.enqueue(4); 
	q.enqueue(5); 

	cout << q.dequeue() << endl; 
	cout << q.dequeue() << endl; 
	cout << q.dequeue() << endl; 

	return 0; 
} 

