#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int baiTap;
	while (true) {
	cout << "Menu chuong trinh" << endl;
	cout << "1. Chuong trinh tinh hoc luc" << endl;
	cout << "2. Chuong trinh giai phuong trinh bac 1" << endl;
	cout << "3. Chuong trinh giai phuong trinh bac 2" << endl;
	cout << "4. Chuong trinh tinh tien dien" << endl;
	cout << "5. Thoat" << endl;
	cout << "Vui long chon so : "; cin >> baiTap;
	switch (baiTap)
	{
	case 1: //chuong trinh tinh hoc luc
	{
	cout << "Chuong trinh tinh hoc luc" << endl;
		float diem;
	cout << "Nhap diem = "; cin >> diem;
	if ( diem >= 9 ) {
		cout << "Hoc sinh xuat sac!" << endl;
	} else {
		if ( diem >= 8 ) {
			cout << "Hoc sinh gioi!" << endl;
		} else {
			if ( diem >= 6.5 ) {
				cout << "Hoc sinh kha!" << endl;
			} else {
				if ( diem >= 5 ) {
					cout << "Hoc sinh trung binh!" << endl;
				} else {
					if ( diem >= 3.5 ) {
						cout << "Hoc sinh yeu!" << endl;
					} else {
						if ( diem < 3.5 ) {
							cout << "Hoc sinh kem!" << endl;
						} else {
							cout << "Du lieu nhap vao khong dung!" << endl;
						}
					}
				}
			}
		}
	}
	}
		break;
	case 2: // Giai phuong trinh bac mot
	{
	cout << "Giai phuong trinh bac 1\n";
	int giatria;
	int giatrib;
	cout << "Nhap gia tri a = ";
	cin >> giatria;
	cout << "Nhap gia tri b = ";
	cin >> giatrib;
	if ( giatria != 0) {
		float giatrix = -giatrib / giatria; // tinh phuong trinh
		cout << "Nghiem cua phuong trinh la: " << giatrix << endl; 
	} else {
		cout << "Phuong trinh vo nghiem" << endl;
	}
	}
		break;
	case 3: //giai phuong trinh bac hai
	{
	cout << "Giai phuong trinh bac 2\n";
	float giatri_a , giatri_b , giatri_c; // bien a b c
	cout << "Nhap gia tri a , b , c = "; cin >> giatri_a >> giatri_b >> giatri_c;
	float global = giatri_b * giatri_b - 4 * giatri_a * giatri_c; // tinh delta
	if ( global == 0 ) {
		float x = -giatri_b / (2 * giatri_a ); // xet truong hop 1
		cout << "Nghiem cua phuong trinh la : " << x << endl; 
	} else {
		static float global;
		if ( global > 0) {
			// xet 2 truong hop con lai
		float x1 = ( -giatri_b + sqrt(global)) / 2 * giatri_a; // nghiem x1
		float x2 = ( -giatri_b - sqrt(global)) / 2 * giatri_a; // nghiem x2
			cout << "Nghiem cua phuong trinh la " << x1 << " , " << x2 << endl;
		} else {
			cout << "Phuong trinh vo nghiem!" << endl;
		}
	 }
	}
		break;
	case 4: // tinh tien dien
	{
	cout << "Tinh tien dien" << endl;
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
		break;
	default:
	cout << "Du lieu khong ton tai!!" << endl;
		break;
	}
	}
	system("pause");
	return 0;
}
