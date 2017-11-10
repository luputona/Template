#include <iostream>
using namespace std;

template<class T>
class Rectangle
{
public:
	T left, top, width, height;
public:
	//Rectangle() {}
	Rectangle(T n1, T n2, T n3, T n4)
	{
		left = n1;
		top = n2;
		width = n3;
		height = n4;
	}

	T GetRight()
	{
		return left + width;
	}
	T GetBottom()
	{
		return top + height;
	}
};

void main2()
{
	Rectangle<int> rect1(50,50,100,100);
	cout << rect1.GetRight() << endl;

	Rectangle<double> rect2(50.5, 50.5, 100.5, 100.5);
	cout << rect2.GetRight() << endl;
}