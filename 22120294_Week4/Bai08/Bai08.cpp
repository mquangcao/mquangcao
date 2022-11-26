
#include <iostream>
using namespace std;

void hoanviSoNguyen(int a, int b)
{
    int tempt;
    tempt = a;
    a = b;
    b = tempt;
    cout << "Gia tri moi cua 2 so lan luot la : " << a << " va " << b << endl;
}
int main()
{
    
    int a, b;
    cout << "Nhap vao so thu nhat : ";
    cin >> a;
    cout << "Nhap vao so thu hai : ";
    cin >> b;
    hoanviSoNguyen(a, b);
    system("pause");
    return 0;
}


