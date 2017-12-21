#include <iostream>
#include "Function.h"
using namespace std;

void NhapMangint(int a[], int&n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void XuatMangint(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void NhapMangfloat(float a[], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void XuatMangfloat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void Lietkeqiatrichan_132(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " " ;
		}
	}
}

void Lietkevitriam_133(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] <0)
		{
			cout << i << " ";
		}
	}
}

void lonnhat_134(float a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	cout <<"GTLN la "<<  max; 
}

float duongdau_135(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];

	}
	return -1;

}

int chancuoi_136(int a[], int n)
{
	for (int i = n-1; i>=0; i--)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}

int vitrinhonhat(float a[], int n)
{
	int i_min = 10000;
	float min = 1000000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			i_min = i;
			min = a[i];
		}
	}
	return i_min;
}

bool soHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			s = s + i;
		}
	}
	if (s == n)
		return true;
	else
		return false;
}

int vitrihoanthiencuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i++)
	{
		if (soHoanThien(a[i]) == true)
		{
			return i;
		}
	}
	return -1;
}

float duongnhonhat(float a[], int n)
{
	float min = 100000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < min)
			min = a[i];
	}
	if (min == 100000)
		return -1;
	else
		return min;
}

int vitriduongnhonhat(float a[], int n)
{
	float min = 100000;
	int i_min = 100000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min &&a[i]>0)
		{
			min = a[i];
			i_min = i;
		}
	}
	if (i_min == 100000)
		return -1;
	else
		return i_min;
}

float nhonhat(float a[], int n)
{
	float min = 10000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];

	}
	return min;
}

int chandau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}

int nguyentodau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int c = 0;
		for (int j = 2; j < a[i]; j++)
		{
			if (a[i]%j == 0)
				c++;
		}
		if (c == 0)
			return a[i];
	}
	return -1;
}

int hoanthiendau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 1; j < n; j++)
		{
			if (a[i] % j == 0)
				s = s + j;
		}
		if (s == a[i])
			return a[i];
	}
	return -1;
}

float amdau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			return a[i];
		}
	}
	return 1;
}

float duongcuoi(float a[], int n)
{
	for (int i = n-1; i >=0; i--)
	{
		if (a[i] > 0)
		{
			return a[i];
		}
	}
	return -1;
}

int nguyentocuoi(int a[], int n)
{
	for (int i = n-1; i >=0; i++)
	{
		int c = 0;
		for (int j = 2; j < a[i]; j++)
		{
			if (a[i] % j == 0)
				c++;
		}
		if (c == 0)
			return a[i];
	}
	return -1;
}

int hoanthiencuoi(int a[], int n)
{
	for (int i = n-1; i >=0; i++)
	{
		int s = 0;
		for (int j = 1; j < n; j++)
		{
			if (a[i] % j == 0)
				s = s + j;
		}
		if (s == a[i])
			return a[i];
	}
	return -1;
}

float amlonnhat(float a[], int n)
{
	float max_am = -100000;
	for (int i = 0;i < n; i++)
	{
		if (a[i]<0 && a[i]>max_am)
		{
			max_am = a[i];
		}
	}
	if (max_am == -100000)
		return 0;
	else
		return max_am;
}

int nguyentolonnhat(int a[], int n)
{
	bool snt[1000];
	int max = -10;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	for (int i = 0; i <= max; i++)
	{
		snt[i] = true;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 2; j < n; j++)
		{
			if (a[i] % j == 0)
				snt[a[i]] = false;
		}
	}
	int maxnt = -10;
	for (int i = 0; i < n; i++)
	{
		if (snt[a[i]] == true && a[i] > maxnt)
			maxnt = a[i];
	}

	return maxnt;
}

int hoanthiennhonhat(int a[], int n)
{
	bool hoanthien[10000];
	int max = -10;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	for (int i = 0; i <= max; i++)
	{
		hoanthien[i] = false;
	}

	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 1; j < a[i]; j++)
		{
			if (a[i] % j == 0)
				s = s + j;
		}
		if (s == a[i])
			hoanthien[a[i]] = true;
	}
	int minhoanthien = 10000;
	
	for (int i = 0; i < n; i++)
	{
		if (hoanthien[a[i]] == true && a[i] < minhoanthien)
		{
			minhoanthien = a[i];
		}
		
	}
	return minhoanthien;
}

int channhonhat(int a[], int n)
{
	int min = 10000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < min)
			min = a[i];
	}
	if (min == 10000)
		return -1;
	else
		return min;
}

int vtamlonnhat(float a[], int n)
{
	float max_am = -100000;
	int vtamln = -10;
	for (int i = 0; i < n; i++)
	{
		if (a[i]<0 && a[i]>max_am)
		{
			max_am = a[i];
			vtamln = i;
		}
	}
	if (vtamln == -10)
		return -1;
	else
		return vtamln;
}

float xanhat(float a[], int n)
{
	cout << "Nhap x" << endl;
	int x;
	cin >> x;
	float khoangcach[1000];
	for (int i = 0; i < n; i++)
	{
		khoangcach[i] = a[i] - x;
	}
	float max = -10;
	for (int i = 0; i < n; i++)
	{
		if (khoangcach[i] > max)
			max = a[i];
	}
	return max;
}

void timdoan(float a[], int n)
{
	float max = -10000;
	float min = 10000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}

	cout << "[" << min << " " << max << "]";

}

int nguyentonhonhatlonnhat(int a[], int n)
{
	int max = -10;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	for (int i = max; i < 10000; i++)
	{
		int c = 0;
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
				c++;
		}
		if (c == 1)
			return i;
	}
	return 0;
		
}

int bcnn(int a, int b) {
	if (a <= 1)return b;
	if (b <= 1)return a;
	int _a = a, _b = b;
	while (_a != _b) {
		if (_a>_b)_a -= _b;
		else _b -= _a;
	}
	return a * b / _a;
}

int boichungnhonhat(int a[], int n)
{
	int boiso = bcnn(a[0], a[1]);
	for (int i = 2; i <= n - 1; i++)
	{
		boiso = bcnn(boiso, a[i]);
	}

	return boiso;
}

int timchuso(int a[], int n)
{
	int used[10000];
	for (int i = 0; i < 10000; i++)
		used[i] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10000; j++)
		{
			if (a[i] == j)
				used[j]++;
		}
	}
	int max = -1;
	for (int i = 0; i < 10000; i++)
	{
		if (used[i] > max)
			max = used[i];
	}
	return max;
}

void gannhaunhat(float a[], int n)
{
	float dmin = 10000;
	float dau = 0, cuoi = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && abs(a[i] - a[j]) < dmin)
			{
				dau = a[i];
				cuoi = a[j];
			}
		}
	}
	cout << dau << "   " << cuoi;
}

void lietke_179(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > abs(a[i + 1]))
			cout << a[i] << " ";
	}
}

void lietke_180(float a[], int n)
{
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i - 1] && a[i] < abs(a[i + 1]))
			cout << a[i] << " ";
	}
}

void lietke_182(float a[], int n)
{
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i - 1] * a[i] < 0 || a[i] * a[i + 1] < 0)
		{
			cout << a[i] << " ";
		}
	}
}

void lietke_186(float a[], int n)
{
	float amdau;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			amdau = a[i];
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] == amdau)
			cout << i << " ";
	}
}

int chusodautien(int n)
{
	int t = n;
	while (t > 10)
	{
		t = t / 10;
	}
	return t;
}

void lietkedaule_189(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (chusodautien(a[i]) % 2 == 1)
			cout << a[i]<<" ";
	}
}

void lietke_195(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (a[i] == a[j] + a[k] || a[j] == a[i] + a[k] || a[k] == a[i] + a[j])
				{
					cout << a[i] << " " << a[j] << " " << a[k] << endl;
				}
			}
		}
	}
}

float tongdaule(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (chusodautien(a[i]) % 2 == 1)
		{
			s = s + a[i];
		}
	}
	return s;
}

float tinhtong_204(float a[], int n)
{
	float s = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
			s = s + a[i];
	}
	return s;
}

float tinhtong_205(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > abs(a[i + 1]))
			s = s + a[i];
	}
	return s;
}

float tongcuctri(float a[], int n)
{
	float max = -10000;
	float min = 10000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max + min;
}

int tongchinhphuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if ((int)sqrt(a[i])*(int)sqrt(a[i]) == a[i])
			s = s + a[i];
	}
	return s;
}

float trungbinhcong(float a[], int n)
{
	int c = 0;
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			s = s + a[i];
			c++;
		}
	}
	return s / c;
}

int timSoDao(int nInput)
{
	int nSoDao = 0, nRem;
	while (nInput != 0)
	{
		nRem = nInput % 10;
		nSoDao = (nSoDao * 10) + nRem;
		nInput = nInput / 10;
	}
	return nSoDao;
}

int demdoixung(int a[], int n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == timSoDao(a[i]))
			c++;
	}
	return c;
}

int demtancung(int a[], int n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 5 == 0 && a[i] % 10 != 0)
		{
			c++;
		}
	}
	return c;
}

int tuongquanchanle(int a[], int n)
{
	int c_chan = 0; 
	int c_le = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			c_chan++;
		else
			c_le++;
	}
	if (c_chan == c_le)
	{
		return 0;
	}
	else
		if (c_chan > c_le)
			return -1;
		else
			return 1;
}

int demhoanthien(int a[], int n)
{
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int j = 1; j < a[i]; j++)
		{
			if (a[i] % j == 0)
				s = s + j;
		}
		if (s == a[i])
			c++;
	}
	return c;
}

int demphanbiet(int a[], int n)
{
	int c[1000];
	int max = -1000;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}

	for (int i = 0; i < max; i++)
		c[i] = 0;

	for (int i = 0; i < n; i++)
	{
		int t = a[i];
		for (int j = 0; j < n; j++)
		{
			if (a[j] == t )
				c[a[j]]++;
		}
	}
	int count = 0; 
	for (int i = 0; i < max; i++)
	{
		if (c[i] != 0)
		{
			count++;
		}
	}
	return count;
}

void lietke(int a[], int n)
{
	int used[1000];
	for (int i = 0; i <= 1000; i++)
	{
		used[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			if (a[i] == j)
			{
				used[a[i]]++;
			}
		}
	}

	for (int i = 0; i <= 1000; i++)
	{
		if (used[i] > 1)
			cout << i<<" ";
	}
}

void lietke_233(int a[], int n)
{
	int used[1000];
	for (int i = 0; i <= 1000; i++)
	{
		used[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= 1000; j++)
		{
			if (a[i] == j)
			{
				used[a[i]]++;
			}
		}
	}

	for (int i = 0; i <= 1000; i++)
	{
		if (used[i] >= 1)
			cout << i << " " << used[i] << endl;
	}
}

void Ghep(int A[], int n, int B[], int m, int C[], int &h)
{
	h = m + n;
	for (int i = 0; i<h; i++)
		if (i<n)
			C[i] = A[i];
		else
			C[i] = B[i - n];

}

int demgiatri(int a[], int n, int b[], int m )
{
	
	int c[100];
	int h = m + n;
	Ghep(a, n, b, m, c, h);
	
	//___________________________________

	int d[1000];
	int max = -1000;

	for (int i = 0; i < n; i++)
	{
		if (c[i] > max)
			max = c[i];
	}

	for (int i = 0; i <= max; i++)
		d[i] = 0;

	for (int i = 0; i <h; i++)
	{
		int t = c[i];
		for (int j = 0; j < h; j++)
		{
			if (c[j] == t)
				d[c[j]]++;
		}
	}

	int count = 0;

	for (int i = 0; i <=max; i++)
	{
		if (d[i]!=0)
		{
			count++;
		}
	}
	
	return count;
}

void lietke_235(int a[], int n, int b[], int m)
{

	int c[100];
	int h = m + n;
	Ghep(a, n, b, m, c, h);
	//___________________________________

	int d[1000];
	int max = -1000;

	for (int i = 0; i < n; i++)
	{
		if (c[i] > max)
			max = c[i];
	}

	for (int i = 0; i <= max; i++)
		d[i] = 0;

	for (int i = 0; i <h; i++)
	{
		int t = c[i];
		for (int j = 0; j < h; j++)
		{
			if (c[j] == t)
				d[c[j]]++;
		}
	}


	for (int i = 0; i <= max; i++)
	{
		if (d[i] ==1)
		{
			cout <<i << " ";
		}
	}
}

int tontaikhong(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			flag = -1;
	}
	return flag;
}

int tontaichan(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			flag = 1;
	}
	return flag;
}

int ktdoixung(int a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[n - +1 - i])
			return 0;
	}
	return 1;
}

int ktbangnhau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i] != a[j])
				return 0;
	}
	return 1;
}

int ktlongnhau(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	bool used[10000];
	for (int i = 0; i < n; i++)
		used[i] = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i] = b[j])
				used[i] = true;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (used[i] == 0)
			return 0;
		else
			return 1;
	}
}

void swap(int &a, int &b)
{
	int t = a; 
	a = b;
	b = t;
}

void sapxep_261(float a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i] > 0 && a[j] > 0 && a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
		
}

void sapxep_262(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i] > 0 && a[j] > 0 && a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i] < 0 && a[j] < 0 && a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void sapxep_264(int a[], int n, int b[], int m, int c[], int &h)
{
	if (n < m)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < b[i])
			{
				c[2*i] = a[i];
				c[2*i + 1] = b[i];
			}		
		}

		for (int i = 2*n; i < h ; i++)
		{
			c[i] = b[i - n];
		}
	}
	for (int i = 0; i < h; i++)
		cout << c[i] << " ";
}

void xoavitri(float a[], int &n, int x)
{
	for (int i = x; i < n-1;i++)
		a[i] = a[i + 1];
	n--;
}

void xoasoam(float a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			xoavitri(a, n, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void xoatrungx(float a[], int &n, int x)
{
	
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] ==x)
			xoavitri(a, n, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void motvedau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			a[i] = 0;
			for (int j = i; j >= 1; j--)
			{

				a[j] = a[j - 1];
				a[0] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

void chiabavedau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] %3==0)
		{
			int t=a[i];
			for (int j = i; j >= 1; j--)
			{

				a[j] = a[j - 1];
				a[0] = t;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

void daonguocmang(int a[], int n)
{


	for (int i = 0; i < n/2; i++)
	{
		swap(a[i], a[n - i-1]);
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}


void PrintResult(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

}

void sinhmangcon_293(int a[], int n)
{
	int k;
	for (int i = 0; i < n; i++)
	{
		for (int k = i; k <= n; k++)
		{
			
			for (int j = i; j <k; j++)
			{
					cout << a[j] << " ";
			}
			cout << "\n";
		}
	}   
}

bool kiemtratangdan(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i + 1])
			return false;
	}
	return true;
}

void lietkecontang(int a[], int n)
{
	int b[10000];
	int nb;
	for (int i = 0; i < n; i++)
	{
		for (int k = i; k <= n; k++)
		{
			nb = 0;
			for (int j = 0; j < k; j++)
			{
				b[nb] = a[j];
				nb++;
			}
			if (kiemtratangdan(b, nb) == true)
			{
				for (int i = 0; i < nb; i++)
					cout << b[i] << " ";
			}
		}
		cout << "\n";
	}
}

int kiemtracon(int a[], int n, int b[], int m)
{
	int Start;
	for (int i = 0; i < m; i++)
	{
		if (b[i] == a[0])
		{
			Start = i;
			i = 0;
			for (int j = Start; j < Start + n; j++)
			{
				if (a[i] != b[j])
					return 0;
				i++;
			}
		}
	}
	return 1;
}

void xaydungmang_307(int a[], int n)
{
	int nb = 0;
	int b[1000];
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			b[nb] = a[i];
			nb++;
		}
	}
	for (int i = 0; i < nb; i++)
		cout << b[i] << " ";
}

bool snt(int n)
{
	for (int i = 2; i < n; i++)
		if (n%i == 0)
			return false;
	return true;
}

void xaydungmang_310(int a[], int n)
{
	int nb = 0;
	int b[1000];
	for (int i = 0; i < n; i++)
	{
		if(snt(a[i])==true&&a[i]!=1 )
		{
			b[nb] = a[i];
			nb++;
		}
	}
	for (int i = 0; i < nb; i++)
		cout << b[i] << " ";
}
