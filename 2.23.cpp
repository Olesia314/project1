#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	float n, a, max;
	int i=2;
	int count= 1;
	cin >> n;
	max = sin(n + 1 / n);
	while (i <= n)
	{
		a = sin(n + i / n);
		if (a > max)
		{
			max = a;
			count= i;
		}
		else if (a == max)
		{
			count++;
		}
		i++;
	}
	cout << "������������ �������:" <<max<< endl;
	cout << "����� ��������� � ����� ���������:" << count<< endl;
}

