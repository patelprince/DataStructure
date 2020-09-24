#include<iostream>
using namespace std;

//Logic for Quick sort
//PARTITION FUNCTION
int Partition(int a[], int n, int lb, int ub)
{
    int Start=lb;
    int End=ub;
    int pivot=a[lb];

    while(Start<End)
    {
             while(a[Start]<=pivot)
                           {
                                Start++;
                            }
             while(a[End]>pivot)
                            {
                                End--;
                            }
             if(Start<End)
                            {
                                swap(a[Start], a[End]);
                            }
    }
    swap(a[lb],a[End]);     //NOW this is the backbone of the quick sort
    return End;
}

int Quick_Sort(int a[], int n, int lb, int ub)     //for this we need partition function
{
    if(lb<ub)
    {
        int loc;
        loc=Partition(a, n, lb, ub);
        Quick_Sort(a, n, lb, loc-1);
        Quick_Sort(a, n, loc+1, ub);
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
 int lb=0, ub=n-1;
Quick_Sort(a,n,lb,ub);     //calling a quick sort function

cout<<endl<<"After Quick Sort Array is:: ";
                for(int i=0; i<n; i++)
                               cout<<a[i]<<" ";
}
