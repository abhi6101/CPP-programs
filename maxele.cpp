
#include <iostream>
using namespace std;

int main() {
   int n ;
   cout<<"enter the values of n ";
   cin>>n;
   int arr[n];
   
   cout<<"enter " <<n<<"elements";
   
   for(int i = 0 ; i<5;i++){
       cin>>arr[i];
   }
   int maxval = arr[0];
   
   for(int i =0 ;i<n;i++){
       if(arr[i] > maxval)
       {
           maxval = arr[i];
       }
   }
   cout<<"maxval :" <<maxval;
   
   

    return 0;
}