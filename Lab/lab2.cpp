/*
Lab 2
*/

// Bai 1 : Viet  chuong trinh nhap vao hai so va in ra tong hieu

#include <iostream> 
using namespace std;

int main () {
    int a, b;
    cin >> a;
    cin >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    return 0; 
}

// Bai 2 : Nhap dai rong va tinh chu vi dien tich

#include <iostream> 
using namespace std;

int main () {
    int dai, rong;
    cout << "Nhap chieu dai:";
    cin >> dai;
    cout << "Nhap chieu rong:";
    cin >> rong;
    cout << "Chu vi hinh chu nhat la:"; 
    cout << (dai + rong) * 2 << endl;
    cout << "Dien tich hinh chu nhat la:"; 
    cout << dai * rong << endl;
    return 0; 
}


// Bai 3 : Nhap ban kinh tinh chu vi dien tich hinh tron

#include <iostream> 
using namespace std;

int main () {
    int bankinh;
    float a = 3.14;
    cout << "Nhap ban kinh duong tron:";
    cin >> bankinh;
    cout << "Chu vi hinh tron la:"; cout << bankinh * a << endl;
    cout << "Dien tich hinh tron la:"; cout << 2 * bankinh * a << endl;
    return 0; 
}



// Bai 4 : Nhap diem toan ly hoa va tinh trung binh

#include <iostream> 
using namespace std;

int main () {
    float toan , ly , hoa;
    cout << "Nhap diem mon Toan:"; 
    cin >> toan;
    cout << "Nhap diem mon Ly:"; 
    cin >> ly;
    cout << "Nhap diem mon Hoa:"; 
    cin >> hoa;
    float diemtrungbinh = ( toan * 3 + ly * 2 + hoa )/6;
    cout << "Diem trung binh la:"; cout << diemtrungbinh << endl;
    return 0; 
}