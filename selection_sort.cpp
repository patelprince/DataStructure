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
                cout<<"Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";

                               //Logic for selection sort
for(int i=0; i<n-1; i++)
{
         int Min=i;

          for(int j=i+1; j<n; j++)
          {
                if(a[j]<a[Min])
                {
                     Min=j;

                }
          }
          if(Min!=i)
                swap(a[i],a[Min]);
}
cout<<endl<<"After Sorting Array becomes:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
}
