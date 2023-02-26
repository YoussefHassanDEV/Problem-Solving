#include<iostream>
using namespace std;
int main()
{
    int a{0},b{0},c{0};
    cin>>a>>b>>c;
   
   if(a>b)
   {
       cout<<"Takahashi";
   }
   else if(a<b)
   {
       cout<<"Aoki";
   }
   else if (a==b)
   {
       if(c==0)
       {
           cout<<"Aoki";
       }
       else
       {
           cout<<"Takahashi";
       }
   }
   return 0;
}