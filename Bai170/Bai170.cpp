#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float b[100];
	int n;

	Nhap(b, n);
	cout << "\nMang ban dau:";
	Xuat(b, n);
	float x;
	cout << "\nNhap x: ";
	cin >> x;
	ThemBaoToan(b, n, x);
	cout << "\nMang sau khi them x la: ";
	Xuat(b, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

void ThemBaoToan(float a[], int& n, float x)
{
	int i = n - 1;
	while (i >= 0 && a[i] > x)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}