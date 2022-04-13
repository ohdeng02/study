#include <iostream>
#include "Geometric.h"
#include "circle.h"
#include "Rect.h"
using namespace std;
const int MAX = 5;//Windows�� �� ��Ʈ���� ����ϴ� ������ ����
void CleanUp(Geometric** A, int n);


int main() {
	//Geometric g("red", 5, 5);//Can't be instanciated
	Geometric* gPtr;//Pointer ���� ������ �����ϳ�, ��ü ������ �����Ұ�. Abstract Class
	cout << sizeof(Geometric) << endl;
	//�������� ���� ��ü ������ �迭�� �غ��Ѵ�.
	Geometric* A[MAX] = { NULL };
	//���ϴ� Ÿ���� ��ü�� �����Ѵ�.
	A[0] = new Circle(100, "blue", 10, 10);//��ü ������ �� implicit upcasting
	A[1] = new Rect(300, 300, "yellow", 5, 5);
	A[2] = new Rect(200, 200, "black", 7, 7);
	A[3] = new Circle(300, "red", 50, 50);
	A[4] = new Rect(50, 70, "purple", 9, 9);//new Geometric("white", 30, 30); 'Geometric'�߻� Ŭ�����̹Ƿ� ���Ұ�.
	//�迭�� ������ ��ü�� �׸���.
	for (int i = 0;i < MAX;i++) {
			A[i]->draw();
	}
	//Memory Clean up
	CleanUp(A, MAX);
	//Base ��ü�� Derived ��ü �� ����ȯ, Base ptr �� Derived ptr���� ����ȯ
	
	//Geometric g("yellow", 10, 10);//base object
	//g.draw();
	//Circle c(100, "blue", 50, 50);//derived object
	//c.draw();
	//
	//cout << "��ü �� ����ȯ" << endl;
	//g = c;
	//g.draw();
	//cout << "Object Pointer" << endl;
	//Geometric* bp = &g;
	//bp->draw();
	//Circle* dp = &c;
	//dp->draw();
	//cout << "Implicit Upcasting(�Ϲ��� ��ĳ����)" << endl;
	//bp = dp;//���帹�� ���
	//
	//bp->draw();
	////dp=bp ��ȯ�Ұ�. Geometric* ���� Circle*�� ��ȯ�Ұ�
	//cout << "Explicit Downcasting(����� �ٿ�ĳ����)" << endl;
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
