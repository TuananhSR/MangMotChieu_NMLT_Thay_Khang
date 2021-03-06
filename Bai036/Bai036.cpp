#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktChinhPhuong(int);
int TongChinhPhuong(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);

	int s = TongChinhPhuong(a, n);
	cout << "\nTong cac gia tri chinh phuong: " << s;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
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

int TongChinhPhuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktChinhPhuong(a[i]))
			s += a[i];
	return s;
}