#include <iostream>
#include <math.h>
using namespace std;

void nhapSoDuong(int& a)
{
	while (a < 1 || a>10000000)
	{
		cout << "\nKhong thoa man dieu kien.\n";
		cout << "Vui long nhap lai: ";
		cin >> a;
	}
}
bool ktSoHoanChinh(int a)
{
	int sum = 1, sum1 = 1;
	bool kt = false;
	for (size_t i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			if (i != a / i)
			{
				sum = (sum + i + (a / i));
				sum1 = (sum1 * i * (a / i));
			}
			else
			{
				sum = (sum + i);
				sum1 = (sum1 * i);
			}
		}
	}
	if (sum == sum1)
	{
		kt = true;
	}
	return kt;
}
int main()
{
	int n;
	cout << "Vui long nhap gia tri cua n: ";
	cin >> n;
	nhapSoDuong(n);
	bool x = ktSoHoanChinh(n);
	if (x == true)
	{
		cout << "La so hoan chinh." << endl;
	}
	else
	{
		cout << "Khong la so hoan chinh." << endl;
	}
	system("pause");
	return 0;
}