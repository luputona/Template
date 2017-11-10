#include<vector>
#include<iostream>

using namespace std;

void main()
{
	vector<int > v1;

	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(15);

	
	
	vector<int > ::iterator itr_first, itr_last, i;

	itr_first = v1.begin();
	itr_last = v1.end();

	//for (i = itr_first; i != itr_last; i++)
	//{
	//	cout << *i << endl;
	//}

	for (auto it = v1.begin() ; it != v1.end() ; it++)
	{
		cout << *it << endl;
		cout << v1[0] << endl;
	}

}