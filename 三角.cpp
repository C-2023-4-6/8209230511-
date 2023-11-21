#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float num1, num2, num3;
	cout << "三条边的长度是";
	cin >> num1 >> num2 >> num3;
	cout << "周长是" << num1 + num2 + num3;
	if (num1 = num2)
		cout << "三角形是等腰三角形";
	else if (num3 == num2)
		cout << "三角形是等腰三角形";
	else if (num1 == num3)
		cout << "三角形是等腰三角形";
	else
		cout << "三角形是等腰三角形";
	return 0;
}