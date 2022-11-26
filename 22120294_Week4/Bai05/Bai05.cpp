
#include <iostream>
using namespace std;

int demSoAm(double& a)
{
    int soLan = 0;
    while (a != 0)
    {
        if (a<0)
        {
            soLan++;
        }
        cout << "Nhap vao so thuc n: ";
        cin >> a;
    }
    return soLan;
}
int main()
{
    double n;
    cout << "Nhap vao so thuc n: ";
    cin >> n;
    cout << "So lan nhap so am la :" << demSoAm(n) << endl;
    system("pause");
    return 0;
}

