#include <iostream>
#include "Geometric.h"
#include "circle.h"
#include "Rect.h"
using namespace std;
const int MAX = 5;//Windows와 내 노트북이 허용하는 도형의 개수
void CleanUp(Geometric** A, int n);


int main() {
	//Geometric g("red", 5, 5);//Can't be instanciated
	Geometric* gPtr;//Pointer 변수 생성은 가능하나, 객체 변수는 생성불가. Abstract Class
	cout << sizeof(Geometric) << endl;
	//도형들을 담을 객체 포인터 배열을 준비한다.
	Geometric* A[MAX] = { NULL };
	//원하는 타입의 객체를 생성한다.
	A[0] = new Circle(100, "blue", 10, 10);//객체 포인터 간 implicit upcasting
	A[1] = new Rect(300, 300, "yellow", 5, 5);
	A[2] = new Rect(200, 200, "black", 7, 7);
	A[3] = new Circle(300, "red", 50, 50);
	A[4] = new Rect(50, 70, "purple", 9, 9);//new Geometric("white", 30, 30); 'Geometric'추상 클래스이므로 사용불가.
	//배열에 보관된 객체를 그린다.
	for (int i = 0;i < MAX;i++) {
			A[i]->draw();
	}
	//Memory Clean up
	CleanUp(A, MAX);
	//Base 객체와 Derived 객체 간 형변환, Base ptr 와 Derived ptr간의 형변환
	
	//Geometric g("yellow", 10, 10);//base object
	//g.draw();
	//Circle c(100, "blue", 50, 50);//derived object
	//c.draw();
	//
	//cout << "객체 간 형변환" << endl;
	//g = c;
	//g.draw();
	//cout << "Object Pointer" << endl;
	//Geometric* bp = &g;
	//bp->draw();
	//Circle* dp = &c;
	//dp->draw();
	//cout << "Implicit Upcasting(암묵적 업캐스팅)" << endl;
	//bp = dp;//가장많이 사용
	//
	//bp->draw();
	////dp=bp 변환불가. Geometric* 에서 Circle*로 변환불가
	//cout << "Explicit Downcasting(명시적 다운캐스팅)" << endl;
	//bp = &g;
	//dp = (Circle*)bp;
	//dp->draw();//Unexpected Thing happens
	//return 0;
}
void CleanUp(Geometric** A, int n) {
	for (int i = 0;i < n;i++) {
		delete A[i];A[i] = NULL;
	}
}
