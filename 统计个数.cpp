#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a=0, b=0, m=0, d=0;
	char c;
	cout<<"�����ı�";
	while ((c=getchar()) != '\\n')
		if ((c >= '0'&& c <= 'z')||(c >= 'A' && c <= 'Z'))
			a=a+1;
		else if (c >= '0' && c <= '9')
			b=b+1;
		else if (c == ' ')
            m=m+1;
		else
			d=d+1;
	cout << "��ĸ��" << a << "������" << b << "�ո���" << m << "������" << d << endl;
	return 0;
};


