#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, www;
	bool plusfirst = false;
	bool minusfirst = false;
	cout << "������ ����� ������������������:" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> www;
		if (!plusfirst && !minusfirst)
		{
			if (www > 0)
			{
				plusfirst = true;
			}
			else if (www < 0)
			{
				minusfirst = true;
			}
		}
	}

	if (plusfirst)
	{
		cout << "�� ����� ������� ������������� �����" << endl;
	}
	else if (minusfirst)
	{
		cout << "�� ����� ������� ������������� ����� " << endl;
	}
	else
	{
		cout << " ��� ����� �������" << endl;
	}
	cout << endl;
}
