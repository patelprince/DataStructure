#include<iostream>
#include<algorithm>  //for sorting the array
using namespace std;

//LOGIC FOR BINARY SEARCH
int Binary_Search(int a[], int n, int data)
{
      int l=0, r=n-1;
      int mid= (l+r)/2;

     while(l<=r)
     {
          if(data==a[mid])
                return mid;

         else if(data>a[mid])
                l=mid+1;

         else
                r=mid-1;
        mid=(l+r)/2;
     }
     return 0;
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
                cout<<"Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
sort(a, a+n);
                cout<<endl<<"Sorted Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
//Binary_Search
cout<<endl<<endl<<"Enter the element you want to search:: ";
int data;
cin>>data;
int ans;
ans=Binary_Search(a,n,data);      //this will give either '0' or the index at which searched element  is found.

if(ans)
cout<<data<<" is present at "<<ans<<"th position.";

else
cout<<data<<" is not present.";
}
