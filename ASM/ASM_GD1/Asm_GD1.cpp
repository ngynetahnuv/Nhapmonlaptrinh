#include <iostream>

using namespace std;

int main () {
    int luachon;
        cout << "----------------- Menu chuc nang ---------------\n";
        cout << "1. Kiem tra so nguyen\n";
        cout << "2. Tim uoc chung boi chung cua 2 so\n";
        cout << "3. Tinh tien cho quan Karaoke\n";
        cout << "4. Tinh tien dien\n";
        cout << "5. Chuc nang doi tien\n";
        cout << "6. Tinh lai suat ngan hang vay tra gop\n";
        cout << "7. Chuong trinh vay tien mua xe\n";
        cout << "8. Thong tin sinh vien\n";
        cout << "9. Game FPOLY-LOTT\n";
        cout << "10. Chuong trinh tinh toan phan so\n";
        cout << "11. Thoat\n";
        cout << "--------------------------------------\n";
        cout << "Vui long lua chon: "; cin >> luachon;
    // dung vong lap do while de thoat khoi chuong trinh neu nhap khac so trong mennu
    do {
        switch (luachon)
        {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;
        default:
            cout << "thoat chuong trinh" << endl;
            break;
        }
    } while ( luachon != 11 );
    return 0;
}
