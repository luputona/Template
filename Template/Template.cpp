#include<iostream>
using namespace std;

template<class T>
T GetMax(T a, T b)
{
	T buf;

	if (a < b)
	{
		buf = 0;
	}
	else
	{
		buf = b;
	}
	return buf;
}

void main1()
{
	int n1 = 1, n2 = 3, ret1;
	double r1 = 1.5, r2 = 3.5, ret2;
	
	ret1 = GetMax(n1, n2);
	ret2 = GetMax(r2, r1);

	cout << "ret1 : " << ret1 << endl;
	cout << "ret1 : " << ret2 << endl;

}