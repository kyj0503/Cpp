#include <iostream> 
using namespace std;

class Circle {              // Circle �����
public:
	int radius;
	double getArea();
};

double Circle::getArea() {  // Circle ������
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;           // ��ü dount ����
	donut.radius = 1;       // donut�� ��� ���� ����
	double area = donut.getArea(); // donut�� ��� �Լ� ȣ��
	cout << "donut ������ " << area << endl;

	Circle pizza;
	pizza.radius = 30; // pizza ��ü�� �������� 30���� ����
	area = pizza.getArea(); // pizza ��ü�� ���� �˾Ƴ���
	cout << "pizza ������ " << area << endl;
}
