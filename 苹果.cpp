#include <iomanip>
#include<iostream>
using namespace std;
int main()
{
	float a = 2, b=0, c = 0, d = 1;
	for (c = 0.8; a <= 100; a = a * 2)
		b= a+b; 
	a=b;
	d=d+1;
	cout << "ƽ��ÿ�컨" << a * 0.8 / d << endl;
		return 0;

}
