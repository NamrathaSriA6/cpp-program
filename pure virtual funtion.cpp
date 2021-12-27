#include<iostream>
using namespace std;
class a
{
	public:
		virtual void show()=0;
};
class b:public a
{
	public:
		void show()
		{
			cout<<"show() of b class"<<endl;
		}
};
class c:public a
{
	public:
	void show()
	{
		cout<<"show() of c class";
	}
};
main()
{
	c C,*cptr;
	b B,*bptr;
	bptr=&B;
	bptr->show();
	cptr=&C;
	cptr->show();
}
