#include <iostream>

using namespace std;

int main () {
    int chonChuongTrinh;
    do{
    cout << "--------------------------------------" << endl;
    cout << "MENU CHUONG TRINH" << endl;
    cout << "1. Tinh dien tich hinh thang" << endl;
    cout << "2. Tinh so tien lam viec" << endl;
    cout << "3. Tinh diem trung binh" << endl;
    cout << "4. Tinh so chia va so bi chia" << endl;
    cout << "5. Chuyen so phut nhap thanh gio phut giay" << endl;
    cout << "6. Thoat chuong trinh" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Moi lua chon chuong trinh ( chon tu 1 den 5 ): "; cin >> chonChuongTrinh;

    switch (chonChuongTrinh)
    {
    case 1:
    {
        cout << "--------------------------------------\n";
        cout << "Tinh dien tich hinh thang\n";
        cout << "--------------------------------------\n";
        float a , b , h; // bien luu du lieu cua canh va chieu cao
        cout << "Nhap canh day a: "; cin >> a;
        cout << "Nhap canh day b: "; cin >> b;
        cout << "Nhap chieu cao h: "; cin >> h;
        float dienTich = ( a + b ) * h / 2; // bien tinh dien tich hinh thang
        cout << "--------------------------------------\n";
        cout << "Dien tich hinh thang la = " << dienTich << endl;
    }
        break;
    case 2:
        cout << "2" << endl;
        break;
    case 3:
        cout << "3" << endl;
        break;
    case 4:
        cout << "4" << endl;
        break;
    case 5:
        cout << "5" << endl;
        break;
    default:
        cout << "Thoat chuong trinh" << endl;
        break;
    }

    } while ( chonChuongTrinh != 6 );
    

    return 0;
}