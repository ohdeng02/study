#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student :public Person {
protected:
	int sid;
	char* major;
public:
	Student();
	Student(int _age, const char* _name, int _sid, const char* _major);
	Student(const Student& obj);
	~Student();
	Student& operator=(const Student& obj);
	int getSid();
	void setSid(int _sid);
	char* getMajor();
	void setMajor(const char* _major);
	void showData();
};
#endif 
