#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *prev, *next;
	static Node* getnode(int data)
	{
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->data = data;
		newNode->prev = newNode->next = NULL;
		return newNode;
	}
};

class Deque
{
	Node* front;
	Node* rear;
	int Size;

public:
	Deque()
	{
		front = rear = NULL;
		Size = 0;
	}

	void insertFront(int data);
	void insertRear(int data);
	void deleteFront();
	void deleteRear();
	int getFront();
	int getRear();
	int size();
	bool isEmpty();
	void erase();
};

bool Deque::isEmpty()
{
	return (front == NULL);
}

int Deque::size()
{
	return Size;
}

void Deque::insertFront(int data)
{
	Node* newNode = Node::getnode(data);
	
	if (newNode == NULL)
		cout << "OverFlow\n";
	else
	{
		if (front == NULL)
			rear = front = newNode;
            else
		{
			newNode->next = front;
			front->prev = newNode;
			front = newNode;
		}
		Size++;
	}
}

void Deque::insertRear(int data)
{
	Node* newNode = Node::getnode(data);
	if (newNode == NULL)
		cout << "OverFlow\n";
	else
	{
		if (rear == NULL)
			front = rear = newNode;
		else
		{
			newNode->prev = rear;
			rear->next = newNode;
			rear = newNode;
		}

		Size++;
	}
}
void Deque::deleteFront()
{
	
	if (isEmpty())
		cout << "UnderFlow\n";

	else
	{
		Node* temp = front;
		front = front->next;
        if (front == NULL)
			rear = NULL;
		else
			front->prev = NULL;
		free(temp);
        Size--;
	}
}

void Deque::deleteRear()
{
	if (isEmpty())
		cout << "UnderFlow\n";

	else
	{
		Node* temp = rear;
		rear = rear->prev;
		if (rear == NULL)
			front = NULL;
		else
			rear->next = NULL;
		free(temp);

		Size--;
	}
}

int Deque::getFront()
{
	
	if (isEmpty())
		return -1;
	return front->data;
}

int Deque::getRear()
{
	if (isEmpty())
		return -1;
	return rear->data;
}

void Deque::erase()
{
	rear = NULL;
	while (front != NULL)
	{
		Node* temp = front;
		front = front->next;
		free(temp);
	}
	Size = 0;
}

int main()
{
	Deque dq;
	cout << "Insert element '5' at rear end\n";
	dq.insertRear(5);

	cout << "Insert element '10' at rear end\n";
	dq.insertRear(10);

	cout << "Rear end element: "
		<< dq.getRear() << endl;

	dq.deleteRear();
	cout << "After deleting rear element new rear"
		<< " is: " << dq.getRear() << endl;

	cout << "Inserting element '15' at front end \n";
	dq.insertFront(15);

	cout << "Front end element: "
		<< dq.getFront() << endl;

	cout << "Number of elements in Deque: "
		<< dq.size() << endl;

	dq.deleteFront();
	cout << "After deleting front element new "
		<< "front is: " << dq.getFront() << endl;

	return 0;
}
