
#include <iostream>
using namespace std;

void nhapSoDuong(int& a)
{
    while (a<=0)
    {
        cout << "Khong thoa man dieu kien, vui long nhap lai: ";
        cin >> a;
    }
}
int timChuSoLonNhat(int b)
{
    int max = 0;  
    while (b != 0)
    {
        if (b%10>=max)
        {
            max = b % 10;
        }
        b /= 10;
    }
    return max;
}
int main()
{
    int n;
    cout << "Vui long nhap so nguyen duong n: ";
    cin >> n;
    nhapSoDuong(n);
    cout << "Chu so lon nhat cua " << n << "  la: " << timChuSoLonNhat(n) << endl;
    system("pause");
    return 0;
}

