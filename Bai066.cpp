#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
int DemGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo luong so nguyen to phan biet la: " << DemGiaTri(a, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = 0;
		if (ktNguyenTo(a[i]) && flag == 1)
			dem++;
	}
	return dem;
}