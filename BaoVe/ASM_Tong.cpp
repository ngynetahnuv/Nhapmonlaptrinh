#include <iostream>
#include <unistd.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
/*
    bài xây dụng được 7 chức năng
    tất cả chức năng xây dựng bới Nguyen Thanh Vu - PK03665
*/
//prototype
bool kiemTra();
void timKiemKhachHangCn10( int maCanTimCn10 );
void xuatThongTinCn10();
void cn1(); // xog
void cn2(); // xog
void cn5(); // xog: sửa thêm một chút phần xuất kết quả
void cn6(); // xog
void cn7(); // xog
void cn8(); // xog
void cn10(); // xog
void inMenu();

//khai bao hang chuc nang 10

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



// khai bao bien chuc nang 8
int monAnCn8[6] = {1,2,3,4,5,6};
string tenMonAnCn8[6] = {"Cafe chon","Cafe Brazil","Nuoc Pepsi","Nuoc Cam","Nuoc Coca","Nuoc Loc"};
int giaMonAnCn8[6] = {2000,5000,500,300,500,50};
int donHangCn8[6] = {0};
// chuc nang 8


// chuc nang 10 
// khai bao hang
const int soLuongKhachToiDaCn10 = 10000; 
// khai bao bien du lieu
int maKHCn10[soLuongKhachToiDaCn10];
string tenKHCn10[soLuongKhachToiDaCn10];
string soDTCn10[soLuongKhachToiDaCn10];
int soDonHangCn10[soLuongKhachToiDaCn10];
// bien dem so luong khach hang
int tongLuongKhacHangCn10 = 0;

// tim kiem khach hang
void timKiemKhachHangCn10( int maCanTimCn10 ){
    // vong lap kiem tra
    for ( int i = 0; i < tongLuongKhacHangCn10; i++ ){
        if ( maCanTimCn10 == maKHCn10[i] ){
            cout << "\tThong tin khach hang" << endl;
            cout << "Ma khach hang :" << maKHCn10[i] << endl;
            cout << "Ten khach hang :" << tenKHCn10[i] << endl;
            cout << "So dien thoai :" << soDTCn10[i] << endl;
            cout << "So luong don hang da mua :" << soDonHangCn10[i] << endl;
            return;
        }
    }
    cout << "Khong co du lieu ma ban can tim" << endl;
}

// xuat thong tin khach hang
void xuatThongTinCn10(){
    for( int i = 0; i < tongLuongKhacHangCn10; i++ ){
        cout << "\tThong tin khach hang" << endl;
        cout << "Ma khach hang :" << maKHCn10[i] << endl;
        cout << "Ten khach hang :" << tenKHCn10[i] << endl;
        cout << "So dien thoai :" << soDTCn10[i] << endl;
        cout << "So luong don hang da mua :" << soDonHangCn10[i] << endl;
}
}
// chuc nang 10



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
    // nac 1
    if ( soKm <= 2 ){
        tien = soKm * 10;
    } 
    // nac 2
    else if ( soKm <= 9 ){
        tien = 2 * 10 + ( soKm - 2 ) * 15;
    }
    // nac 3
    else if ( soKm <= 19 ){
        tien = 2 * 10 + 7 * 15 + ( soKm - 9 ) * 20;
    }
    // nac 4
    else {
        tien = 2 * 10 + 7 * 15 + 10 * 20  + ( soKm - 19 ) * 25;
    }
    cout << "So tien can thanh toan la: $" << tien << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn5() {
    bool tiepTuc = true;
    do
    {
        // khai bao kieu du lieu
        string hoTen;
        string soDienThoai;
        int soLuongAo;
        float tienGiamGia;
        float giaBanLe = 12;
        // nhan du lieu tu nguoi dung
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
        } 
        else if ( soLuongAo >= 11 && soLuongAo <= 20 ) {
            tienGiamGia = soTienTamTinh * 0.15;
        } 
        else if ( soLuongAo >= 21 && soLuongAo <= 30 ) {
            tienGiamGia = soTienTamTinh * 0.2;
        } 
        else {
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
    // khai bao kieu du lieu
    int soLuongThanhVien;
    float tongSotien;
    // nhap du lieu
    cout << "Nhap so luong thanh vien: "; cin >> soLuongThanhVien;
    cout << "Nhap so tien: $"; cin >> tongSotien;

    // tao mang de dung vong lap luu ten va phan tram can chia
    string tenThanhVien[soLuongThanhVien];
    float phanTram[soLuongThanhVien];

    for ( int i = 0; i < soLuongThanhVien; i++ ){
        cout << "Nhap ten thanh vien thu " << i + 1 << " : ";
        cin.ignore();
        getline(cin,tenThanhVien[i]);
    }

    // xuat menu de chon chia deu hay chia phan tram
    int chon;
    cout << "Chon cach chia tien" << endl;
    cout << "1. Chia deu" << endl;
    cout << "2. Chia theo phan tram" << endl;
    cout << "Vui long nhap lua chon: "; cin >> chon;
    // chia deu
    if ( chon == 1 )
    {
        cout << "\thia deu" << endl;
        for ( int i = 0; i < soLuongThanhVien; i++ ){
            cout << "Thanh vien " << tenThanhVien[i] << " can tra : $" << tongSotien / soLuongThanhVien << endl;
        }
    }
    // chia theo phan tram
    else if ( chon == 2 )
    {
        cout << "\tChia theo phan tram" << endl;
        // vong lap de nhap phan tram cho tung thanh vien
        float tongPhanTram = 0;
        for ( int i = 0; i < soLuongThanhVien; i++ ){
            cout << "Nhap phan tram cho thanh vien " << i + 1 << " : ";
            cin >> phanTram[i];
            tongPhanTram += phanTram[i];
        }
        // kiem tra xem tong phan tram nhap vao co bang 100% khong
        if ( tongPhanTram != 100 ){
            cout << "Tong phan tram ban nhap vao khong du 100 %" << endl;
        }
        // vong lap chia so tien 
        for ( int i = 0; i < soLuongThanhVien; i++ ){
            cout << "So tien ma " << tenThanhVien[i] << " can tra la: $" << ( phanTram[i] / 100 ) * tongSotien << endl;
        }
    }
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn8() {
    bool tiepTuc = true;
    do
    {
    // xuat menu mon an
    cout << "\tMenu Mon An" << endl;
    cout << setw(5) << "STT" << setw(20) << "Ten Mon" << setw(15) << "Gia tien" << endl;
    for ( int i = 0; i < 5; i++ ){
        cout << setw(5) << monAnCn8[i] << setw(20) << tenMonAnCn8[i] << setw(10) << "$" << giaMonAnCn8[i] << endl;
    }
    int chonCn8;
    while ( chonCn8 != 0 )
    {
    cout << "Vui long nhap mon an (nhap 0 de thanh toan) :"; cin >> chonCn8;
    if ( chonCn8 > 0 && chonCn8 <= 6 ) {
        donHangCn8[ chonCn8 - 1 ]++;
        cout << "Da them " << tenMonAnCn8[ chonCn8 - 1 ] << " vao don hang" << endl;
    }
    else if ( chonCn8 != 0 ){
        cout << "Don hang khong hop le" << endl;
    }
    }
    float tongTien = 0;
    cout << "\tHoa don ban hang" << endl;

    for ( int i = 0; i < 6; i++ ){
        if ( donHangCn8[i] > 0 ){
            tongTien += donHangCn8[i] * giaMonAnCn8[i];
        }
    }
    float thue = tongTien * 0.07;
    cout << "Tong cong (chua bao gom thue): $" << tongTien << endl;
    cout << "Thue 7%: $" << thue << endl;
    cout << "Tong cong (bao gom thue): $" << tongTien + thue << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn10() {
    bool tiepTuc = true;
    do
    {
    int chonCn10;
    do
    {
    cout << "\tQuan ly khach hang" << endl;
    cout << "1. Nhap va luu tru thong tin khach hang" << endl;
    cout << "2. Tim kiem thong tin khach hang" << endl;
    cout << "3. Xuat danh sach khach hang" << endl;
    cout << "Xin vui long chon chuc nang :"; cin >> chonCn10;
    // kiem tra chuc nang
    if ( chonCn10 == 1 ){
        if ( tongLuongKhacHangCn10 < soLuongKhachToiDaCn10 ){
            // nhap ma khach hang
            cout << "Nhap ma khach hang: ";
            cin >> maKHCn10[tongLuongKhacHangCn10];
            cin.ignore();
            // nhap ten khach hang
            cout << "Nhap ten khach hang :";
            getline(cin,tenKHCn10[tongLuongKhacHangCn10]);
            // nhap so dien thoai
            cout << "Nhap so dien thoai :";
            cin.ignore();
            getline(cin,soDTCn10[tongLuongKhacHangCn10]);
            // nhap so don hang cua khach
            cout << "Nhap so don hang :";
            cin >> soDonHangCn10[tongLuongKhacHangCn10];
            // dem so luong khach hang
            tongLuongKhacHangCn10++;
            cout << "Khach hang da duoc them" << endl;
        } 
        else {
            cout << "So luong khach hang da day, khong the them " << endl;
        }
    } 
    else if ( chonCn10 == 2 ){
        int maCanTimCn10;
        cout << "Nhap ma khach hang can tim :";
        cin >> maCanTimCn10;
        // goi ham
        timKiemKhachHangCn10(maCanTimCn10);
        
    } 
    else if ( chonCn10 == 3 ){
        xuatThongTinCn10();
    }
    } while ( chonCn10 != 4 );
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
        system("cls");
        cn1();
        break;
    case 2:
        system("cls");
        cn2();
        break;
    case 5:
        system("cls");
        cn5();
        break;
    case 6:
        system("cls");
        cn6();
        break;
    case 7:
        system("cls");
        cn7();
        break;
    case 8:
        system("cls");
        cn8();
        break;
    case 10:
        system("cls");
        cn10();
        break;
    case 11:
        break;
    
    default:
        break;
    }
    } while ( menu != 11 );
    return 0; 
}