#ifndef COUNT_H
#define COUNT_H
class Count{
private:
	int ct;
	//public�� ���� �ִ� ������, ���� ������, ct�� ���� getter, setter
public:
	Count();
	Count(int i);
	int getCt();
	void setCt(int n);

};
#endif