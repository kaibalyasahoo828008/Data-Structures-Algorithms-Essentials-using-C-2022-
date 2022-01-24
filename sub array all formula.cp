//
//  main.cpp
//  array all formula
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

void DisplayPair(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            cout<<"("<<A[i]<<","<<A[j]<<")"<<endl;
            
            
            
        }

    }

}

int maximumSum(int A[],int n)
{
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum1=A[i]+A[j];
            if(sum<sum1)
            {
                sum=sum1;
            }
           
            
            
        }

    }
    
    
    return sum1;
    
    
}

void dispalySubarray(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            for(int k=i;k<=j;k++)
            {
                
                cout<<a[k]<<",";
                
                
                
            }
            
            cout<<endl;
            
        }
        cout<<endl;
    }

 
}

void sumOfpair(int a[],int n)
{
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            for(int k=i;k<=j;k++)
            {
              
                sum=sum+a[k];
                
                
                
            }
           if(sum1<sum)
           {
               sum1=sum;
           }
            sum=0;
            
        }
      
    }
    
    
    
    cout<<sum1;
    
    
}

int maximumofSubarraymethod2(int A[],int n)
{
    
    int B[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
        B[i]=sum;
        
    }
    int sum2=B[0];
    
    for(int i=0;i<n;i++)
    {
        if(sum2<B[i])
        {
            sum2=B[i];
        }
        
    }
    
    
    //
    
    return sum;
    
    
    
    
}


int maximumSubarray(int A[],int n)
{
    
    int cs=0;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        cs=cs+A[i];
        if(cs<0)
        {
            cs=0;
        }
        maxsum=max(maxsum,cs);
        
    }
    return maxsum;
    
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
  
    DisplayPair(A, n);
    cout<<maximumSum(A, n)<<endl;
    
    dispalySubarray(A, n);
    sumOfpair(A, n);
    
    
}
