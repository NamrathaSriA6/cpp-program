#include<iostream>
using namespace std;
class date
{
	private:
		int dd,mm,yy;
		public:
			void setdate()
			{
				cout<<"enter day,month,year"<<endl;
				cin>>dd>>mm>>yy;
			}
			void show()
			{
				cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
			}
			void operator ++()
			{
				dd++;
				if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
				{
					if(dd>31)
					{
						dd=1;
						mm++;
						if(mm>12)
						{
							mm=1;
							yy++;
						}
					}
				}
				else if(mm==4||mm==6||mm==9||mm==11)
				{
					if(dd>30)
					{
						dd=1;
						mm++;
					}
				}
				else
				{
					if(yy%4==0&&yy%100!=0||yy%400==0)
					{
						if(dd>29)
						{
							dd=1;
							mm++;
						}
					}
					else
					{
						if(dd>28)
						{
							dd=1;
							mm++;
						}
					}
				}
				
			}
};
int main()
{
	date d;
	d.setdate();
	cout<<"current date:";
	d.show();
	++d;
	d.show();
}

