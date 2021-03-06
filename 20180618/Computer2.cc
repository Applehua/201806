 ///
 /// @file    Computer1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-18 08:01:46
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Complex
{
public:
	Complex(float dreal,float dimag)
	:_dreal(dreal)
	 ,_dimage(dimag)
	{
		cout<<"我是构造函数"<<endl;
	}
	void display()const
	{
		cout<<_dreal;
		if(_dimage>0){
			cout<<"+"<<_dimage<<"i"<<endl;
		}else if(_dimage<0){
			cout<<_dimage<<"i"<<endl;
		}
		else{
			cout<<endl;
			return;
		}
	}
	double getReal()const
	{
		return _dreal;
	}
	double getImage()const
	{
		return _dimage;
	}
private:
	float _dreal;
	float _dimage;
};
//运算符重载之普通函数（自由函数）
Complex operator +(Complex &lhs,Complex &rhs)
{
	return Complex(lhs.getReal()+rhs.getReal(),lhs.getImage()+rhs.getImage());
}
int main(void)
{
	Complex c1(1,2);
	Complex c2(1,0);
	Complex c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
