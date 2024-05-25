#include<iostream>
using namespace std;
enum Gender{Male,Female};
enum Week{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
enum Cards{Club=0,Diamond=60,Heart=12,Spades=10
}card;
int main()
{

	Gender gender=Male;
	switch(gender)
	{
		case Male:
			cout<<"Gender is male : "<<endl;
			break;
		case Female:
			cout<<"Gender is Female : "<<endl;
			break;
			default:
			cout<<"Gender can be Male or Female:"<<endl;	
	 } 
	
	Week day;
	day=Wednesday;
	cout<<"Day: "<<day+2<<endl;
	
	card=Diamond;
	cout<<"Size of card is: "<<sizeof(card)<<endl;	
	return 0;
	

}
