#include<iostream>
using namespace std;
class dob
{
	private:
		int dd,mm,yy;
		public:
			void show()
			{
				cout<<"enter day,month and year";
				cin>>dd>>mm>>yy;
				cout<<dd<<"-"<<mm<<"-"<<yy;
			}
};
class student
{
	private:
		string name;
		int pinno;
		dob d;
		public:
			void display()
			{
				cout<<"enter name and pinno:";
				cin>>name>>pinno;
				cout<<"name="<<name<<endl;
				cout<<"pinno="<<pinno<<endl;
				d.show();
			}
};
int main()
{
	student s;
	s.display();
}
