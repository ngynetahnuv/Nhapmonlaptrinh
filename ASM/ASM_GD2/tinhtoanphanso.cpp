#include <iostream> 
using namespace std;

int main () {
    float phanSo1, phanSo2;
    cout << "Nhap phan so thu nhat: "; cin >> phanSo1;
    cout << "Nhap phan so thu ha: "; cin >> phanSo2;
    // tao bien tinh tong hieu tich thuong
    float tong = phanSo1 + phanSo2;
    float hieu = phanSo1 - phanSo2;
    float tich = phanSo1 * phanSo2;
    float thuong = phanSo1 / phanSo2;
    // in ra 
    cout << "Tong cua hai phan so la = " << tong << endl;
    cout << "Hieu cua hai phan so la = " << hieu << endl;
    cout << "Tich cua hai phan so la = " << tich << endl;
    cout << "Thuong cua hai phan so la = " << thuong << endl;
    return 0; 
}