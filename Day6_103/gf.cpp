/*#include<iostream>
using namespace std;
class Circle
{
    public: 
        double radius;
         
        double  compute_area()
        {
            return 3.14*radius*radius;
        }
     
};
int main()
{
    Circle obj;
     
    // accessing public datamember outside class
    obj.radius = 5.5;
    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area();
    return 0;
}
*/
#include<iostream>

//#include <bits/stdc++.h>
using namespace std;
class Parent
 {
 	public:
 		int id_p;
 		void set_display1()
 		{
 			
		 }
	protected:
	int id_pro; 
};
class Child : public Parent {
public:
    int id_c;
   void set_display()
    {
            id_pro=10;
            cout<<id_pro;
}
};
 int main()
{
    Child obj1;
     // An object of class child has all data members and member functions of class parent
    obj1.id_c = 7;
    obj1.id_p = 91;
   // obj1.id_pro=7;//ERROR
   //THRU DERIVED CLASS OBJ WE CAN ACCESS BASE CVLASS AS WELL AS DERIVED CLASS DATAS MEMBERS
    cout << "Child id is: " << obj1.id_c << '\n';
    cout << "Parent id is: " << obj1.id_p << '\n';
    obj1.set_display1();
    obj1.set_display();
    cout<<sizeof(obj1);
    return 0;
    
}

