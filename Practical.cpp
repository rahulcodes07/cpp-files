
#include<iostream>
using namespace std;

int main()  {

// int n;
// cout<<"Enter the number of lines to be printed: ";
// cin>>n;

// int m;
// cout<<"Enter the number of stars to be printed in a single line: ";
// cin>>m;

// for(int i=1; i<=n; i++){
    
//     for(int i=1; i<=m; i++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }





// int sum=0;
// int n;
// cout<<"Enter n: ";
// cin>>n;

// for(int i=1; i<=n; i++){
//     if(i%3==0){
//         sum+=i;
//     }
// }

// cout<<"Sum of all numbers till "<<n<<" divisible by 3 is: "<<sum;





// int n ;
// cout<<"Enter number to be checked";
// cin>>n;


// for(int i=2; i<n;  i++){

//   if(n%i==0){
//       cout<<"Non Prime number.";
//       break;
//   }else{
//       cout<<"Prime number";
//   }
// }

// int factorial=1;

// int n;
// cout<<"Enter the number whose factorial you want: ";
// cin>>n;

// for(
//     int i=1; i<=n; i++){
//         factorial*=i;
//     }

//     cout<<"Factorial of "<<n<<" is: "<<factorial;

// int n;
// cout<<"Enter the number of lines to be printed: ";
// cin>>n;

// char ch= 'A';

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }


// int n;
// cout<<"Enter the maximum number: ";
// cin>>n;

// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout<<i+1;
        
//     }
    
//     cout<<endl;
// }

// int num=1;
// int n;
// cout<<"Enter the maximum number: ";
// cin>>n;

// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout<<num<<" ";
        
//     }
//     num++;
//     cout<<endl;
// }


// int n;
// cout<<"Enter the maximum number: ";
// cin>>n;

// for(int i=0; i<n; i++){
//     int num=1;
//     for(int j=0; j<i+1; j++){
//         cout<<num<<" ";
//         num++;
        
//     }
    
//     cout<<endl;
// }

// int n;
// cout<<"Enter the maximum number: ";
// cin>>n;

// for(int i=0; i<n; i++){
    
//     for(int j=i+1; j>0; j--){
//        cout<<j<<" ";
        
//     }
    
//     cout<<endl;
// }

// char ch='A';

// int n=4;

// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }

// int n=5;
// for(int i=0; i<n; i++){
    

//     for(int j=i; j>=0; j--){
//         cout<< char('A'+ j)<<" ";
        
//     }
//     cout<<endl;
// }


// int n=4;

// for(int i=0; i<n; i++){
//     for(int j=0; j<i; j++){
//     cout<<" ";
//     }
//     for(int j=0; j<n-i; j++){
//         cout<< char('A'+i)<<;
//     }
//     cout<<endl;
// }

// int n=5;

// for(int i=0; i<n; i++){
//     //   FOR SPACES
//   for(int j=0; j<n-i-1; j++){
//     cout<<" ";
//   }

//   //     FOR NUMBER 1
//   for(int j=1; j<=i+1; j++ ){
//     cout<<j;
//   }

//   //     FOR NUMBER 2
//   for(int j=i; j>=1; j--){
//     cout<<j;
//   }
// cout<<endl;
// }

//  BUTTERFLY PATTERN
int n; 
cout<<"Enter the maximum number of stars: ";
cin>>n;


//   PART ONE

for(int i=0; i<n; i++){

    for(int j=0; j<i+1; j++){
        cout<<"*";
    }

    for(int j=1; j<=n-i-1; j++){
        cout<<" ";
    }

    for(int j=1; j<=n-i-1; j++){
        cout<<" ";
    }

    for(int j=0; j<i+1; j++){
        cout<<"*";
    }
    cout<<endl;
}

//   PART TWO

for(int i=0; i<n; i++){

    for(int j=0; j<n-i; j++){
        cout<<"*";
    }

    for(int j=0; j<i; j++){
        cout<<" ";
    }

    for(int j=0; j<i; j++){
        cout<<" ";
    }

    for(int j=0; j<n-i; j++){
        cout<<"*";
    }
    cout<<endl;
}









return 0;

}