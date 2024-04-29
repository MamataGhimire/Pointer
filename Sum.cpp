#include <iostream>
using namespace std;
int main() {
   
   int num[]={1,4,7,99,3};
   int sum=0,*p;
   for(p=&num[0];p<&num[5];p++)
   {
       sum=sum+*p;
   }
  cout<<"sum of element of array : "<<sum;
    return 0;
}
