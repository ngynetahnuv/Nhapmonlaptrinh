#include <iostream>
#include <math.h>
#include <cstdlib>

// xog bai 1, 2, 3, 4, 5, 8, 9, 10

using namespace std;

void cn1() {

}

void cn2() {

}

// tinh so nguyen to
bool soNguyenTo(int x) {
  // neu x nho hon 2 thi tra ve false
  if ( x < 2 ) {
    return false;
  }
  // tao mot vong lap cho i = 2, va binh phuong cua i nho hon hoac bang x
  for ( int i = 2; i * i <= x; i++ ) {
    // neu x chia co du cho i = 0 thi tra ve false
    if ( x % i == 0 ) {
      return false;
    }
  }
  // neu tren kia xog thi tra ve true
  return true;
}

// tinh so chinh phuong
bool soChinhPhuong( int x ) {
  // neu x nho hon 0 thi tra ve false
  if ( x < 0 ){
    return false;
  } 
  // cho bien sqrt_x = can bac 2 cua x
  int sqrt_x = sqrt(x);
  // tra ve binh phuong cua can bac 2 cua x = x
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
        {
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
        }
            system("pause");
            break;
        case 2:
        {
            cout << "--------------------------------------\n";
            cout << "Tim uoc boi chung" << endl;
            cout << "--------------------------------------\n";
            int a , b;
            cout << "Nhap gia tri a = "; cin >> a;
            cout << "Nhap gia tri b = "; cin >> b;
          // in ra uoc boi 
            cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln( a , b ) << endl;
            cout << "Boi chung nho nhat cua " << a << " va " << b << " la " << bcnn( a , b ) << endl;
            cout << endl;
        }
            system("pause");
            break;
        case 3:
        {
            cout << "--------------------------------------\n";
            cout << "Tinh tien Karaoke" << endl;
            cout << "--------------------------------------\n";
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
        }
              system("pause");
              break;
        case 4:
        {
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
        }
        system("pause");
        break;
        case 5:
        {
          cout << "--------------------------------------\n";
          cout << "Doi tien " << endl;
          cout << "--------------------------------------\n";
          // khai bao mang luu cac menh gia tien
        int menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 }; // co 9 menh gia tien
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
        }
        system("pause");
        break;
        case 8:
        {
            cout << "--------------------------------------\n";
            cout << "Thong tin sinh vien" << endl;
            cout << "--------------------------------------\n";
            float diem;
            string hovaTen;
            cout << "Nhap ho va ten cua sinh vien : ";
            cin.ignore(); // them cai nay neu co cin
            getline( cin , hovaTen );
            cout << "Nhap diem : "; cin >> diem;
            cout << "-------- Thong tin sinh vien --------" << endl;
            cout << "Ten cua sinh vien : " <<  hovaTen << endl;
            cout << "Diem cua sinh vien : " << diem << endl;
            // neu diem lon hon hoac bang 9.0 thi in ra xuat sac
            if ( diem >= 9.0 ) {
                cout << "Hoc luc : xuat sac" << endl;
            } else {
              // neu diem lon hon hoac bang 8.0 thi in ra gioi
                if ( diem >= 8.0 ) { 
                    cout << "Hoc luc : gioi" << endl;
                } else {
                  // neu diem lon hon hoac bang 6.5 thi in ra kha
                    if ( diem >= 6.5 ) {
                        cout << "Hoc luc : kha" << endl;
                    } else {
                      // neu diem lon hon hoac bang 5.0 thi in ra trung binh
                        if ( diem >= 5.0 ) {
                            cout << "Hoc luc : trung binh" << endl;
                        } else { // con neu duoi 5.0 thi in ra yeu
                            cout << "Hoc luc : yeu" << endl;
                        }
                    }
                }
            }
        }
        system("pause");
        break;
        case 9:
        {
          cout << "--------------------------------------\n";
          cout << "Game FPOLY-LOTT" << endl;
          cout << "--------------------------------------\n";
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
        }
        system("pause");
        break;
        case 10:
        {
        cout << "--------------------------------------\n";
        cout << "Tinh toan phan so" << endl;
        cout << "--------------------------------------\n";
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

