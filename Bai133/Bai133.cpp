#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XayDung(float[], int, float[], int&);

int main()
{
	float a[100];
	float b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	int h = 0;
	XayDung(b, k, a, h);
	cout << "\n Mang so am: ";
	Xuat(a, h);
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

void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			b[k++] = a[i];
}
