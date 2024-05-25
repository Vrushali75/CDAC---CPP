#include<iostream>
using namespace std;
class Animal
{
	public:
		virtual void speaks()
		{
			cout<<"Animal speaks"<<endl;
		}
};
class Dog:public Animal
{
	public:
		void speaks()
		{
			cout<<"Dog barks"<<endl;
		}
};
class Cat:public Animal
{
	public:
		void speaks()
		{
			cout<<"Cat meows"<<endl;
		}
};
int main()
{
	Animal* animal=new Dog();
	Dog* dog=dynamic_cast<Dog*>(animal);
	if(dog)
	{
		dog->speaks();
	}
	return 0;
}
