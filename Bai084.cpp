#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TimViTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nPhan tu can tim la: " << TimViTri(a, n);
	return 1;
}

void Nhap(float a[], int& n)
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

float TimViTri(float a[], int n)
{
	for (int i = 1; i <= n - 2; i++)
		if (a[i] == (a[i - 1] * a[i + 1]))
			return i;
	return -1;
}