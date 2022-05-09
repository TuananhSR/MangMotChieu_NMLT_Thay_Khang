#include<iostream>
using namespace std;

void Nhap(int[], int&);
int DemPhanBiet(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo luong cac gia tri phan biet trong mang la : " << DemPhanBiet(a, n);
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

int DemPhanBiet(int a[],int n)
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