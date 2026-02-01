#include <iostream>
using namespace std;
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("testing the excT") {
	Point<int>* p3 = new Point<int>(3, 3);
	Point<int>* p2 = new Point<int>(2, 2, p3);
	Point<int>* p1 = new Point<int>(1,1, p2);

	p1->ToString();
	Point<int> pAnswer = p1->Compare();
	
	Point<string>* p4 = new Point<string>("h","w",p1);
	Point<string>* p5 = new Point<string>("h", "w", p4);
	Point<string>* p6 = new Point<string>(3.6, 5.5);


}

//#include <string>
//#include <iostream>
//using namespace std;
//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
//#include "include/doctest.h"
//
//template<typename T>
//class Point {
//private:
//	T x;
//	T y;
//	Point* next;
//
//public:
//	Point(T x, T y, Point* next = nullptr) : x(x), y(y), next(next)
//	{
//		//this->x = x;
//		//this->y = y;
//		//this->next = next;
//	}
//
//	void ToString()
//	{
//		std::cout << "x: " << x << ", y: " << y << ", next: " << next << std::endl;
//	}
//
//	Point<T> Compare()
//	{
//		if (!next)
//		{
//			return Point<T>(x, y);
//		}
//		return Point<T>(next->x - x, next->y - y);
//	}
//
//	Point<std::string> CompareString()
//	{
//		std::cout << "Can't compare strings" << std::endl;
//		return Point<std::string>("", "");
//	}
//
//	template<typename Y>
//	Point<T> Try(Y y)
//	{
//		T newY = static_cast<T>(y);
//		Point<T>* newPoint = new Point<T>(x, newY, next);
//		return *newPoint;
//	}
//
//};
//
//TEST_CASE("testing the excT") {
//	Point<int>* p3 = new Point<int>(3, 3);
//	Point<int>* p2 = new Point<int>(2, 2, p3);
//	Point<int>* p1 = new Point<int>(1, 1, p2);
//
//	p1->ToString();
//	Point<int> pAnswer = p1->Compare();
//
//	Point<string>* p4 = new Point<string>("h", "w", p1);
//	Point<string>* p5 = new Point<string>("h", "w", p4);
//	Point<string>* p6 = new Point<string>(3.6, 5.5);
//
//
//}