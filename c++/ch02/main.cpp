#include <iostream>
using namespace std;

int main() {
	//너비와 높이를 각각 입력받아 면적을 출력하기
	//너비와 높이를 같이 입력받아 면적을 출력하기
	/*cout << "Width:";
	int width;
	cin >> width;
	cout << "Height:";
	int height;
	cin >> height;
	cout << "면적은" << width * height << "입니다." << endl;
	int w, h;
	cout << "width height:";
	cin >> w >> h;
	cout << "면적은" << w * h << "입니다." << endl;*/
	////C++이 암호인 프로그램 작성 올바른 암호를 입력하면 종료하고 아니면 지속적으로 묻는다.
	/*char pwd[100];
	cout << "올바른 암호가 입력될 때까지 암호를 지속적으로 입력하기." << endl;
		while (true) {
			cout << "암호 입력:";
			cin >> pwd;
			if(strcmp(pwd,"C++")==0) {
			cout<<"올바른 암호입니다.프로그램을 나갑니다."<<endl;
				break;
			}
			else {
			cout<<"틀린 암호입니다"<<endl;			
			}
		
		}*/
	cout << "이름을 입력하세요:";
	char name[100];
	cin >> name;
	cout << "당신의 이름은" << name << "입니다" << endl;
	return 0;
}