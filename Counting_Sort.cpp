#include<iostream>
using namespace std;

//logic for counting sort
int Count_Sort(int a[], int n)
{
                int k;
                cout<<endl<<"Enter the Value of K(Largest Element of an array):: ";
                cin>>k;
                int Count[k+1],b[n];
                int i=0;
                while(i<k+1)
                     {
                         Count[i]=0;
                         i++;
                     }

             for(int i=0; i<n; i++)
                   {
                        ++Count[a[i]];   //count array
                   }
            for( int i=1; i<=k+1; i++)
                  {
                       Count[i]=Count[i]+Count[i-1]; //updated count array
                  }

           for(int i=n-1; i>=0; i--)
                {
                      b[--Count[a[i]]]=a[i];
                }

        for(int i=0; i<n; i++)
                a[i]=b[i];
}
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

Count_Sort(a,n);
cout<<endl<<endl<<"After Sorting Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
}
