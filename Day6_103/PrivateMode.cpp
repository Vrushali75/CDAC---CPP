#include <iostream> 
using namespace std; 
  
class Base { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
public: 
    int pub = 3; 
  // function to access private member 
    int getPVT() { return pvt; } 
    int getPub() { return pub; } 
}; 
 class PrivateDerived : private Base { 
public: 
    // function to access protected member from Base 
    int getProt() 
{
//prot=10;
 return prot; 
} 
    
}; 
  
int main() 
{ 
    PrivateDerived object1; 
    cout << "Private cannot be accessed." << endl; 
    cout << "Protected = " << object1.getProt() << endl; 
   // cout << "Public = " << object1.getPub() << endl; 
    return 0; 
}