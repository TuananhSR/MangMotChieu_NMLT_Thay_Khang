#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int, int, int);

int main()
{
	float b[100];
	int k;
	int x, y;
	Nhap(b, k);
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "\nMang ban dau:";
	Xuat(b, k);
	cout << "\nCac gia tri trong mang tu [" << x << "," << y << "]: ";
	LietKe(b, k, x, y);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}

void LietKe(float a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			cout << setw(10) << setprecision(5) << a[i];
}