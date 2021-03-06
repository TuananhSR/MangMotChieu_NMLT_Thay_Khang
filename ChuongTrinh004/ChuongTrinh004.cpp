#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

string getInputFileName(int);
string getOutputFileName(int);
void Nhap(float[], int&, string);
void Xuat(float[], int, string);

void Xuat(float[], int);
float TongAm(float[], int);

int main()
{
	float b[100000];
	int n;
	for (int i = 1; i <= 13; i++)
	{
		string FileName = getInputFileName(i);
		Nhap(b, n, FileName);
		cout << "\n" << FileName << endl;
		Xuat(b, n);
		FileName = getOutputFileName(i);
		Xuat(b, n, FileName);
		float kq;
		kq = TongAm(b, n);
		cout << "\nTong cac gia tri am trong mang = " << setprecision(5) << kq;
	}
	return 0; 

}

string getInputFileName(int n)
{
	string filename = string("floatdata");
	if (n < 10)
	{
		filename += "0" + to_string(n) + ".inp";
	}
	else
	{
		filename += to_string(n) + ".inp";
	}
	return filename;
}
string getOutputFileName(int n)
{
	string filename = string("floatdata");
	if (n < 10)
	{
		filename += "0" + to_string(n) + ".out";
	}
	else
	{
		filename += to_string(n) + ".out";
	}
	return filename;
}
void Nhap(float a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
	{
		fi >> a[i];
	}
}
void Xuat(float a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i=0; i < n; i++)
		fo << setw(8) << setprecision(5) << a[i];
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(5) << a[i];
}
float TongAm(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			s += a[i];
	return s;
}