

#include<iostream>
using namespace std;

int main()  {

int n=30;


 for(int i=1; i<=n; i++){
      if(i%5==0){
        continue;
      }
   
      cout<<i<<endl;
 }

//  int num;

//  cout<<"Enter the numbers.(Enter a negative number to stop.)"<<endl;

// while(true){
//     cin>>num;

//     if(num<0){
//         cout<<"No greater number found";
//         break;
//     }

//     if(num>50){
//         cout<<"The greater number is "<<num;
//         break;
//     }
// }

 

int n;
 cout<<"Enter the number till which you want to print odd numbers: ";
 cin>>n;

 for(int i=1; i<=n; i++){
    if(i%2==0){
        continue;
    }
    cout<<i<<endl;
 }

  int number;

  cout<<"ENTER NUMBERS (Enter a negative number to stop)"<<" ";

  while(true){
    cin>>number;

    if(number<0){
        cout<<"Negative number found: "<<number;
        break;
    }
  }



    return 0;
}