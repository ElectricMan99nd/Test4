#include "Nguoi.h"

Nguoi::Nguoi()
{

}

// ham khoi tao co doi so
Nguoi::Nguoi(string hoTen, string ngaySinh, string ngheNghiep) {
   this->hoTen = hoTen;
   this->ngaySinh = ngaySinh;
   this->ngheNghiep = ngheNghiep;
}

// nhap cac thong tin tung nguoi trong ho gia dinh
void Nguoi::nhapThongTin() {
    cout << "\tNhap ho ten: "; getline(cin, hoTen);
     cout << "\tNhap ngay sinh: "; getline(cin, ngaySinh);
      cout << "\tNhap nghe nghiep: "; getline(cin, ngheNghiep);
}

// hien thi ra tung nguoi
void Nguoi::hienThiThongTin() {
    cout <<"\tHo ten: " << hoTen << endl;
    cout <<"\tNgay sinh: " << ngaySinh << endl;
    cout <<"\tNghe nghiep: " << ngheNghiep << endl;
}


// ham lay thong tin ve ngay sinh
string Nguoi::getNgaySinh() {
   return ngaySinh;
}
