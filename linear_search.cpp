#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int a[20];
    cout<<"Enter the size & array:";
    cin>>n;
    cout<<"Enter"<<n<<"integers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    
    }
    int x;
    cout<<"Enter the target element search for:";
    cin>>x;
    int location = linear_search( a,n,x);
    if (location !=-1)
    {
        cout<<"Element"<<x<<"found at index:"<<location<<endl;
    }
    else
    {
        cout<<"Element"<<x<<"Not found in array"<<endl;
    }
    return 0;
}
PS D:\sanskar150> g++ linear_search.cpp
PS D:\sanskar150> ./linear_search
Enter the size & array:5     
Enter5integers:
10
20
30
40
50
Enter the target element search for:30
Element30found at index:2