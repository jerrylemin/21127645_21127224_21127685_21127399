#pragma once

#ifndef PHAN_SO
#define PHAN_SO

class PhanSo
{
private:
    int iTuSo;
    int iMauSo;

private:
    int UCLN(int a, int b);

public:
    PhanSo();
    PhanSo(int iTu, int iMau);
    void Nhap();
    void Xuat();
    int getTu();
    int getMau();
    void setTu(int tu);
    void setMau(int mau);
    void Inversion();
    void RutGon();
    PhanSo Cong(const PhanSo&);
    PhanSo Tru(const PhanSo&);
    PhanSo Nhan(const PhanSo&);
    PhanSo Chia(const PhanSo&);
};

#endif