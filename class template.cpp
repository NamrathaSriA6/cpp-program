#include<iostream>
using namespace std;
template<class t>
class sample
{
	private:
	t x,y;
	public:
	void getdata()
	{
		cout<<"enter x&y"<<endl;
		cin>>x>>y;
	 } 
	 void add()
	 {
	 	cout<<"sum="<<x+y<<endl;
	 }
 };
 int main()
 {
 	sample <int>s1;
 	s1.getdata();
 	s1.add();
 	sample <float>s2;
 	s2.getdata();
 	s2.add();
 }

