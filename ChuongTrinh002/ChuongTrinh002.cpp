#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

string getInputFileName(int);
string getOutputFileName(int);
void Nhap(int[], int&, string);
void Xuat(int[], int, string);

void Xuat(int[], int);
void LietKeLe(int[], int);

int main()
{
	int b[100000];
	int n;
	for (int i = 1; i <= 13; i++)
	{
		string FileName = getInputFileName(i);
		Nhap(b, n, FileName);

		cout << "\n" << FileName << endl;
		LietKeLe(b, n);

		FileName = getOutputFileName(i);
		Xuat(b, n, FileName);
	}
	return 1;
}

string getInputFileName(int n)
{
	string fileName = string("D:\\UIT\\Nhap Mon Lap Trinh_ Thay Khang\\MangMotChieu\\ChuongTrinh002\\intdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".inp";
	else
		fileName += to_string(n) + ".inp";
	return fileName;
}

string getOutputFileName(int n)
{
	string fileName = string("D:\\UIT\\Nhap Mon Lap Trinh_ Thay Khang\\MangMotChieu\\ChuongTrinh002\\intdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".out";
	else
		fileName += to_string(n) + ".out";
	return fileName;
}

void Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}

void Xuat(int a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(8) << a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void LietKeLe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			cout << setw(8) << a[i];
}