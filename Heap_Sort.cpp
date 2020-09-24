#include<iostream>
using namespace std;
//main logic
void maxheapify(int a[], int n, int i)
{
                int largest =i;
                int l=(2*i);
                int r=(2*i)+1;
                while(l<=n && a[l]>a[largest])
                                largest=l;
                while(r<=n && a[r]>a[largest])
                                largest=r;

                if(largest != i)
                {
                                swap(a[largest], a[i]);
                                maxheapify(a,n,largest);
                }
}
//used to build a max heap
void heap_sort_build(int a[], int n)
{
                for(int i=n/2; i>=1; i--)
                 maxheapify(a,n,i);
}
//used to print elements in a sorting order
void heap_sort_delete(int a[], int n)
{
           //for(int i=n; i>=1; i--)
           while(n!=0)
                {
                              swap(a[1],a[n]);
                              n=n-1;
                              maxheapify(a,n,1);
                }
}
int main()
{
                int n;
                cout<<"Enter the size of an array:: ";
                cin>>n;

                int a[n];
                cout<<"Enter Elements:: "<<endl;
                for(int i=1; i<=n; i++)
                                cin>>a[i];
                cout<<"Heap(CBT) is:: ";
                for(int i=1; i<=n; i++)
                               cout<<a[i]<<" ";

heap_sort_build(a, n);
cout<<endl<<"Heap(CBT) after building is:: ";
                for(int i=1; i<=n; i++)
                               cout<<a[i]<<" ";

heap_sort_delete(a, n);
cout<<endl<<"Heap(CBT) after deleting is:: ";
                for(int i=1; i<=n; i++)
                               cout<<a[i]<<" ";
}
