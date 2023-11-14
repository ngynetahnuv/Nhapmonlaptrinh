#include <iostream>

using namespace std;

int main () {
    int luachon;
    cout << "-----------------------------" << endl;
    cout << "1. " << endl;
    cout << "2. " << endl;
    cout << "3. " << endl;
    cout << "4. Thoat" << endl;
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
    } while ( luachon != 4 );
    return 0;
}
