#include <iostream>
using namespace std;
int main()
{
	float n, m;
	int we;
	cout << "������ 1-��������, 2-���������, 3-���������, 4-�������" << endl;
	cin >> n >> m >> we;
	switch (we)
	{
	case 1: cout << n + m << endl;break;
	case 2: cout << n - m << endl;break;
	case 3: cout << n * m << endl;break;
	case 4:
	{
		if ((m != 0) && (n != 0))
		{
			cout << n / m << endl;
		}
		else
		{
			if (m == 0)
			{
				cout << "������ ������ �� 0!" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		break;
	}
	default: cout << "�������� �� ��������" << endl;
	}
	return 0;

}