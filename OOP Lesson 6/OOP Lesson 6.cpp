#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "LinketList.h"

// ��������� ���������� 

//class Digit
//{
//private:
//
//	int _data;
//
//public:
//
//
//	Digit(int data) : _data(data){}
//
//	int operator+(Digit &digit)
//	{
//		return _data + digit._data;
//	}
//
//
//	int operator-(Digit& digit)
//	{
//		if(_data < digit._data)
//			return 	digit._data - _data;
//		return _data - digit. _data;
//	}
//
//};




int main() {
	setlocale(LC_ALL, "Ru");

	//���������� ���������.
	/*Digit digit(5);
	Digit digit2(20);
	std::cout << digit + digit2 << "\n";    // ��������� ��������� ������ ������� 
	std::cout << digit - digit2 << "\n";
	std::cout << digit.operator+(digit2) << "\n";
	std::cout << digit.operator-(digit2) << "\n";*/
		
	// ��������

	LinkedList list;
	list.Push_back(109);
	list.Push_back(20);
	list.Push_back(34);
	list.Push_back(54);
	list.Push_back(85);
	list.Push_back(35);
	list.PushByIndex(0, 3);
	list.ShowList();
	
	//std::cout << "\n" << "������ ������: ";
	//std::cout << list.SerchByIndex(3)->GetData(); //����� 3 �������� � ������






	return 0;
}