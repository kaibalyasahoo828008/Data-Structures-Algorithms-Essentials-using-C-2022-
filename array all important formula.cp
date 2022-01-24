//
//  main.cpp
//  array all formula
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

int LinearSearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
            return i;
    }
    
    return  -1;
    
    
    
}
int BinarySearch(int a[],int n,int key,int mid)
{
    int last=n-1,first=0;
    if(key==a[mid])
    {
        return 1;
    }
    else if(key>a[mid])
    {
        mid=(mid+last)/2;
        return(a,n,key,mid);
    }
    else
    {
        mid=(mid+first)/2;
        return(a,n,key,mid);
    }
    
    
}

int BinarySearchmethod_2(int a[],int n,int key)
{
    int first=0;
    int Last=n-1;
    while(first<Last)
    {
        int mid=(first+Last)/2;
        if(a[mid]==key)
        {
            return mid;
        }
     else if (a[mid]>key)
     {
         Last=mid-1;
     }
      else
      {
          first=mid+1;
      }
        
        
        //the time complexity of binary search is logn;
        
    }
    
    return -1;
   
    
}

void reverse(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(a[i],a[n-1-i]);
        
        
        
        
        
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
}


void reverse1(int a[],int n)
{
    int first=0;
    int last=n-1;
    while(first<last)
    {
        swap(a[first],a[last]);
        first++;
        last--;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    
    
    
    
    
    
}








int main()
{
    cout<<"enter the size of array"<<endl;
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>A[i];
    }
    cout<<"enter the key you want to find"<<endl;
    int key;
    cin>>key;
   if( BinarySearch(A, n, key,(n-1)/2)==1)
   {
       cout<<"number is present"<<endl;
       
   }
    else
    {
        cout<<"number is not present"<<endl;
    }
    
    reverse1(A,n);
    
    
   /* for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    */
    
    
    
    
    
    
    
    
    
    
}
