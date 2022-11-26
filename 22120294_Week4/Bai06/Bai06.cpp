
#include <iostream>
using namespace std;

void nhapSoDuong(int& a) {

	while (a <= 0)
	{
		if (a <= 0)
		{
			cout << "- So nhap vao phai la so duong, vui long nhap lai: ";
			cin >> a;
		}
	}
}
int timUCLN(int a, int b)
{
	while (a * b != 0) {
		if (a > b) {
			a %= b; 
		}
		else {
			b %= a;
		}
	}
	return a + b;
}

int main()
{
	int a, b;
	cout << "Nhap vao so thu nhat: ";
	cin >> a;
	nhapSoDuong(a);
	cout << "Nhap vao so thu hai: ";
	cin >> b;
	nhapSoDuong(b);
	
	cout << "Uoc chung lon nhat cua 2 so la: " << timUCLN(a, b) << endl;
	system("pause");
	return 0;
}

