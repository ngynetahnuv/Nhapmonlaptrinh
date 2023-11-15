#include <iostream>

/*
Thuat toan tim uoc boi chung 
    +, tim uoc chung lon nhat:
    - nhap a va b
    - neu a bang 0, tra ve b
    - neu b bang 0, tra ve a
    - neu a bang b, tra ve a
    - neu a lon hon b, goi de quy ham cua ham 'ucln' cua a tru b va b
    - neu b lon hon a, goi de quy ham cua ham 'ucln' cua b tru a va a
    +, tim boi chung nho nhat
    - tinh tich cua hai so a va b
    - tinh uoc chung lon nhat cua hai so 
    - tra ve tich cua uoc
*/

using namespace std;
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
    int a , b;
    cout << "Nhap gia tri a = "; cin >> a;
    cout << "Nhap gia tri b = "; cin >> b;

    int ucln_re = ucln( a , b ); // gan bien ucln cho bien ucln_re
    int bcnn_re = bcnn( a , b ); // gan bien bcnn_re cho bien bcnn_re

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln_re << endl;
    cout << "Boi chung nho nhat cua " << a << " va " << b << " la " << bcnn_re << endl;
    return 0;
}