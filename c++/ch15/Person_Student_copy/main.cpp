#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

void FuncP(Person p) {
	cout << "I'm in FuncP()" << endl;
	p.showData();
}
void FuncS(Student s) {
	cout << "I'm in FuncS()" << endl;
	s.showData();
}
int main() {
	Person p1(20, "������");
	p1.showData();
	Person p2(p1);
	p2.showData();
	FuncP(p2);
	//FuncS(p2);error C2664: 'void FuncS(Student)': �μ� 1��(��) 'Person'���� 'Student'(��)�� ��ȯ�� �� �����ϴ�.
	Student s1(20, "������", 202034729, "ComputerEngineering");
	s1.showData();
	Student s2(s1);
	s2.showData();
	FuncS(s2);
	FuncP(s2);
	s2.Person::showData();
	return 0;
}