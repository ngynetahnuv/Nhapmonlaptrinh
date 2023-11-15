#include <iostream>

using namespace std;

int main () {
    int start , end;
    cout << "Nhap thoi gian bat dau: "; cin >> start;
    cout << "Nhap thoi gian ket thuc: "; cin >> end;

    if ( start < 12 || end > 23 || start < 12 || end > 23 ) {
        cout << "So gio nhap khong hop le!" << endl;
    }
    // tinh so gio va doi ra phut: thoi gian ket thuc - thoi gian bat dau va * 60 de doi ra phut
    int soGio = end - start;
    int tien = 0;
    // neu so gio duoi 3h thi tien = so gio * 150.000
    if ( soGio <= 3 ) {
        tien = soGio * 150000;
    } else {
        // tinh tien cho gio thu 4 tro di: 
        // lay 3h nhan cho 150.000 + so gio con lai va nhan cho 150.000 * voi 70% con lai
        tien = 3 * 150000 + ( soGio - 3 ) * 150000 * 0.7;
    }
    // gio giam gia 14 => 17 ( && = va )
    if ( start >= 14 && start <= 17 ) {
        // giam 10% la lay tien nhan cho 90%
        tien = tien * 0.9;
    }
    cout << "So tien can thanh toan la : " << tien << endl;
    return 0;
}