
//
//  main.cpp
//  450
//
//  Created by KAIBALYA SAHOO on 20/03/2021.
//

#include <iostream>
using namespace std;





int main()
{
    char sentence[1000];
    char temp=cin.get();
    int len=0;
    while(temp!='#')
    {
        sentence[len++]=temp;
        temp=cin.get();
        
        
    }
    sentence[len]='\0';
    cout<<sentence<<endl;
}
