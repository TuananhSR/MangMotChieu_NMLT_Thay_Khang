#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	cout << "\nMang gia tri cuc dai trong mang mot chieu cac so thuc: ";
	LietKe(b, k);
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

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] > a[1])
		cout << setw(10) << setprecision(5) << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			cout << setw(10) << setprecision(5) << a[i];
	if (a[n - 1] > a[n - 2])
		cout << setw(10) << setprecision(5) << a[n - 1];
}
