#include <iostream>
using namespace std;

void Nhap(float[], int&);
float AmCuoi(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo am cuoi cung cua mang la: " << AmCuoi(a, n);
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

float AmCuoi(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0 && a[i]>-1)
			return a[i];
	return -1;
}