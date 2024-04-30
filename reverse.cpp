#include <iostream>
using namespace std;
int main() {
   int a[4],*p;
   cout<<"enter your numbers";
   for(p=a;p<a+4;p++)
   {
       int val;
       cin>>val;
       *p=val;
   }
   for(p=a+3;p>=a;p--)
   {
       
       cout<<*p;
   }
   
   
    return 0;
}
