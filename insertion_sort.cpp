#include<iostream>
using namespace std;
int main()
{
                int n;
                cout<<"Enter total no of elements in an array:: ";
                cin>>n;

                int a[n];
                cout<<"Enter Elements:: "<<endl;
                for(int i=0; i<n; i++)
                                cin>>a[i];
                cout<<"Before Sorting Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
//logic for insertion sort
for(int i=1; i<n; i++)
{
        int temp=a[i];
        int j=i-1;

        while(j>=0 && a[j]>temp)
        {
               a[j+1]=a[j];
               j--;
        }
        a[j+1]=temp;
}

cout<<endl<<"After Sorting Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
}
