#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float num1, num2, num3;
	cout << "�����ߵĳ�����";
	cin >> num1 >> num2 >> num3;
	cout << "�ܳ���" << num1 + num2 + num3;
	if (num1 = num2)
		cout << "�������ǵ���������";
	else if (num3 == num2)
		cout << "�������ǵ���������";
	else if (num1 == num3)
		cout << "�������ǵ���������";
	else
		cout << "�������ǵ���������";
	return 0;
}