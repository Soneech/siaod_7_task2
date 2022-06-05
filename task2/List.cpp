#include "List.h";
#include <iostream>
using namespace std;

List::Node::Node(int value, Node* next) {
	this->value = value;
	this->next = next;
}

List::List() {  // ������������� ������� ������
	first = nullptr;
	last = nullptr;
}

bool List::isEmpty() {  // ����� �������� ������� ������
	return first == nullptr;
}

void List::pushBack(int value) {  // ����� ���������� � ����� �������
	Node* elem = new Node(value);  // �������� ������������ ��-��
	if (isEmpty()) {  // ���� ������ ������
		first = elem;
		last = elem;
	}
	else {  // ��������������� ���������� ��-��
		last->next = elem;
		last = elem;
	}
}

void List::pushForward(int value) {  // ����� ���������� � ������ �������
	Node* elem = new Node(value);  // �������� ������������ ��-��
	elem->next = first;  // ��������������� ������� ��-��
	first = elem;
}

void List::print() {  // ����� ������ ������� � �������
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