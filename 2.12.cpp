#include<iostream>
using namespace std;
int main()
{
	int n, �m,max, min;
	cout << "������� ����� ������������������" << endl;
	cin >> n;
	cout << "������� ������ �����" << endl;
	cin >> �m;
	max = �m;
	min = �m;
	for (int i = 2; i <= n;i++)
	{
		cout << "������� ������ �����" << endl;
		cin >> �m;
		if (�m > max)
		{
			max = �m;
		}
		else if (�m < min)
		{
			min = em;
		}
	}
	cout << "����� ������������� � ������������ �����" <<(max+min)<< endl;
}