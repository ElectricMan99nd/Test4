#ifndef HODAN_H
#define HODAN_H

#include "Nguoi.h"
#include <list>

class HoDan: public Nguoi
{
    // thuoc tinh
         int soNguoi;
         int soNha;
         Nguoi ng;
         list<Nguoi> dstv; // list la mang danh sach chua cac thanh vien trong ho

        // phuong thuc
        // ham khoi tao khong doi so
public:
         HoDan();

        // ham khoi tao co doi so
         HoDan(string hoTen, string ngaySinh, string ngheNghiep, int soNguoi, int soNha);

        // ham nhap
         void nhapThongTin();
        // hien thi
         void hienThiThongTin();

};

#endif // HODAN_H
