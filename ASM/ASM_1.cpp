#include <iostream>
#include <unistd.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//prototype
bool kiemTra();
void cn1();
void cn2();
void cn3();
void cn4();
void cn5();
void cn6();
void cn7();
void cn8();
void cn9();
void cn10();
void inMenu();

// ham kiem tra nguoi dung 
bool kiemTra() {
    char chon;
    cout << "Ban co muon tiep tuc khong (y/n): "; cin >> chon;
    // dieu kien
    if ( chon == 'y' || chon == 'Y') {
        return true;
    } else {
        return false;
    }
}

// khai bao ham

void cn1() {
    bool tiepTuc = true;
    do
    {
        int soNguyen;
        cout << "Nhap mot so nguyen duong: "; cin >> soNguyen;
        // kiem tra so chan le
        if ( soNguyen % 2 == 0 ) {
            cout << "So " << soNguyen << " la so chan" << endl;
        } else {
            cout << "So " << soNguyen << " la so le" << endl;
        }
        // kiem tra so nguyen to
        int dem = 0;
        for ( int i = 2; i <= sqrt(soNguyen); i++ ) {
            if( soNguyen % i == 0 ) {
                dem++;
            }
        }
        if ( dem == 0 ) {
            cout << "So " << soNguyen << " la so nguyen to " << endl;
        } else {
            cout << "So " << soNguyen << " khong phai la so nguyen to" << endl;
        }
        // kiem tra so chinh phuong
        for ( int i = 0; i <= soNguyen; i++ ){
            if ( i * i == soNguyen ) {
                cout << "So" << soNguyen << " la so chinh phuong" << endl;
            } else {
                cout << "So " << soNguyen << " khong phai la so chinh phuong" << endl;
            }
            return;
        }
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn2() {
    bool tiepTuc = true;
    do
    {
    float soKm;
    cout << "Nhap so km da chay: "; cin >> soKm;
    float tien = 0;
    // kiem tra dieu kien
    if ( soKm <= 2 ){
        tien = soKm * 10;
    } 
    else if ( soKm <= 9 ){
        tien = 2 * 10 + ( soKm - 2 ) * 15;
    }
    else if ( soKm <= 19 ){
        tien = 2 * 10 + 7 * 15 + ( soKm - 9 ) * 20;
    }
    else {
        tien = 2 * 10 + 7 * 15 + 10 * 20  + ( soKm - 19 ) * 25;
    }
    cout << "So tien can thanh toan la: $" << tien << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn3() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang trong qua trinh xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn4() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang trong qua trinh xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn5() {
    bool tiepTuc = true;
    do
    {
        string hoTen;
        string soDienThoai;
        int soLuongAo;
        float tienGiamGia;
        float giaBanLe = 12;
        cout << "Nhap ho va ten: ";
        cin.ignore();
        getline(cin,hoTen);
        cout << "Nhap so dien thoai: "; 
        cin.ignore();
        getline(cin,soDienThoai);
        cout << "Nhap so luong ao: ";
        cin >> soLuongAo;
        float soTienTamTinh = soLuongAo * giaBanLe;
        // kiem tra dieu kien
        if ( soLuongAo >= 5 && soLuongAo <= 10 ) {
            tienGiamGia = soTienTamTinh * 0.01;
        } else if ( soLuongAo >= 11 && soLuongAo <= 20 ) {
            tienGiamGia = soTienTamTinh * 0.15;
        } else if ( soLuongAo >= 21 && soLuongAo <= 30 ) {
            tienGiamGia = soTienTamTinh * 0.2;
        } else {
            tienGiamGia = soTienTamTinh * 0.25;
        }
        float soTienTong = soTienTamTinh - tienGiamGia;
        string aoThun = "Ao thun";
        // xuat ket qua
        cout << "\tHOA DON BAN LE" << endl;
        cout << "Khach hang: " << hoTen << endl;
        cout << "So dien thoai: " << soDienThoai << endl;
        cout << endl;
        cout << "Ten hang: " << aoThun << endl;
        cout << "So luong: " << soLuongAo << endl;
        cout << "Gia ban le: $" << giaBanLe << endl;
        cout << "Gia tam tinh: $" << soTienTamTinh << endl;
        cout << "Giam gia: $" << tienGiamGia << endl;
        cout << "Tong cong: $" << soTienTong << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn6() {
    bool tiepTuc = true;
    do
    {
        // mini game go bom
        int so;
        string moTa = "Hay nhap mot so bat ky tu 1 den 5 de go bom, neu nhap dung thi se tat con khong thi se no";
        cout << "MINI game GO BOOM" << endl;
        cout << "Mo ta: " << moTa << endl;
        cout << "Hay nhap mot so ( 1 den 5 ): "; cin >> so;
        // tao random so
        srand(time(NULL));
        int ngauNhien = rand() % ( 5 - 1 + 1 ) - 1;
        if ( so == ngauNhien ) {
            cout << "Chuc mung ban da go thanh cong boom!!!" << endl;
        } else {
            int n = 10;
            while ( n >= 0 )
            {
                system("cls");
                cout << "Thoi gian con lai la: " << n << endl;
                sleep(1);
                n--;
            }
            cout << "BOOOM da no !!!" << endl;
        }
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn7() {
    bool tiepTuc = true;
    do
    {
        // code
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void inMenu () {
    cout << "Menu chuc nang" << endl;
    cout << "1. Kiem tra tinh chat cua mot so nguyen" << endl;
    cout << "2. Tinh tien taxi" << endl;
    cout << "3. Tinh lai suat vay ngan hang (chua hoan thien)"<< endl;
    cout << "4. Chuong trinh kiem tra so chia het cho 4 (chua hoan thien)" << endl;
    cout << "5. Tinh hoa do ban quan ao" << endl;
    cout << "6. Mini game" << endl;
    cout << "7. Chuc nang chia tien cua zalo" << endl;
    cout << "8. Chuong trinh Other cua quan cafe" << endl;
    cout << "9. Ket qua xo so" << endl;
    cout << "10. Quan ly khach hang" << endl;
    cout << "11. Thoat" << endl;
}
int main () {
    int menu;
    do {
    inMenu();
    cout << "Chon chuong trinh(1-10): "; cin >> menu;
    switch (menu)
    {
    case 1:
        cn1();
        break;
    case 2:
        cn2();
        break;
    case 3:
        cn3();
        break;
    case 4:
        cn4();
        break;
    case 5:
        cn5();
        break;
    case 6:
        cn6();
        break;
    case 11:
        break;
    
    default:
        break;
    }
    } while ( menu != 11 );
    return 0; 
}