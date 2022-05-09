#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktChinhPhuong(int);
int ChinhPhuongDau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo  chinh phuong dau tien cua mang la: " << ChinhPhuongDau(a, n);
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

bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int ChinhPhuongDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktChinhPhuong(a[i]))
			return a[i];
	return -1;
}


