#include <iostream>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int a[100],b[100];
	int n, m;
	Nhap(a, n);
	Nhap(b, m);
	cout << "\nSo luong cac gia tri chi xuat hien mot trong hai mang la: " << DemGiaTri(a, n, b, m);

	return 1;
}

void Nhap(int a[], int& n)
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
		{
			if (a[j] == a[i])
				flag = 0;
			if (TanSuat(b, m, a[i]) == 0 && flag == 1)
				dem++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
		{
			if (b[j] == b[i])
				flag = 0;
			if (TanSuat(a, n, b[i]) == 0 && flag == 1)
				dem++;
		}
	}
		return dem;
}