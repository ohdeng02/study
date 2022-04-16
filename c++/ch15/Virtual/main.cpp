#include<iostream>
using namespace std;
class Base {
public:
	Base();
	~Base();
	virtual void f();
};
Base::Base() {
	cout << "Base 생성자" << endl;
}
void Base::f() {
	cout << "Base의 f()이 불리워짐" << endl;
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
	cout << "Derived 생성자" << endl;
}
void  Derived::f() {
	cout << "Derived의 f()이 불리워짐" << endl;
}
Derived::~Derived() {
	cout << "Derived Decon" << endl;
}

int main() {
	////Derived 객체
	//Derived d1;
	//d1.f();//Derived의 f()이 불리워짐
	//d1.Base::f();//Base f()불림
	////객체 간 upcasting
	//Base b1;
	//b1 = d1;
	//b1.f();//Base의 f()불림. reference가 아니라서
	////Pointer 간 upcasting
	//Base* bptr1 = &d1;
	//bptr1->f();//virtual이 있으면 Derived의 f()불림. 없으면 Base f()불림

	//Derived d, * pDer;
	//pDer = &d;
	//pDer->f();//Derived의 f()불림
	//Base* pBase;
	//pBase = pDer;//객체 pointer간 upcasting
	//pBase->f();//동적 Binding 발생, Derived의 f()가 불림.
	//Base bobj;
	//bobj = d;//객체 간 upcasting
	//bobj.f();//Base의 f() 불림.

	Derived* derPtr = new Derived();
	Base* basePtr = new Derived();//객체 간 Upcasting
	delete derPtr;
	delete basePtr;
	return 0;
}