
#include <iostream>
using namespace std;

void nhapSoDuong(int& a)
{
	while (a <= 1)
	{
		cout << "So nhap vao phai lon hon 1, vui long nhap lai: ";
		cin >> a;
	}
}
int tinhF(int a)
{
	int f0 = 1;
	int f1 = 2;
	long f;
	for (size_t i = 2; i <= a; i++)
	{
		f = 3 * f1 - 2 * f0;
		f0 = f1;
		f1 = f;
	}
	return f;
}
int main()
{
	int n;
	cout << "Vui long nhap n: ";
	cin >> n;
	nhapSoDuong(n);
	cout << "Gia tri cua F" << n << " la: " << tinhF(n) << endl;
	system("pause");
	return 0;
}

