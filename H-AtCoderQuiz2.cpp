#include<iostream>
using namespace std;
int main()
{
    int a{0};
    cin>>a;
    if(a<=39)
    {
     
            cout<<40-a;
        
    }
    else if(a<=69)
    {
       
        
            cout<<70-a;
        
    }
    else if(a<=89)
    {
        
       
            cout<<90-a;
        
    }
    else
    {
        cout<<"expert";
    }
}