#include <string>
#include <iostream>
using namespace std;

template<typename T>
class Point {
private:
	T x;
	T y;
	Point* next;

public:
	Point(T x, T y, Point* next = nullptr) : x(x), y(y), next(next) 
	{
		//this->x = x;
		//this->y = y;
		//this->next = next;
	}

	override ToString()
	{
		std::cout << "x: " << x << ", y: " << y << ", next: "<< next << std::endl;
	}

	Point<T> Compare()
	{
		if (!next)
		{
			return Point<T>(x, y);
		}
		return Point<T>(next->x - x, next->y - y);
	}

	Point<T> Compare<string>()
	{
		std::cout << "Can't compare strings" << std::endl;
		return NULL;
	}

	template<typename Y>
	Point<T> Try(Y y)
	{
		T newY = static_cast<T>(y);
		Point<T>* newPoint = new Point<T>(x, newY, next);
		return newPoint;
	}

	~Point() {}

};