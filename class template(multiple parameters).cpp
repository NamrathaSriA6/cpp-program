#include<iostream>
using namespace std;
template<class t1,class t2>
class sample
{
	private:
		t1 a;
		t2 b;
		public:
			void getdata()
			{
				cout<<"enter a and b values"<<endl;
				cin>>a>>b;
				
			}
			void display()
			{
				cout<<"displaying values"<<endl;
				cout<<"a="<<a<<endl;
				cout<<"b="<<b<<endl;
			}
};
int main()
{
	sample <int,int>s1;
	sample <int,char>s2;
	sample <int,float>s3;
	cout<<"two integer data"<<endl;
	s1.getdata();
	s1.display();
	cout<<"integer and character data"<<endl;
	s2.getdata();
	s2.display();
	cout<<"integer and float data"<<endl;
	s3.getdata();
	s3.display();
	return 0;
}

