#include <iostream>
using namespace std;

int main() {
	//space�� �ִ� �̸� �Է¹ޱ�
	/*cout << "�̸��� �Է��ϼ���:";
	char name[100];
	cin.getline(name,100,'\n');
	cout << "����� �̸���" << name << "�Դϴ�" << endl;*/
	//�ʺ�� ���̸� ���� �Է¹޾� ������ ����ϱ�
	//�ʺ�� ���̸� ���� �Է¹޾� ������ ����ϱ�
	/*cout << "Width:";
	int width;
	cin >> width;
	cout << "Height:";
	int height;
	cin >> height;
	cout << "������" << width * height << "�Դϴ�." << endl;
	int w, h;
	cout << "width height:";
	cin >> w >> h;
	cout << "������" << w * h << "�Դϴ�." << endl;*/
	//C++�� ��ȣ�� ���α׷� �ۼ� �ùٸ� ��ȣ�� �Է��ϸ� �����ϰ� �ƴϸ� ���������� ���´�.
	//��, ����ڰ� �ƹ� �Է¾��� enter�� ���� ��쵵 �����Ѵ�.
	cout << "�ùٸ� ��ȣ�� �Է��Ͻÿ�." << endl;
	char pwd[100];
	while (true) {
		cout << "��ȣ �Է�:";
		cin.getline(pwd, 100, '\n');
		if (strcmp(pwd, "C++") == 0) {
			cout << "�ùٸ� ��ȣ�Դϴ�." << endl;
			break;
		}
		else if (strcmp(pwd, "\0")==0) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else {
			cout << "Ʋ����ȣ�Դϴ�. �ٽ� �Է����ּ���." << endl;
		}
	}
	/*char pwd[100];
	cout << "�ùٸ� ��ȣ�� �Էµ� ������ ��ȣ�� ���������� �Է��ϱ�." << endl;
	while (true) {
		cout << "��ȣ �Է�:";
		cin.getline(pwd, 100);
		if (strcmp(pwd, "C++") == 0) {
			cout << "�ùٸ� ��ȣ�Դϴ�.���α׷��� �����ϴ�." << endl;
			break;
		}
		else if(strcmp(pwd, "\0") == 0) {
			cout << "���α׷� ���� ����" << endl;
			break;
		}
		else {
			cout << "Ʋ�� ��ȣ�Դϴ�" << endl;
		}

	}*/
	//cout << "�̸��� �Է��ϼ���:";
	//char name[100];
	//cin >> name;
	//cout << "����� �̸���" << name << "�Դϴ�" << endl;
	return 0;
}