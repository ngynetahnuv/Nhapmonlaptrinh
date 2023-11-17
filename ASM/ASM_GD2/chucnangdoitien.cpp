#include <iostream>

using namespace std;

int main () {
    // khai bao mang luu cac menh gia tien
    int menhGia[] = {500,200,100,50,20,10,5,2,1}; // co 9 menh gia tien
    int soTien, soToTien;
    cout << "Vui long nhap vao so tien can doi: "; cin >> soTien;

    // vong lap tung men gia tien
    for ( int i = 0; i < 9; i++ ) {
        // tinh so to tien
        soToTien = soTien / menhGia[i];
        // neu so to tien khong bang 0 thi in ra so tien do 
        if ( soToTien != 0 ) {
            cout << "Co " << soToTien << " to " << menhGia[i] << endl;
        }
        // cap nhat so tien con lai
        soTien = soTien - soToTien * menhGia[i];
    }
    return 0;
}