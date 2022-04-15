#include "HoDan.h"

HoDan::HoDan()
{

}

// ham khoi tao co doi so
HoDan::HoDan(string hoTen, string ngaySinh, string ngheNghiep, int soNguoi, int soNha) {
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->ngheNghiep = ngheNghiep;
    this->soNguoi = soNguoi;
    this->soNha = soNha;
}

// ham nhap
 void HoDan::nhapThongTin() {
   cout << "\tNhap so nguoi: "; cin >> soNguoi;
   cout << "\tNhap so nha: "; cin >> soNha;
   fflush(stdin);
   cout << "Nhap thong tin cho tung nguoi trong ho: " << endl;

    for (int i = 0; i < soNguoi; i++) {
        cout << "Nguoi thu " << (i +1) << " la: " << endl;
        ng.nhapThongTin();
        dstv.push_back(ng);
    }
}

// hien thi
 void HoDan::hienThiThongTin() {
     cout << "\tSo nguoi: " << soNguoi << endl;
     cout << "\tSo nha: " << soNha << endl;
     cout << "\tThong tin cua tung nguoi trong gia dinh: " << endl;
    for (Nguoi ng : dstv) {
        int i = 0;
        i++;
        cout << "Nguoi thu " << i  << " la: " << endl;
        ng.hienThiThongTin();
    }
}

// ham lay ra thanh vien trong ho dan
//         Nguoi[] getList() {
//            return list;
//        }

//         ham lay ra so thanh vien trong ho gia dinh
//         int getSoNguoi() {
//            return soNguoi;
//        }
