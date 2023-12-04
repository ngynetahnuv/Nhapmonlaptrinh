#include <iostream>

using namespace std;

// ham chuc nang
void cn1() {
    int x;
    cout << "Hay nhap mot so nguyen: "; cin >> x;
    if ( x % 2 == 0 ) {
        cout << "=> So ban vua nhap la so chan" << endl;
    } else {
        cout << "=> So ban vua nhap la so le" << endl;
    }
}

void cn2() {
    float so1, so2, so3;
        cout << "Hay nhap so thuc thu nhat: "; cin >> so1;
        cout << "Hay nhap so thuc thu hai: "; cin >> so2;
        cout << "Hay nhap so thuc thu ba: "; cin >> so3;
    float soLonNhat = so1;
    if ( so2 > soLonNhat ) {
        soLonNhat = so2;
    }
    if ( so3 > soLonNhat ) {
        soLonNhat = so3;
    }
        cout << "=> So lon nhat trong ba so la so " << soLonNhat << endl;
}

void cn3() {
    float a, b;
        cout << "Hay nhap a: "; cin >> a;
        cout << "Hay nhap b: "; cin >> b;
    if ( a == 0 ) {
        if ( b == 0 ) {
            cout << "=> Phuong trinh co vo so ngiem" << endl;
        } else {
            cout << "=> Phuong trinh vo nghiem" << endl;
        }
    } else {
        cout << "=> Phuong trinh co nghiem x = " << (float)-b / a << endl; 
    }
}

void cn4() {
    float soDien;
    cout << "Nhap so kWh tieu thu: "; cin >> soDien;
    if ( soDien < 0 ) {
        cout << "! So kWh nhap khong hop le" << endl;
    } else {
        if ( soDien <= 50 ) {
            float soTien = soDien * 1.678;
            cout << "=> So dien cua ban la: " << soTien << endl;
        } else {
            if ( soDien <= 100 ) {
                float soTien = soDien * 1.734;
                cout << "=> So dien cua ban la: " << soTien << endl;
            } else {
                if ( soDien <= 200 ) {
                    float soTien = soDien * 2.014;
                    cout << "=> So dien cua ban la: " << soTien << endl;
                } else {
                    if ( soDien <= 300 ) {
                        float soTien = soDien * 2.536;
                        cout << "=> So dien cua ban la: " << soTien << endl;
                    } else {
                        if ( soDien <= 400 ) {
                            float soTien = soDien * 2.834;
                            cout << "=> So dien cua ban la: " << soTien << endl;
                        } else {
                            if ( soDien >= 401 ) {
                                float soTien = soDien * 2.927;
                                cout << "=> So dien cua ban la: " << soTien << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}

void cn5() {
        float soThuc1, soThuc2;
    char phepToan;
    cout << "Nhap so thuc a: "; cin >> soThuc1;
    cout << "Nhap so thuc b: "; cin >> soThuc2;
    cout << "Nhap phep toan can thuc hien: "; cin >> phepToan;
    switch (phepToan)
    {
    case '+':
        cout << "=> Phep toan a + b la: " << soThuc1 + soThuc2 << endl;
        break;
    case '-':
        cout << "=> Phep toan a - b la: " << (float)soThuc1 - soThuc2 << endl;
        break;
    case '*':
        cout << "=> Phep toan a * b la: " << (float)soThuc1 * soThuc2 << endl;
        break;
    case '/':
        cout << "=> Phep toan a / b la: " << (float)soThuc1 / soThuc2 << endl;
        break;
    default:
        cout << "=> Phep toan nhap khong dung!!!" << endl;
        break;
    }
}

int main() {
    int menu;
    cout << "--------------------------------------" << endl;
    cout << "Menu chuong trinh" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. Kiem tra so chan le" << endl;
    cout << "2. Tim so thuc lon nhat" << endl;
    cout << "3. Giai phuong trinh bac nhat" << endl;
    cout << "4. Tinh tien dien" << endl;
    cout << "5. Tinh toan cong tru nhan chia" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Vui long nhap lua chon: "; cin >> menu;
    switch (menu)
    {
    case 1:
        system("cls");
    cout << "--------------------------------------" << endl;
    cout << "Kiem tra so chan le" << endl;
    cout << "--------------------------------------" << endl;
        cn1();
        break;
    case 2:
        system("cls");
    cout << "--------------------------------------" << endl;
    cout << "Tim so thuc lon nhat" << endl;
    cout << "--------------------------------------" << endl;
        cn2();
        break;
    case 3:
        system("cls");
    cout << "--------------------------------------" << endl;
    cout << "Giai phuong trinh bac nhat" << endl;
    cout << "--------------------------------------" << endl;
        cn3();
        break;
    case 4:
        system("cls");
    cout << "--------------------------------------" << endl;
    cout << "Tinh tien dien" << endl;
    cout << "--------------------------------------" << endl;
        cn4();
        break;
    case 5:
        system("cls");
    cout << "--------------------------------------" << endl;
    cout << "Tinh cong tru nhan chia" << endl;
    cout << "--------------------------------------" << endl;
        cn5();
        break;
    default:
        cout << "Lua chon cua ban khong hop le!!!" << endl;
        break;
    } 
    return 0;
}