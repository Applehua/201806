 ///
 /// @file    Point1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-18 08:19:15
 ///
//友元函数之全局函数（普通函数，自由函数）
#include <math.h>
#include <iostream>
using std::cout;
using std::endl;
class Point
{

friend float distance(const Point &lef,const Point &ref);
public:
	Point(int ix=0,int iy=0)
	:_ix(ix)
	 ,_iy(iy)
	{
		cout<<"我是构造函数"<<endl;
	}
	void print()
	{
		cout<<"("<<_ix
			<<","<<_iy
			<<")";
	}
private:
	int _ix;
	int _iy;
};
float distance(const Point &lef,const Point &ref)
{
	return sqrt((lef._ix-ref._ix)*(lef._ix-ref._ix)+(lef._iy-ref._iy)*(lef._iy-ref._iy));
}
int main(void)
{
	Point p1(1,2);
	Point p2(3,4);
	p1.print();
	cout<<"----->";
	p2.print();
	cout<<"的距离："<<distance(p1,p2)<<endl;
	return 0;
}
