#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo()
{
    iTuSo = 0;
    iMauSo = 0;
}

PhanSo::PhanSo(int iTu, int iMau)
{
    this->iTuSo = iTu;
    this->iMauSo = iMau;
}

void PhanSo::Nhap()
{
    cout << "Nhap tu So: "; cin >> iTuSo;
    cout << "Nhap mau so: "; cin >> iMauSo;

}

void PhanSo::Xuat()
{
    cout << iTuSo << "/" << iMauSo << endl;
} 

int PhanSo::UCLN(int a, int b) {
    if (a == 0 || b == 0) return a + b; while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int PhanSo::getTu() {
    return this->iTuSo;
}

int PhanSo::getMau() {
    return this->iMauSo;
}

void PhanSo::setTu(int tu) {

    this->iTuSo = tu;
}

void PhanSo::setMau(int mau) {

    if (mau != 0)
        this->iMauSo = mau;
    else
        cout << "Phan so khong hop le!" << endl;

}

void PhanSo::Inversion() {
    int x = iMauSo;
    int y = iTuSo;
    cout << "Phan so nghich dao: " << x << "/" << y << endl;
}

void PhanSo::RutGon()
{
    int iUCLN = UCLN(iTuSo, iMauSo);
    iTuSo = iTuSo / iUCLN;
    iMauSo = iMauSo / iUCLN;
}

PhanSo PhanSo::Cong(const PhanSo& b)
{
    return PhanSo((iTuSo * b.iMauSo) + (iMauSo * b.iTuSo), iMauSo * b.iMauSo);
}

PhanSo PhanSo::Tru(const PhanSo& b)
{
    return PhanSo((iTuSo * b.iMauSo) - (iMauSo * b.iTuSo), iMauSo * b.iMauSo);
}

PhanSo PhanSo::Nhan(const PhanSo& b)
{
    return PhanSo(this->iTuSo * b.iTuSo, this->iMauSo * b.iMauSo);
}

PhanSo PhanSo::Chia(const PhanSo& b)
{
    return PhanSo(this->iTuSo * b.iMauSo, this->iMauSo * b.iTuSo);
}
