#ifndef PERSON_H
#define PERSON_H
const int MAX = 100;

class Person {
protected:
	int age;
	char* name;
public:
	Person();
	Person(int _age, const char* _name);
	Person(const Person& p);
	~Person();
	Person& operator=(const Person& p);
	char* getName();
	void setName(const char* _name);
	int getAge();
	void setAge(int _age);
	void showData();
};
#endif

