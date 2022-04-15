#ifndef KHUPHO_H
#define KHUPHO_H

#include "HoDan.h"

class KhuPho
{
    // thuoc tinh
         list<HoDan> dshd;

        // phuong thuc
        // ham khoi tao
public:
         KhuPho();

        // ham them 1 ho dan
         void themHoDan(HoDan hoDan);

        // ham nhap vao danh sach ho dan
         void nhapDanhSach();

        // ham hien thi danh sach
         void hienThiDanhSach();

//            int n = dshd.size();

//            for (int i = 0; i < n; i++) {
//               cout << "Ho dan thu " << (i +1)  << "la: ";
//                dshd.get(i).hienThiThongTin();
//            }
};

#endif // KHUPHO_H
