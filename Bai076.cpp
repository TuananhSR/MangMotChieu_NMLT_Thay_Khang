#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TimViTri(float[], int, float);

int main()
{
	float a[100];
	int n, x;
	Nhap(a, n);
	cout << "\nNhap gia tri x (x ton tai trong mang): ";
	cin >> x;
	cout << "\nvi tri cua phan tu co gia tri gan x nhat la: " << TimViTri(a, n, x);
	return 1;
}

void Nhap(float a[], int& n)
{
	do
	{
		cout << "Nhap so phan tu mang: ";
		cin >> n;
		if (n < 3)
			cout << "Nhap lai" << endl;
	} while (n < 3);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float TimViTri(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(lc - x))
			lc = i;
	return lc;
}
