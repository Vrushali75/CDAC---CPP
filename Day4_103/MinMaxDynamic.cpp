#include<iostream>
using namespace std;
class MinMaxDynamic
{
    int *ptr,*ptr1;
    int size;

    public:
    MinMaxDynamic();
    void getData();
    void putData();
    void sortData();
    int mergeData();
    int max();
    int min();
};
MinMaxDynamic::MinMaxDynamic()
{
    cout<<"Enter size of array: "<<endl;
    cin>>size;
}
void MinMaxDynamic::getData()
{
    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
}
void MinMaxDynamic::putData()
{
    cout<<"Entered array elements are: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<" "<<ptr[i];
    }
    cout<<endl;
}
int MinMaxDynamic::max()
{
    int max=ptr[0];
    for(int i=1;i<size;i++)
    {
        if(max>ptr[i])
            max=ptr[i];
    }
    return max;
    //cout<<"Maximum Number is: "<<max;
}
int MinMaxDynamic::min()
{
    int min=ptr[0];
    for(int i=1;i<size;i++)
    {
        if(min<ptr[i])
            min=ptr[i];
    }
    return min;
    //cout<<"Minimum Number is: "<<min;
}
void MinMaxDynamic::sortData()
{
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    cout<<"Sorted elements of an array is:"<<endl;
    for(int i=0;i<size;i++)
        cout<<" "<<ptr[i];
    cout<<endl;
}
// int MinMaxDynamic::mergeData()
// {
//     cout<<"Enter elements for array 2: "<<endl;
//     for(int i=0;i<size;i++)
//         cin>>ptr1[i];
    
//     //Merge array
//     for(int i=0;i<size;i++)
//     {
//         int merge[i]=ptr[i]+ptr1[i];
//     }
// }
int main()
{
    MinMaxDynamic obj;
    obj.getData();
    obj.putData();
    obj.sortData();
    cout<<"Maximum number is: "<<obj.min()<<endl;
    cout<<"Minimum number is: "<<obj.max()<<endl;

    obj.mergeData();
}