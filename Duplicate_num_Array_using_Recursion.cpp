#include <iostream>
using namespace std;
int siz;
void duplicate(int arr[],int m);
void duplicate(int arr[],int m)
{
    for(int i=m+1;i<siz;i++)
        {
        if(arr[m]==arr[i])
        {
           cout<<"Number "<<arr[i]<<" is same at the Index "<<m<<" and "<<i<<endl;

        }
    }
    m++;
    if(m!=siz)
    {
        duplicate(arr,m);
    }
}


int main()
{
    cout<<"Enter the Size of Array\n";
    cin>>siz;
    int arr[siz];
    cout<<"Enter Elements in Array\n";
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    duplicate(arr,0);


    return 0;
}

