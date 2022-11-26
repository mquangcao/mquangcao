
#include <iostream>
#include <math.h>
using namespace std;

void nhapSo(int& a)
{
	while (!(a >= -255 && a <= 255))
	{
		cout << "Du lieu nhap sai, vui long nhap lai: ";
		cin >> a;
	}
}
int chuyenNhiPhan(int a)
{
	int binary = 0;
	int i = 0;
	while (a != 0)
	{
		binary = binary * 10 + a % 2;
		a /= 2;
		i++;
	}
	int binary1 = 0;
	for (int j = 1; j <= i; j++)
	{
		binary1 = binary1 * 10 + binary % 10;
		binary /= 10;

	}
	return binary1;
}

int main()
{
	int n;
	cout << "Nhap so de doi sang nhi phan: ";
	cin >> n;
	nhapSo(n);
	int a = chuyenNhiPhan(n);
	cout << "Day nhi phan cua " << n << " la: " << a << endl;
	system("pause");
	return 0;
}
