#include <iostream>
#include <cmath>

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

int main () {
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
    cout << x << " khong la so chinh phuong" << endl;
  }
 return 0;
}
