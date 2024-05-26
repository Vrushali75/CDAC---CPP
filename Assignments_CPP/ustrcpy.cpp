#include<iostream>
using namespace std;
 int strc(char* p,char* q);
 int main(){
	
	char a[10],b[9];
	int len;
	cout<<"Enter string:"<<endl;
	cin>>a;
	
	
	len=strc(b,a);
	
	cout<<"Copied string is:  "<<b<<" and its length is : "<<len<<endl;	
	
}
int strc(char* p,char* q){
	int i=0,len;
	while(*q!='\0'){
		
		*p=*q;
		p++;
		q++;
		len++;
		
	}

  	*p='\0';
  	return len;
  	
}

