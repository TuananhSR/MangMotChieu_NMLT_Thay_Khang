#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int a[100], b[100];
	int n, m;
	Nhap(a, n);
	Nhap(b, m);
	LietKe(a, n, b, m);
	return 1;
}

void Nhap(int a[], int& n)
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n, int b[], int m)
{
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag)
				cout << a[i];
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag)
			cout << b[i];
	}
}
