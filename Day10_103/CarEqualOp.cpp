#include<iostream>
using namespace std;
class Car
{
	string name;
	int cost;
	public:
	Car(string n,int c)
	{
		name=n;
		cost=c;
	}
	friend void operator==(Car &c1,Car &c2);
	
};
void operator==(Car &c1,Car &c2)
{
		if((c1.name==c2.name) && (c1.cost==c2.cost))
			cout<<"Equivalent"<<endl;
		else
			cout<<"Not Equivalent"<<endl;
}
int main()
{
	Car car1("Santro",500000);
	Car car2("Safari",1000000);
	operator==(car1,car2);
	//car1.operator==(car2)
	car1=car2;
		
}
