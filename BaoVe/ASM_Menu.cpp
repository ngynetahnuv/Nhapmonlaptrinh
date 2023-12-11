#include <iostream> 
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

// Khai bao cac ham
void cn1() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn2() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn3() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn4() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn5() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn6() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn7() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn8() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn9() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
    tiepTuc = kiemTra();
    } while ( tiepTuc == true );
}

void cn10() {
    bool tiepTuc = true;
    do
    {
        cout << "Chuong trinh dang xay dung" << endl;
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
    case 7:
        cn7();
        break;
    case 8:
        cn8();
        break;
    case 9:
        cn9();
        break;
    case 10:
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