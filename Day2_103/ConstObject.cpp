//Constant object in CPP
#include<iostream>
using namespace std;
class ABC
{
	public:
	int A;
	ABC()
	{
		A=10;
	}
	
};
int main()
{
	const ABC obj;
	cout<<"Value of A: "<<obj.A<<endl;
	//obj.A=20;// Not allowed, it a read only object (Only constant object)
//	cout<<"Changed Value of A: "<<obj.A<<endl;
	return 0;
}
