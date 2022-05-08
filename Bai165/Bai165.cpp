#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
float LonNhat(float[], int);
void XoaLonNhat(float[], int&);


int main()
{
	float b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	XoaLonNhat(b, k);
	cout << "\nMang sau khi xoa cac gia tri lon nhat la: ";
	Xuat(b, k);
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

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

float LonNhat(float a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void XoaLonNhat(float a[], int& n)
{
	float ln = LonNhat(a, n);
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == ln)
			XoaViTri(a, n, i);
}