#include <iostream>
using namespace std;

void Nhap(float[], int&);
int DemPhanBiet(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo phan tu phan biet trong mang thuc la: " << DemPhanBiet(a, n);
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

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}