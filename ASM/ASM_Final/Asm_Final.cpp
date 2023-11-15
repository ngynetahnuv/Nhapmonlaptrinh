#include <iostream>
#include <math.h>

using namespace std;

// bien tinh so nguyen to
bool soNguyenTo(int x) {
  if ( x < 2 ) {
    return false;
  }
  for ( int i = 2; i * i <= x; i++ ) {
    if ( x % i == 0 ) {
      return false;
    }
  }
  return true;
}

//bien tinh so chinh phuong
bool soChinhPhuong( int x ) {
  if ( x < 0 ){
    return false;
  } 
  int sqrt_x = sqrt(x);
  return( sqrt_x * sqrt_x == x );
}

// tim uoc chung lon nhat
int ucln ( int a, int b ) {
    // neu b so sanh bang 0 thi tra ve gia tri a
    if( b == 0 ) { 
        return a;
    }
    // khong thi tra ve b va a chia lay du cho b
    return ucln( b , a % b );
}
// boi chung nho nhat 
int bcnn ( int a, int b ) {
    // tinh tich cua hai so a nhan b va chia cho bien ucln da neu phia tren
    return ( a * b ) / ucln ( a , b);
}

int main () {
    int luachon; // YC1: Xay dung menu chuc nang
        do {
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
        cout << "Moi ban nhap lua chon (chon tu 1 -> 10):"; cin >> luachon;

        switch (luachon)
        {
        case 1:
            cout << "--------------------------------------\n";
            cout << "Kiem tra so nguyen\n";
            cout << "--------------------------------------\n";
            float x;
            // kiem tra so nguyen
            cout << "Nhap x = "; cin >> x;
            if ( x ==(int)x ) {
                cout << x << " la so nguyen" << endl;
            } else {
                cout << x << " khong phai la so nguyen" << endl;
            }
            if (soNguyenTo(x)) {
                cout << x << " la so nguyen to" << endl;
            } else {
                cout << x << " khong la so nguyen to" << endl;
            }
            if ( soChinhPhuong(x)) {
                cout << x << " la so chinh phuong" << endl;
            } else {
                cout << x << " khong la so chinh phuong\n\n" << endl;
            }
            system("pause");
            break;
        case 2:
            cout << "--------------------------------------\n";
            cout << "Tim uoc boi chung" << endl;
            cout << "--------------------------------------\n";
            int a , b;
            cout << "Nhap gia tri a = "; cin >> a;
            cout << "Nhap gia tri b = "; cin >> b;
          
            cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln( a , b ) << endl;
            cout << "Boi chung nho nhat cua " << a << " va " << b << " la " << bcnn( a , b ) << endl;
            cout << endl;
            system("pause");
            break;
        case 4:
        cout << "--------------------------------------\n";
        cout << "Tinh tien dien" << endl;
        cout << "--------------------------------------\n";
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
        system("pause");
        break;
        default:
            cout << "Thoat chuong trinh....";
            break;
        }
    } while ( luachon != 11 );

    return 0;
}

