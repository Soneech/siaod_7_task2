#include <iostream>
#include "List.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, num, depth = 0;
	cout << "Введите размер списка: ";
	cin >> n;
	cout << "Введите значения для заполнения списка:" << endl;
	List* list = new List();
	for (int i = 0; i < n; i++) {
		cin >> num;
		list->pushBack(num);
	}
	List* reversedList = list->reverseStart(depth);
	cout << "Результат:" << endl;
	reversedList->print();
	cout << "Глубина рекурсии: " << depth << endl;

	delete reversedList;
	delete list;
	return 0;
}