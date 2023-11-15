#include <iostream>

using namespace std;

int main () {
    float diem;
    string hovaTen;
    cout << "Nhap ho va ten : "; getline( cin , hovaTen );
    cout << "Nhap diem : "; cin >> diem;
    cout << "-------- Thong tin sinh vien --------" << endl;
    cout << "Ten cua sinh vien : " <<  hovaTen << endl;
    cout << "Diem cua sinh vien : " << diem << endl;
    
    if ( diem >= 9.0 ) {
        cout << "Hoc luc : xuat sac" << endl;
    } else {
        if ( diem >= 8.0 ) { 
            cout << "Hoc luc : gioi" << endl;
        } else {
            if ( diem >= 6.5 ) {
                cout << "Hoc luc : kha" << endl;
            } else {
                if ( diem >= 5.0 ) {
                    cout << "Hoc luc : trung binh" << endl;
                } else {
                    cout << "Hoc luc : yeu" << endl;
                }
            }
        }
    }
    return 0;
}