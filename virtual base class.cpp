#include<iostream>
using namespace std;
class a
{
	public:
		void showa()
		{
			cout<<"method of class a"<<endl;
		}
};
class b:virtual public a
{
	public:
		void showb()
		{
			cout<<"method of class b"<<endl;
		}
};
class c:virtual public a
{
	public:
		void showc()
		{
			cout<<"method of class c"<<endl;
		}
};
class d:public b, public c
{
	public:
		void showd()
		{
			cout<<"method of class d"<<endl;
		}
};
int main()
{
	d D;
	D.showa();
	D.showb();
	D.showc();
	D.showd();
	return 0;
}
