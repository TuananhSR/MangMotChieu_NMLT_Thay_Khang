#include <iostream>
using namespace std;

void Nhap(float[], int&);

int DemGiaTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo luong cac so thoa la: " << DemGiaTri(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	do
	{
		cout << "Nhap n: ";
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

int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		if ((a[i] * a[i - 1] > 0) && (abs(a[i]) > abs(a[i - 1])))
			dem++;
	}
	return dem;
}