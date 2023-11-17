#include <iostream>

using namespace std;

int main () {
    int chonChuongTrinh;
    do{
    cout << "--------------------------------------" << endl;
    cout << "MENU CHUONG TRINH" << endl;
    cout << "1. Tinh dien tich hinh thang" << endl;
    cout << "2. Tinh so tien lam viec" << endl;
    cout << "3. Tinh diem trung binh cua hoc sinh" << endl;
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
        system("pause");
        break;
    case 2:
        {
        cout << "--------------------------------------\n";
        cout << "Tinh so tien lam viec\n";
        cout << "--------------------------------------\n";
        float thoiGian;
        float mucLuong = 8.5;
        cout << "Nhap thoi gian lam viec cua ban: "; cin >> thoiGian;
        cout << "Muc luong hien tai cua ban la: " << mucLuong << endl;
        float luong = thoiGian * mucLuong; // bien tinh luong
        cout << "Hom nay ban da lam duoc " << thoiGian << " gio va so luong ban nhan duoc la " << luong << " $ "<< endl;
        }
        system("pause");
        break;
    case 3:
        {
        cout << "--------------------------------------\n";
        cout << "Tinh diem trung binh cua hoc sinh\n";
        cout << "--------------------------------------\n";
        char khoiThi;
        string hoVaTen;
        float toan , van;
        cout << "Nhap khoi thi cua ban : "; cin >> khoiThi;
        cout << "Nhap ho va ten cua ban : "; cin.ignore();
        getline( cin , hoVaTen );
        cout << "Nhap diem toan : "; cin >> toan;
        cout << "Nhap diem van : "; cin >> van;
        int diemTrungBinh = ( toan + van ) / 2; // bien tinh diem trung binh
        cout << "--------- Thong Bao Ket Qua ----------" << endl;
        cout << "Thi sinh: " << hoVaTen << endl;
        cout << "Khoi thi: " << khoiThi << endl;
        cout << "Diem trung binh cac mon: " << diemTrungBinh << endl;
        // kiem tra dieu kien tinh diem trung binh
        if ( diemTrungBinh >= 5 ) {
            cout << "Ket qua: Dau" << endl;
        } else {
            cout << "Ket qua: Rot" << endl;
        }
        }
        system("pause");
        break;
    case 4:
        {
        cout << "--------------------------------------\n";
        cout << "Tinh so chia va so bi chia\n";
        cout << "--------------------------------------\n";
        int a , b;
        cout << "Nhap so bi chia: "; cin >> a;
        cout << "Nhap so chia: "; cin >> b;
        cout << "--------------------------------------" << endl;
        int chiaLayDu = a % b; // bien a chia b lay du
        cout << a << " chia " << b << " = " << a / b << " du " << chiaLayDu << endl;
        }
        system("pause");
        break;
    case 5:
        {
        cout << "--------------------------------------\n";
        cout << "Chuyen so phut nhap thanh gio phut giay\n";
        cout << "--------------------------------------\n";
        int soGiay;
        cout << "Nhap so giay: "; cin >> soGiay;

        int gio = soGiay / 3600; // so gio trong so giay
        int phut = ( soGiay % 3600 ) / 60; // chia so gio trong so giay va lay phan du tinh phut
        int giay = soGiay % 60; // so giay con lai sau khi tinh phut
        
        cout << "--------------------------------------" << endl;
        cout << soGiay << "s doi thanh " << gio << "h " << phut << "p " << giay << "s" << endl;
        }
        system("pause");
        break;
    default:
        cout << "Thoat chuong trinh" << endl;
        break;
    }
    } while ( chonChuongTrinh != 6 );
    return 0;
}