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
	List();  // �����������
	bool isEmpty();  // �����, �����������, ������ �� ������
	void pushBack(int);  // ���������� ��-�� � �����
	void print();  // ����� � �������
	void pushForward(int);  // ���������� ��-�� � ������
	void reverse(List*, Node*, int&); // �������������� ������
	List* reverseStart(int& depth);
};

