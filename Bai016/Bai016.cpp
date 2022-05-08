#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int, int, int);

int main()
{
	int b[100];
	int k;
	int x, y;
	Nhap(b, k);
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "\nMang ban dau:";
	Xuat(b, k);
	cout << "\nCac gia tri chan trong mang tu [" << x << "," << y << "]: ";
	LietKe(b, k, x, y);
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
		cout << setw(10) << a[i];
}

void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			if (a[i] % 2 == 0)
				cout << setw(10) << a[i];
}