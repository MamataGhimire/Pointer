#include <iostream>
using namespace std;

void MaxMini(int num[5],int *max,int *mini )
   {
       *mini=*max=num[0];
     for(int i=1;i<5;i++)
     {
         if(num[i] < *mini)
           {
             *mini=num[i];
           }
           
          if(num[i] > *max)
          {
              *max=num[i];
          }
      }
     
   }

int main() {
    
    int num[5]={2,3,1,7,8};
    int mini,max;
    MaxMini(num,&max,&mini);
    cout<<"minimum : "<<mini<<endl;
    cout<<"maximum : "<<max;

    return 0;
}

  
