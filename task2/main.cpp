#include <iostream>
#include "List.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, num, depth = 0;
	cout << "������� ������ ������: ";
	cin >> n;
	cout << "������� �������� ��� ���������� ������:" << endl;
	List* list = new List();
	for (int i = 0; i < n; i++) {
		cin >> num;
		list->pushBack(num);
	}
	List* reversedList = list->reverseStart(depth);
	cout << "���������:" << endl;
	reversedList->print();
	cout << "������� ��������: " << depth << endl;

	delete reversedList;
	delete list;
	return 0;
}