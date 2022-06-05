#pragma once

class List {
private:
	struct Node {
		public:
			int value;
			Node* next;
			Node(int, Node* = nullptr);
	};
	Node* first;
	Node* last;

public:
	List();  // конструктор
	bool isEmpty();  // метод, проверяющий, пустой ли список
	void pushBack(int);  // добавление эл-та в конец
	void print();  // вывод в консоль
	void pushForward(int);  // добавление эл-та в начало
	void reverse(List*, Node*, int&); // переворачивает список
	List* reverseStart(int& depth);
};

