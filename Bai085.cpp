#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ChanCuoi(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo chan cuoi cung cua mang la: " << ChanCuoi(a, n);
	return 1;
}

void Nhap(int a[], int& n)
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

int ChanCuoi(int a[], int n)
{
	for (int i = n - 1; i > 0; i--)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}