#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TimX(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout<<"\nDoan [-x,x] chua cac gia tri mang la: [-"<<TimX(a, n)<<","<<TimX(a,n)<<"]";
	return 1;
}

void Nhap(float a[], int& n)
{
	do
	{
		cout << "Nhap so phan tu mang: ";
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

float TimX(float a[], int n)
{
	float lc = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
}
