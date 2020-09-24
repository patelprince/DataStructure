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
                  {
                              cout<<a[i]<<" ";
                  }

                  // logic for Linear_Search
cout<<endl<<endl<<"Enter the element you want to search:: ";
int data;
int found=0;
cin>>data;

  for(int i=0; i<n; i++)
  {
        if(a[i]==data)
        {
            cout<<data<<" is present at index "<<i<<".";
            found++;
        }
  }
  if(found==0)
                cout<<data<<" is not present in this array.";   //for this we need found variable
}
