#include <iostream>
using namespace std;
 class Point 
{
	public: //if it is private ,it will throw error
    Point()
	{ 
   	cout << "Constructor called";
	}
};

int main()
{
    Point t1;
    return 0;
}

