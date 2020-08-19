#include <iostream>

using namespace::std;

int find_pos(int x[40],int n, int item);
void insert(int x[40],int n, int item);

int main()
{
    int a[40],n,item;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    cout<<"enter elements(in ascending order)"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter item to insert"<<endl;
    cin>>item;
    insert(a,n,item);
    cout<<"new data:"<<endl;
    for(int i=0;i<n+1;i++)
        cout<<a[i]<<endl;
    return 0;
}
int find_pos(int x[40],int n, int item)
{
    int pos;
    if(item<x[0])
     pos=0;
    else
     {
        for(int i=0;i<n;i++)
        {
            if(item<x[i+1]&&item>x[i])
            pos=i+1;
        }
     }
     return pos;
}
void insert(int x[40],int n, int item)
{
   if(n>=40)
    cout<<"element cannot be inserted space is full"<<endl;
   int k= find_pos(x,n,item);
   for(int i=n-1;i>=k;i--)
    x[i+1]=x[i];
   x[k]=item;
}
