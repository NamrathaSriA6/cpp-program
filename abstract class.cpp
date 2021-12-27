#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void area(int x)=0;
};
class square:public shape
{
	public:
		void area(int x)
		{
			cout<<"area of square="<<x*x<<endl;
		}
};
class circle:public shape
{
	public:
		void area(int x)
		{
			cout<<"area of circle="<<3.14*x*x;
		}
};
int main()
{
	square s,*sptr;
	sptr=&s;
	sptr->area(20);
	circle c,*cptr;
	cptr=&c;
	cptr->area(20);
}
