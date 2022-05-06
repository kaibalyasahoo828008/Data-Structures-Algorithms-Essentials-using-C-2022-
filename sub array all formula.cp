//
//  main.cpp
//  array all formula
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;

void DisplayPair(int A[],int n)                    //this will show the all the possible index for "i" and "j" 
{
    for(int i=0;i<n;i++).                          //enter the size of array

    {
        for(int j=0;j<n;j++)
        {
            
            cout<<"("<<A[i]<<","<<A[j]<<")"<<endl;
            
            
            
        }

    }

}
/*5
1
2
3
4
5
(1,1)
(1,2)
(1,3)
(1,4)
(1,5)
(2,1)
(2,2)
(2,3)
(2,4)
(2,5)
(3,1)
(3,2)
(3,3)
(3,4)
(3,5)
(4,1)
(4,2)
(4,3)
(4,4)
(4,5)
(5,1)
(5,2)
(5,3)
(5,4)
(5,5)*/




/********************************************************************************************************************************************************/
//
//  main.cpp
//  code cesf
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>

using namespace std;


void Max_Subarray(int A[],int n)
{
    int sum=0,B[(n*(n+1))/2],m=0,max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
               
             sum=sum+A[k];//to store the sum of a sub_array
            }
          B[m++]=sum;
          sum=0;
 
        }
    }
    
    for(int l=0;l<m;l++)
    {
     if(B[l]>max)
    max= B[l];
    }
    cout<<max;
}
int main()
{
    int numb;
    cout<<"enter the number of elements in array"<<endl;
    cin>>numb;
    int A[numb];
    
    for(int i=0;i<numb;i++)
    {
        cin>>A[i];
    }
    
    Max_Subarray(A,numb);
    
    
}


/********************************************************************************************************************************************************/

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
