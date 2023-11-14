#include <iostream>
using namespace std;
int main () {
    int luachon;
    while ( true ) {
    cout << "-----Menu chuong trinh-----" << endl;
    cout << "1. Tinh trung binh tong" << endl;
    cout << "2. Tim so nguyen to" << endl;
    cout << "3. Tim so chinh phuong" << endl;
    cout << "4. Thoat" << endl;
    cout << "Vui long luu chon chuong trinh : ";
    cin >> luachon;
    switch (luachon)
    {
    case 1:
    {
    	cout << "-----Tinh trung binh cong-----" << endl;
        int min , max;
        cout << "Nhap gia tri min = ";
        cin >> min;
        cout << "Nhap gia tri max = ";
        cin >> max;
        int tong = 0;
        int i = min;
        while ( i <= max ) { // vong lap duyet cac so tu min den max
            if ( i % 2 == 0 ){ // kiem tra so chia het cho 2
                tong += i; // cong so vao tong 
            }
                i++; // tang gia tri
        }
        float trungbinh2 = tong / ( max - min + 1 ); // tinh trung binh
        cout << "Trung binh tong cac so tu nhien chia het cho 2 tu " << min << " den " << max << " la " << trungbinh2 << endl;
            }
        break;
    case 2:
    {
        cout << "-----Tim so nguyen to-----" << endl;
        int x , i; // khai bao bien
    int count = 0;
    cout << "Nhap x = "; cin >> x; // nhap gia tri
    for ( int i = 2; i < x ; i++ ){ // vong lap kiem tra phai la so nguyen to khong?
        if ( x % i == 0 ) count++; 
    }
    if ( count > 0 ) {
        cout << "So " << x << " khong phai la so nguyen to" << endl;
    } else {
        cout << "So " << x << " la so nguyen to" << endl;
    }
    }
        break;
    case 3:
    {
        cout << "-----Tim so chinh phuong-----" << endl;
        int x; // bien nhap du lieu
    cout << "Nhap x = "; cin >> x;
    int count = 0; // bien dem
    for ( int i = 1; i < x; i++ ){ // duyet tu 1 den x - 1 
        if ( i * i == x ){  // neu x la binh phuong cua mot so nguyen thi x la so chinh phuong
            count++;
            break;
        }
    }
    if ( count == 1 ){
        cout << x << " la so chinh phuong!" << endl;
    } else {
        cout << x << " khong phai la so chinh phuong!" << endl;
    }
    }
        break;
    
    
    default:
        cout << "Du lieu khong ton tai!!" << endl;
        break;
    }
    }
    system("pause");
    return 0;
}
