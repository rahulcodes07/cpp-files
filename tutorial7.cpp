#include<iostream>
using namespace std;

int main()  {
    // int n;
    // cout<<"Enter the table you want: ";
    // cin>>n;

    // for(int i=1; i<=10; i++){
        
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    // }

// int i=1;
//   do{
//     cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     i++;
//   }while(i<=10);

int n=30;


 for(int i=1; i<=n; i++){
      if(i%5==0){
        continue;
      }
   
      cout<<i<<endl;
 }


    return 0;
}