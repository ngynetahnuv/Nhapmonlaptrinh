#include <iostream>
#include <unistd.h>
using namespace std;

void cn1(){
    int n;
    cout << "Nhap mot so nguyen duong n: "; cin >> n;
    int tong = 0;
    float tbc;
    // vong lap 
    for ( int i = 1; i <= n; i++ ){
        tong += i;
        tbc = (float)tong / n;
    }
    cout << "Trung binh cong tu 1 den " << n << " la " << tbc << endl;
}

void cn2() {
    int n;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    int tong = 0;
    // vong lap
    for ( int i = 1; i <= n; i++ ){
        tong += i * i * i;
    }
    cout << "Ket qua la = " << tong << endl;
}

void cn3() { // phải nghiên cứu thêm một chút
    int n;
    cout << "Nhap mot so nguyen duong n: "; cin >> n;
    int tong = 0;
    // vong lap
    cout << "Cac uoc la: ";
    for ( int i = 1; i <= n; i++ ){
        if ( n % i == 0 ) {
            cout << i << " ";
            tong += i;
        }
    }
    cout << "\nTong cua cac uoc la: " << tong << endl;
}

void cn4() {
    int so;
    cout << "Hay nhap so giay : "; cin >> so;
    // vong lap
    for ( int i = so; i >= 0; i-- ){
        system("cls");
        cout << "Thoi gian dem nguoc: " << i << endl;
        sleep(1);
    }   
    cout << "Chuc mung nam moi 2024" << endl; 
}

void cn5() {
    float giaNha, mucLuong;
    float tienTietKiem = 0;
    int soNam = 0;
    cout << "Nhap gia nha du kien: "; cin >> giaNha;
    cout << "Nhap muc luong cua ban: "; cin >> mucLuong;
    // vong lap
    while (tienTietKiem < giaNha)
    {
        tienTietKiem += mucLuong;
        soNam++;
    }
    cout << "Ban can lam viec " << soNam << " nam de du tien mua nha" << endl;
}

int main () {
    int menu;
    do {
    cout << "Menu chuong trinh" << endl;
    cout << "1. Trung binh cong " << endl;
    cout << "2. Tinh so mu " << endl;
    cout << "3. Xuat uoc va tinh tong uoc " << endl;
    cout << "4. Chuong trinh countdown " << endl;
    cout << "5. Tinh tien mua nha " << endl;
    cout << "6. Thoat " << endl;
    cout << "Vui long lua chon chuong trinh: "; cin >> menu;
    
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
    case 3:
        system("cls");
        cn3();
        break;
    case 4:
        system("cls");
        cn4();
        break;
    case 5:
        system("cls");
        cn5();
        break;
    default:
        break;
    }
        } while( menu != 6 );
    return 0;  
}