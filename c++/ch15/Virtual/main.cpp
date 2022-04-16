#include<iostream>
using namespace std;
class Base {
public:
	Base();
	~Base();
	virtual void f();
};
Base::Base() {
	cout << "Base ������" << endl;
}
void Base::f() {
	cout << "Base�� f()�� �Ҹ�����" << endl;
}
Base::~Base() {
	cout << "Base Decon" << endl;
}
class Derived :public Base {
public:
	Derived();
	~Derived();
	virtual void f();
};
Derived::Derived() {
	cout << "Derived ������" << endl;
}
void  Derived::f() {
	cout << "Derived�� f()�� �Ҹ�����" << endl;
}
Derived::~Derived() {
	cout << "Derived Decon" << endl;
}

int main() {
	////Derived ��ü
	//Derived d1;
	//d1.f();//Derived�� f()�� �Ҹ�����
	//d1.Base::f();//Base f()�Ҹ�
	////��ü �� upcasting
	//Base b1;
	//b1 = d1;
	//b1.f();//Base�� f()�Ҹ�. reference�� �ƴ϶�
	////Pointer �� upcasting
	//Base* bptr1 = &d1;
	//bptr1->f();//virtual�� ������ Derived�� f()�Ҹ�. ������ Base f()�Ҹ�

	//Derived d, * pDer;
	//pDer = &d;
	//pDer->f();//Derived�� f()�Ҹ�
	//Base* pBase;
	//pBase = pDer;//��ü pointer�� upcasting
	//pBase->f();//���� Binding �߻�, Derived�� f()�� �Ҹ�.
	//Base bobj;
	//bobj = d;//��ü �� upcasting
	//bobj.f();//Base�� f() �Ҹ�.

	Derived* derPtr = new Derived();
	Base* basePtr = new Derived();//��ü �� Upcasting
	delete derPtr;
	delete basePtr;
	return 0;
}