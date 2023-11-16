#include <iostream>
#include <cstdlib> // thu vien phat sinh so ngau nhien


using namespace std;


int main () {
    /* dung ham srand() nhan hat giong cho ham rand(). Moi lan chay
     chuong trinh no se tra cung ve mot so ngau nhien */
    srand(time(NULL));
    // ham rand() tra ve mot so nguyen ngau nhien tu 0 den rand_max. Sau do dung 
    int soMayMan = rand() % 15 + 1; // bien random
    int so1 , so2;
    cout << "Nhap so may man cua ban 1: "; cin >> so1;
    cout << "Nhap so may man cua ban 2: "; cin >> so2;
    cout << "--------------------------------------\n";
    cout << "So may man hom nay la: " << soMayMan << endl;
    cout << "--------------------------------------\n";
    // kiem tra so trung giai
    // neu so1 hoac so 2 = so random thi in ra giai nhi
    if ( so1 == soMayMan || so2 == soMayMan ) {
        // kiem tra tiep dieu kien 2: 
        // neu so 1 va so 2 = so random thi in ra giai nhat
        if ( so1 == soMayMan && so2 == soMayMan ) {
        cout << "Chuc mung ban da trung giai nhat!!" << endl;
        } else {
        cout << "Chuc mung ban da trung giai nhi!!" << endl;
        }
    } else {
        cout << "Chuc mung ban may man lan sau......" << endl;
    }
    return 0; 
}