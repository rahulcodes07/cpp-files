#include<iostream>
using namespace std;

int main()  {

    cout<<"These are marks: "<<endl;
    int marks[] = {32, 53, 43, 55, 76};
   
    // cout<<marks[0]<<endl;   
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    //Accesing the values of [marks] array using for loop:- 
//    for(int i=0; i<=4; i++){
//     cout<<"The value of marks "<<i<< " is:- "<<marks[i]<<endl;
//    }

//Accessing the values of [marks] array using while loop:- 

// int i=0; 
// while(i<=4){
//   cout<<"The value of mathMarks array "<<i<< " is:- "<<marks[i]<<endl;
//   i++;
// }
//    cout<<"THESE ARE mathMARKS"<<endl;

//     int mathMarks[5];
//     mathMarks[0]=321;
//     mathMarks[1]=341;
//     mathMarks[2]=876;
//     mathMarks[3]=654;
//     mathMarks[4]=632;
    
     //Accesing the values of [mathMarks] array using for loop:- 
    // for(int i=0; i<=4; i++){
    //     cout<<"The value of mathMarks "<<i<< " is:- "<<mathMarks[i]<<endl;
    //    }

    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;
    // cout<<mathMarks[4]<<endl;

   

       //Accesing the values of [mathMarks] array using while loop:- 
    //   int j=0; 
    //   while(j<=4){
    //     cout<<"The value of mathMarks array "<<j<< " is:- "<<mathMarks[j]<<endl;
    //     j++;
    //   }

       // TO CHANGE THE VALUE OF ANY INTEGER:-
    cout<<"Changed value of second integer in marks array: "<<endl;
    marks[2]= 77;
       
    
    int* z=marks;

    // cout<<"The value of *z is: "<<*z<<endl;
    // cout<<"The value of *(z+1) is: "<<*(z+1)<<endl;
    // cout<<"The value of *(z+2) is: "<<*(z+2)<<endl;
    // cout<<"The value of *(z+3) is: "<<*(z+3)<<endl;
    // cout<<"The value of *(z+4) is: "<<*(z+4)<<endl;
    
    for(int i=0; i<=4; i++){
        cout<<"The value of *(z+"<<i<<") = "<<*(z+i)<<endl;

    }



    return 0;
}