#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DauTien(int[], int, int, int);

int main()
{
	int a[100];
	int n, x, y;
	Nhap(a, n);
	cout << "\nNhap gia tri doan [x,y]: ";
	cin >> x >> y;
	cout << "\nSo dau tien thuoc doan [x,y] cua mang la: " << DauTien(a, n, x, y);
	return 1;
}

void Nhap(int a[], int& n)
{
	do
	{
		cout << "Nhap so phan tu mang: ";
		cin >> n;
		if (n < 0)
			cout << "Nhap lai" << endl;
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DauTien(int a[], int n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}