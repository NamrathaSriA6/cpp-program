#include<iostream>
using namespace std;
class base
	{
		public:
			virtual void show()
			{
				cout<<"show() of base class"<<endl;
			}
	};
	class derived:public base
	{
		public:
			void show()
			{
				cout<<"show() of derived class"<<endl;
			}
	};
	int main()
	{
		base b,*bptr;
		bptr=&b;
		bptr->show();
		derived d,*dptr;
		dptr=&d;
		dptr->show();
	}
