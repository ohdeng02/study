#include<iostream>
#include "Student.h"
using namespace std;

Student::Student()
	:Person()
{
	cout << "Student 인자 없는 생성자" << endl;
	sid = 0;
	major = new char[MAX];
	major[0] = NULL;
}
Student::Student(int _age, const char* _name, int _sid, const char* _major)
	:Person(_age,_name)
{
	cout << "Student 인자 있는 생성자" << endl;
	sid = _sid;
	major = new char[strlen(_major) + 1];
	strcpy_s(major, strlen(_major) + 1, _major);
}
Student::Student(const Student& obj)
	:Person(obj)
{
	cout << "Student 복사 생성자" << endl;
	sid = obj.sid;
	major = new char[strlen(obj.major) + 1];
	strcpy_s(major, strlen(obj.major) + 1, obj.major);
}
Student::~Student() {
	cout << "Student deconstructor" << endl;
	if (major) {
		delete[]major;major = NULL;
	}
}
Student& Student::operator=(const Student& obj) 
{
	if (this != &obj) {
		Person::operator=(obj);
		sid = obj.sid;
		delete[]major;major = NULL;
		major = new char[strlen(obj.name) + 1];
		strcpy_s(major, strlen(obj.major) + 1, obj.major);
	}
	return *this;
}
int Student::getSid() {
	return sid;
}
void Student::setSid(int _sid) {
	sid = _sid;
}
char* Student::getMajor() {
	return major;
}
void Student::setMajor(const char* _major) {
	delete[]major;major = NULL;
	major = new char[strlen(_major) + 1];
	strcpy_s(major, strlen(_major) + 1, _major);
}
void Student::showData() {
	Person::showData();
	cout << "학번: " << sid << " 전공: " << major << endl;
}