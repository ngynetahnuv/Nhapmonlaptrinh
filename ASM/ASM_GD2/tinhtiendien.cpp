#include <iostream>

using namespace std;

int main () {
    float soDien;
        cout << "Nhap so dien tieu thu = "; cin >> soDien;
        if ( soDien <= 50 ) {
          float tienDien = soDien * 1.678; // bien tinh tien dien 
          cout << "So tien dien la = " << tienDien << endl;
        } else {
          if ( soDien <= 100 ) {
            float tienDien = soDien * 1.734; // bien tinh tien dien
            cout << "So tien dien la = " << tienDien << endl;
          } else {
            if ( soDien <= 200 ) {
              float tienDien = soDien * 2.014; // bien tinh tien dien
              cout << "So tien dien la = " << tienDien << endl;
            } else {
              if ( soDien <= 300 ){
                float tienDien = soDien * 2.536; // bien tinh tien dien
                cout << "So tien dien la = " << tienDien << endl;
              } else {
                if ( soDien <= 400 ) {
                  float tienDien = soDien * 2.834; // bien tinh tien dien
                  cout << "So tien dien la = " << tienDien << endl;
                } else {
                  float tienDien = soDien * 2.927; // bien tinh tien dien
                  cout << "So tien dien la = " << tienDien << endl;
                }
              }
            }
          }
        }
    return 0;
}