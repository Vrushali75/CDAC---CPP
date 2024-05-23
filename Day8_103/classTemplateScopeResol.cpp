#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
		T a,b;
		void display(T,T);
};
template<class T>
void A<T>::display(T a,T b)
{
	cout<<"Values are: "<<a<<" "<<b<<endl;
};
int main()
{
	A<int> a;
	a.display(20,30);
	A<char> c;
	c.display('A','N');
}
