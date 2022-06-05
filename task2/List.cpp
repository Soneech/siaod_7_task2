#include "List.h";
#include <iostream>
using namespace std;

List::Node::Node(int value, Node* next) {
	this->value = value;
	this->next = next;
}

List::List() {  // инициализация пустого списка
	first = nullptr;
	last = nullptr;
}

bool List::isEmpty() {  // метод проверки пустоты списка
	return first == nullptr;
}

void List::pushBack(int value) {  // метод добавления в конец массива
	Node* elem = new Node(value);  // создание добавляемого эл-та
	if (isEmpty()) {  // если массив пустой
		first = elem;
		last = elem;
	}
	else {  // переопределение последнего эл-та
		last->next = elem;
		last = elem;
	}
}

void List::pushForward(int value) {  // метод добавления в начало массива
	Node* elem = new Node(value);  // создание добавляемого эл-та
	elem->next = first;  // переопределение первого эл-та
	first = elem;
}

void List::print() {  // метод вывода массива в консоль
	if (!isEmpty()) {
		Node* elem = first;
		while (elem) {
			cout << elem->value << " ";
			elem = elem->next;
		}
		cout << endl;
	}
}

void List::reverse(List* list, Node* node, int& depth) {
	if (node == nullptr) {
		return;
	}
	list->pushForward(node->value);
	depth++;
	reverse(list, node->next, depth);
}

List* List::reverseStart(int& depth) {
	List* reversedList = new List();
	reverse(reversedList, first, depth);
	return reversedList;
}