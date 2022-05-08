#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void ThemViTri(float[], int&, float, int);

int main()
{
	float b[100];
	int n;

	Nhap(b, n);
	cout << "\nMang ban dau:";
	Xuat(b, n);
	float x, k;
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\nNhap k: ";
	cin >> k;
	ThemViTri(b, n, x, k);
	cout << "\nMang sau khi them la: ";
	Xuat(b, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

void ThemViTri(float a[], int& n, float x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
}