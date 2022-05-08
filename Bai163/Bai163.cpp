#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
bool ktChinhPhuong(int);
void XoaChinhPhuong(int[], int&);


int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	XoaChinhPhuong(b, k);
	cout << "\nMang sau khi xoa cac so chinh phuong la : ";
	Xuat(b, k);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void XoaChinhPhuong(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktChinhPhuong(a[i]))
			XoaViTri(a, n, i);
}