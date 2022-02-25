#include "count.h"
#include<iostream>
using namespace std;
void increment(Count c, int t);
void incrementByRef(Count& c, int& t);
int main() {
	cout << sizeof(Count)<<endl;
	Count obj;
	int times = 0;
	for (int i = 0;i < 100;i++) {
		increment(obj, times);
	}
	cout << "obj.getCt():" << obj.getCt() << endl;
	cout << "times:" << times << endl;

	for (int i = 0;i < 100;i++) {
		incrementByRef(obj, times);
	}
	cout << "obj.getCt():" << obj.getCt() << endl;
	cout << "times:" << times << endl;
}
void increment(Count c, int t) {
	//c.ct++;   ct는 private이라서 안됨.
	int ct = c.getCt();
	c.setCt(ct + 1);
	t++;
}
void incrementByRef(Count& c, int& t) {//Count& c=obj;
	int ct = c.getCt();
	c.setCt(ct + 1);
	t++;
}