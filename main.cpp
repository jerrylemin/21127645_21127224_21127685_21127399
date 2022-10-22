#include "PhanSo.h"
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    PhanSo ps1, ps2;
    cout << "Phan so 1: " << endl;
    ps1.Nhap();
    cout << "Phan so vua nhap : ";
    ps1.Xuat();
    ps1.RutGon();
    cout << "Phan so rut gon:";
    ps1.Xuat();
    ps1.Inversion();

    cout << "Phan so 2: " << endl;
    ps2.Nhap();
    cout << "Phan so vua nhap:";
    ps2.Xuat();
    ps2.RutGon();
    cout << "Phan so rut gon:";
    ps2.Xuat();
    ps2.Inversion();

    PhanSo psTong = ps1.Cong(ps2);
    cout << "Cong hai phan so: ";
    psTong.RutGon();
    psTong.Xuat();

    PhanSo psHieu = ps1.Tru(ps2);
    cout << "Tru hai phan so: ";
    psHieu.RutGon();
    psHieu.Xuat();

    PhanSo psTich = ps1.Nhan(ps2);
    cout << "Nhan hai phan so: ";
    psTich.RutGon();
    psTich.Xuat();

    PhanSo psThuong = ps1.Chia(ps2);
    cout << "Chia hai phan so: ";
    psThuong.RutGon();
    psThuong.Xuat();

    return 0;
}