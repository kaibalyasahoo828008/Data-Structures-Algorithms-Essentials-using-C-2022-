//
//  main.cpp
//  Binary exponetial
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//
// mod will be prime number  i.e


#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;

/*
 char a[100];
 char a[100]={'a','b','c','d'}->wrong
 char a[100]={'a','b','c','d','\0'}->right
 char a[100]="abc";
 
 */


int main()
{
    //char a[]={'a','b','c','d','\0'};
    //cout<<a<<endl;
    //
    //cout<<"length of the string"<<strlen(a)<<endl;
    //cout<<"size of the string"<<sizeof(a)<<endl;
    //
   // char b[1000]; /*   by this way you can not store blank space "hello world" it will show hello not world **/
   // cin>>b;
   // cout<<b<<endl;
   
   // char temp=cin.get();
   // int len=1;
   // while(temp!='\n')
   // {
   //     len++;
   //     cout<<temp;
   //     temp=cin.get();
  //
   // }
   // cout<<endl;
   // cout<<len<<endl;
    
   //char temp=cin.get();
   //int len=1;
   //while(temp!='#')
   //{
   //    len++;
   //    cout<<temp;
   //    temp=cin.get();
  
   //}
   //cout<<endl;
   //cout<<len<<endl;
 // char ansk[100];
 //  char temp=cin.get();
 //  int i=0;
 //  while(temp!='\n')
 //  {
 //
 //      ansk[i++]=temp;
 //      temp=cin.get();
 //
 //
 //  }
 //
 // ansk[i]='\0';
 //  cout<<ansk<<endl;
 //
    
   //GIVEN A SENTENCE ,COUNT THE NUMBER OF ALPHABET ,DIGIT AND SPACE IN THE SENTENCE
    
    //int digit=0,charater=0,space=0;
    //   char temp=cin.get();
    //   while(temp!='\n')
    //   {
    //
    //       if(('a'<=temp<='z')|| ('A'<=temp<='Z'))
    //       {
    //           charater++;
    //       }
    //       else if(temp>='0'  || temp<='9')
    //       {
    //           digit++;
    //       }
    //        else if(temp==' ' || temp=='\t')
    //        {
    //            space++;
    //        }
    //       temp=cin.get();
    //
    //   }
    //
    //   cout<<"character"<<charater<<endl;
    //   cout<<"digit"<<digit<<endl;
    //   cout<<"space"<<space<<endl;
    //
    //
    //
    
     /* cin.getline()*/
    
    
    char sentence[1000];
    cin.getline(sentence, 1000,'.');
    cout<<sentence<<endl;
    
}
