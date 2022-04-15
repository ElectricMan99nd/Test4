#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
#include <string.h>
using namespace std;

class Nguoi
{
protected:
    // thuoc tinh
         string hoTen;
         string ngaySinh;
         string ngheNghiep;
        // phuong thuc
public:
        // ham khoi tao khong doi so
         Nguoi();
        // ham khoi tao co doi so
         Nguoi(string hoTen, string ngaySinh, string ngheNghiep);
        // nhap cac thong tin tung nguoi trong ho gia dinh
         void nhapThongTin();
        // hien thi ra tung nguoi
         void hienThiThongTin();
        // ham lay thong tin ve ngay sinh
         string getNgaySinh();
};

#endif // NGUOI_H
