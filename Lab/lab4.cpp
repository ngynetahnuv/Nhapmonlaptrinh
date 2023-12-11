#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// khai bao hang
const int SIZE = 4;

// khai bao mang:
    // mang ma sach
string ma[SIZE] = {"SF01", "SF02", "SF03", "SF04"};
    // mang ten sach
string ten[SIZE] = {"Chi pheo", "Cuon theo chieu gio", "Tuyen tap tho", "Nho rung"};
    // mang gia sach
int gia[SIZE] = {23000,52000,36000,27000};

// danh sach cua sach
void danhSachSach(){
    cout << "\tDanh sach cac cuon sach" << endl;
    cout << setw(5) << "Ma sach" << setw(30) << "Ten sach" << setw(15) << "Gia nhap" << endl;
    // vong lap
    for ( int i = 0; i < SIZE; i++ ){
    cout << setw(7) << ma[i] << setw(30) << ten[i] << setw(15) << gia[i] << endl;   
    }
}

//tim thong tin sach
void timThongTinSach( string timMaSach){
    for ( int i = 0; i < SIZE; i++ ){
        if ( timMaSach == ma[i] ){
            cout << "\tThong tin sach" << endl;
            cout << "Ma Sach: " << ma[i] << endl;
            cout << "Ten Sach: " << ten[i] << endl;
            cout << "Gia : $" << gia[i] << endl;
            return;
        }
    }
    cout << "Khong co thong tin cua sach" << endl;
}

// sua thong tin sach
void suaGia(string timMaSach, int giaMoi){
    for ( int i = 0; i < SIZE; i++ ){
        if ( ma[i] == timMaSach ){
            gia[i] = giaMoi;
            cout << "=> Sua thanh cong gia cua cuon sach " << ma[i] << " thanh " << gia[i] << endl;
            return;
        }
    }
    cout << "Khong co thong tin cua sach" << endl; 
}

int main () {
    int chon;
    do
    {
    cout << "\tTiem sach VIP" << endl;
    cout << "1. Xem danh sach cac cuon sach" << endl;
    cout << "2. Tim thong tin sach" << endl;
    cout << "3. Sua gia sach" << endl;
    cout << "4. Thoat" << endl;
    cout << "Hay nhap lua chon: "; cin >> chon;
    switch (chon)
    {
    case 1:
        danhSachSach();
        break;
    case 2:
        {
        string timMaSach;
        cout << "Nhap ma sach can tim: ";
        cin >> timMaSach;
        // goi ham 
        timThongTinSach(timMaSach);
        break;
        }
    case 3:
        {
        int giaMoi;
        string timMaSach;
        cout << "Nhap ma sach can sua: ";
        cin >> timMaSach;
        cout << "Nhap gia moi: "; 
        cin >> giaMoi;
        // goi ham
        suaGia(timMaSach,giaMoi);
        break;
        }
    default:
        cout << "Loi" << endl;
        break;
    }
    } while ( chon != 4 );
    return 0; 
}