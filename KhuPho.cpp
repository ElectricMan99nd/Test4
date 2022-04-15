#include "KhuPho.h"

KhuPho::KhuPho()
{

}

void KhuPho::themHoDan(HoDan hoDan) {
   dshd.push_back(hoDan);
}

// ham nhap vao danh sach ho dan
void KhuPho::nhapDanhSach() {
   HoDan hoDan;
   int soHoDan;

   cout << "Nhap vao so ho dan: "; cin >> soHoDan;
   fflush(stdin);


   cout << "Nhap vao thong tin cho tung ho dan: " << endl;
   for (int i = 0; i < soHoDan; i++) {
      cout << "Ho dan thu " << (i +1)  << ":" << endl;

       hoDan.nhapThongTin();
       themHoDan(hoDan);
   }
}

// ham hien thi danh sach
void KhuPho::hienThiDanhSach() {

    cout << "-----------HIEN THI DANH SACH CAC HO DAN-------------" << endl;
    for (HoDan hoDan : dshd) {
        int i = 0;
        i++;
        cout << "Ho dan thu " << i  << " la: " << endl;
        hoDan.hienThiThongTin();
    }
}
