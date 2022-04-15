#ifndef AAA_H
#define AAA_H
class AAA {
private:
	int pri;
protected:
	int pro;
public:
	int pub;
	AAA();
	AAA(int _pri, int _pro, int _pub);
	~AAA();
	void Print();
};
#endif
