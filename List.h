#pragma once
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void PrimeNum();


template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();        
	void clear();
	void push_back(T data); 
	int GetSize();         

	T& operator[](const int index);   
	void push_front(T data);
	void insert(T value, int index); 
	void removeAt(int index);       
	void pop_back();              



private:
	template<typename T>
	class Node
	{
	public:
		Node * pNext;
		T data;
		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size;       
	Node<T> *head; 
};
#endif //LIST_H
