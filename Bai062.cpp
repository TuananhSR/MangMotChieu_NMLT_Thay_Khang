#include<iostream>
using namespace std;

void Nhap(float[], int&);

int DemCucDai(float[], int);

int DemCucTieu(float[], int);

int DemCucTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo diem cuc tri cua day la: " << DemCucTri(a, n);

	return 1;
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

int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			dem++;
	}
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}

int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}

int DemCucTri(float a[], int n)
{
	int dem1 = DemCucDai(a, n);
	int dem2 = DemCucTieu(a, n);
	return dem1 + dem2;
}