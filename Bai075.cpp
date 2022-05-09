#include <iostream>
using namespace std;

void Nhap(float[], int&);
int TimViTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nVi tri cua phan tu co gia tri nho nhat la: " << TimViTri(a, n);
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

int TimViTri(float a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;
}
