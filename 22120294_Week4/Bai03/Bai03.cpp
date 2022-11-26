#include <iostream>
#include <math.h>
using namespace std;

void nhapSoDuong(int& a) 
{
    while (a < 1 || a>100000000)
    {
        cout << "Khong thoa man dieu kien, vui long nhap lai: ";
        cin >> a;
    }
}
void ktSpHoanHao(int a)
{
	int sum = 0;
	for (size_t i = 1; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			if (i != a/i)
			{
				sum = sum + i + a / i;
			}
			else
			{
				sum = sum + i;
			}
			
		}
	}
	if (sum == 2*a)
	{
		cout << "La so Hoan hao." << endl;
	}
	else
	{
		cout << "Khong la so Hoan hao." << endl;
	}
}
int main()
{
	int n;
	cout << "Vui long nhap n: ";
	cin >> n;
	nhapSoDuong(n);
	ktSpHoanHao(n);
	system("pause");
	return 0;
}
