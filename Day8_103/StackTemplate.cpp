#include<iostream>
#include<string>
#define SIZE 5
using namespace std;
template<class T>
class Stack
{
    int top;
    T stk[SIZE];

    public:
    Stack();
    void push(T e);
    T pop();
    T topElement();
    bool isFull();
    bool isEmpty();

};
template<class T>
Stack<T>::Stack()
{
    top=-1;
}
template<class T>
void Stack<T>::push(T e)
{
    if(isFull())
        cout<<"Stack is full!"<<endl;
    cout<<"Inserted element is: "<<e<<endl;
    top=top+1;
    stk[top]=e;    
}
template<class T>
bool Stack<T>::isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
template<class T>
bool Stack<T>::isFull()
{
    if(top==(SIZE-1))
        return 1;
    else
        return 0;
}
template<class T>
T Stack<T>::pop()
{
    T popped_ele=stk[top];
    top--;
    return popped_ele;
}
template<class T>
T Stack<T>::topElement()
{
    T top_ele=stk[top];
    return top_ele;
}
int main()
{
    Stack<int> s1;
    s1.push(6);
    s1.push(20);
    s1.push(61);
    s1.push(3);
    s1.push(90);

    Stack<string> s2;
    s2.push("CDAC");
    s2.push("IET");
    s2.push("ACTS");
    s2.push("VITA");

    cout<<s1.pop()<<" integer element is removed from the stack"<<endl;
    cout<<s1.topElement()<<" is the top element integer stack"<<endl;

    cout<<s2.pop()<<" string element is removed from the stack"<<endl;
    cout<<s2.topElement()<<" is the string top element in the stack"<<endl;

    return 0;

}