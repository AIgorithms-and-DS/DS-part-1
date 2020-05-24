#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Deque.h"

using namespace std;

int main()
{

	int N;
	cout << "Input siaze of stack/queue/deque\n";
	cin >> N;

	//Стек
	Stack<int> *listStack = new Stack<int> (N);

	for (int i = 0; i < N; ++i)
	{
		listStack->push(i);
	}

	cout << "Stack: ";
	for (int i = 0; i < N; ++i)
	{
		cout << listStack->pop() << " ";
	}
	cout << endl;

	//Очередь
	Queue<int>* listQueue = new Queue<int> (N);

	for (int i = 0; i < N; ++i)
	{
		listQueue->push(i);
	}

	cout << "Queue: ";
	for (int i = 0; i < N; ++i)
	{
		cout << listQueue->pop() << " ";
	}
	cout << endl;


	//Дек
	Deque<int>* listDeque = new Deque<int>(N);

	for (int i = 0; i < N; ++i)										 																	
	{
		i & 1 ? listDeque->push(i) : listDeque->pushBack(i);
		
	}

	cout << "Deque: ";
	for (int i = 0; i < N; ++i)
	{
		cout << (i & 1 ? listDeque->popBack() : listDeque->pop()) << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}