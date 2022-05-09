#include <iostream>
using namespace std;

void Nhap(float[], int&);
float XaNhat(float[], int, float);

int main()
{
	float a[100];
	int n,x;
	Nhap(a, n);
	cout << "\nNhap gia tri x (x ton tai trong mang): ";
	cin >> x;
	cout << "\nPhan tu co gia tri xa x nhat la: " << XaNhat(a, n, x);
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

float XaNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	return lc;
}
