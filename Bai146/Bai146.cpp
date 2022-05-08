#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[100];
	int h;
	Nhap(a, h);
	cout << "\nMang ban dau a[]: ";
	Xuat(a, h);
	cout << '\n' << '\n';
	int b[100];
	int k;
	Nhap(b, k);
	cout << "\nMang ban dau b[]: ";
	cout << '\n' << '\n';
	Xuat(b, k);

	int c[200];
	int p = 0;
	Tron(a, h, b, k, c, p);
	cout << "\nMangTron c[]: ";
	cout << '\n' << '\n';
	Xuat(c, p);

	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0; 
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}
