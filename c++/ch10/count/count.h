#ifndef COUNT_H
#define COUNT_H
class Count{
private:
	int ct;
	//public한 인자 있는 생성자, 없는 생성자, ct에 대한 getter, setter
public:
	Count();
	Count(int i);
	int getCt();
	void setCt(int n);

};
#endif