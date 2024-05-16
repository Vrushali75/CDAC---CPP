#include <iostream>
using namespace std;
 class Point 
{
	public: 
    Point()
	{ 
   	cout << "Constructor called";
	}
};

int main()
{
    Point t1,*t2; //only t1 is considered as an object 
    return 0;
}

