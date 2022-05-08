#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&);

int main()
{
	float b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	XoaTrung(b, k);
	cout << "\nMang sau khi xoa cac gia tri trung nhau la: ";
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

void XoaTrung(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		int flag = 0;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 1;
		if (flag == 1)
			XoaViTri(a, n, i);
	}
}
