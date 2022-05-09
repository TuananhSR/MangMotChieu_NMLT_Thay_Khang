#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
int NguyenToDau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo nguyen to dau tien cua mang la: " << NguyenToDau(a, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			return a[i];
	return -1;
}


