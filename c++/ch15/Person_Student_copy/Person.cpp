#include<iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	cout << "Person ���� ���� ������" << endl;
	age = 0;
	name = new char[MAX];
}
Person::Person(int _age, const char* _name) {
	cout << "Person ���� �ִ� ������" << endl;
	age = _age;
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
}
Person::Person(const Person& p) {
		cout << "Person ���� ������" << endl;
		age = p.age;
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);
}
Person::~Person() {
	cout << "Person �Ҹ���" << endl;
	if (name) {
		delete[]name; name = NULL;
	}
}
Person& Person:: operator=(const Person& p) {
	if (this != &p) {
		cout << "Person ���� ������" << endl;
		age = p.age;
		if (name) {
			delete[]name; name = NULL;
		}
		name = new char[strlen(p.name) + 1];
		strcpy_s(name, strlen(p.name) + 1, p.name);
	}
	return *this;
}
char* Person::getName() {
	return name;
}
void Person::setName(const char* _name) {
	if (name) {
		delete[]name; name = NULL;
	}
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
}
int Person::getAge() {
	return age;
}
void Person::setAge(int _age) {
	age = _age;
}
void Person::showData() {
	cout << "�̸�: " << name << " ����: " << age << endl;
}