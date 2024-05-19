#include<iostream>
using namespace std;
class Test
{
	static int cnt1;
	static int cnt2;
	
	public:
		static int getCnt1()
		{
			return cnt1;
		}
		static int getCnt2()
		{
			return cnt1;
		}
		
		Test()
		{
			cout<<this;
			cnt1++;
			cout<<"Constructor is called "<<endl;
		}
		~Test()
		{
			cout<<this;
			cnt2++;
			cout<<"Destructor is called "<<++cnt2<<endl;
		}
};
int Test::cnt1=0;
int Test::cnt2=0;
int main()
{
	Test t1;
	cout<<&t1<<endl;
	Test t2;
	cout<<&t2<<endl;
	cout<<"No of times constructor called is: "<<Test::getCnt1()<<endl;
	//cout<<"No of times destructor called is: "<<Test::getCnt2()<<endl;

}
