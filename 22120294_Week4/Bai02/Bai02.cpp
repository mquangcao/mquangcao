#include <iostream>
using namespace std;

void nhapSoDuong(int a) {

    while (a < 10 || a>10000000)
    {
        cout << "Khong thoa man dieu kien, vui long nhap lai: ";
        cin >> a;
    }
}
bool ktSoDoiXung(int b)
{
    int b1 = 0;
    bool kt = false;
    int b2;
    b2 = b;
    while (b != 0)
    {
        b1 = b1 * 10 + b % 10;
        b /= 10;
    }
    if (b1 == b2)
    {
        kt = true;
        return kt;
    }
    else
    {
        return kt;
    }
}


int main()
{
    int n;
    cout << "Vui long nhap so nguyen duong n: ";
    cin >> n;
    nhapSoDuong(n);
    bool a = ktSoDoiXung(n);
    if (a == true)
    {
        cout << "La so doi xung." << endl;
    }
    else
    {
        cout << "Khong la so doi xung." << endl;
    }
    system("pause");
    return 0;
}
