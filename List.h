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

	void pop_front();         //удаление первого элемента в списке
	void clear();
	void push_back(T data); //добавить элемент в конец списка
	int GetSize();         //Количество элементов с списке

	T& operator[](const int index);    //(перегруженный оператор) возвращает данные из списка по индексу
	void push_front(T data);
	void insert(T value, int index); //вставить элемент по указанному индексу
	void removeAt(int index);       //удаление элемента по указанному индексу
	void pop_back();               //удаление последнего элемента



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

	int Size;       //счетчик кол-ва элементов
	Node<T> *head; //первый элемент списка
};
#endif //LIST_H