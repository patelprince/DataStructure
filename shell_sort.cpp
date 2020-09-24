#include<iostream>
using namespace std;
int main()
{
                int n;
                cout<<"Enter the size of an array:: ";
                cin>>n;

                int a[n];
                cout<<"Enter Elements:: "<<endl;
                for(int i=0; i<n; i++)
                                cin>>a[i];
                cout<<"Before Sorting is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";

                               //logic for shell sort
for(int gap =(n/2);  gap>=1; gap=gap/2)
{
                for(int j=gap; j<=n; j++)
                {
                                for(int i=j-gap; i>=0; i-gap)
                                {
                                      if(a[i+gap]>a[i])
                                      {
                                           break;
                                      }
                                      else
                                                swap(a[i+gap], a[i]);
                                }
                }
}
cout<<endl<<"After Sorting is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
}
