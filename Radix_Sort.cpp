#include<iostream>
using namespace std;

int getmax(int a[], int n)
{
      int Max=a[0];
      for(int  i=1; i<n; i++)
      {
         if(a[i]>Max)
         {
                Max=a[i];
         }
      }
      return Max;
}

int Count_Sort(int a[], int n, int pos)
{
               int Count[10], b[n];
                int i=0;
                while(i<10)
                     {
                         Count[i]=0;
                         i++;
                     }

             for(int i=0; i<n; i++)
                   {
                        ++Count[(a[i]/pos)%10];   //count array
                   }
            for( int i=1; i<10; i++)
                  {
                       Count[i]=Count[i]+Count[i-1]; //updated count array
                  }

           for(int i=n-1; i>=0; i--)
                {
                      b[ --Count[ (a[i]/pos)%10 ] ]=a[i];
                }

        for(int i=0; i<n; i++)
                a[i]=b[i];
}


int Radix_Sort(int a[], int n)
{
                int m=getmax(a,n);
                for(int pos=1;  m/pos>0;  pos*=10)
                {
                                Count_Sort(a, n, pos);
                }
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
//CALLING OF RADIX_SORT
Radix_Sort(a, n);

//printing array after sorting
cout<<endl<<"Updated Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
}
