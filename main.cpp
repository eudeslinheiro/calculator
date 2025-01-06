//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//


#include <iostream>
using namespace std;

int main() {
    
    int firstNo, secondNo, result, choice;
    cout<<"Enter The First No.: ";
    cin>>firstNo;
    cout<<"Enter The Second No.: ";
    cin>>secondNo;
    cout<<"Which Mathematical Operation Would You Like To Perform? \n1) Addition\n2) Subtraction\n3) Division\n4) Multiplication\nYour Choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            result=firstNo+secondNo;
            cout<<"The Result Of The Addiction is: "<<result<<endl;
            break;
        case 2:
            result=firstNo-secondNo;
            cout<<"The Result Of The Subtraction is: "<<result<<endl;
            break;
        case 3:
            result=firstNo/secondNo;
            cout<<"The Result Of The Division is: "<<result<<endl;
            break;
        case 4:
            result=firstNo*secondNo;
            cout<<"The Result Of The Multiplication is: "<<result<<endl;
            break;
        default:
            cout<<"Invalid Choice, Exiting..."<<endl;
    }
    return 0;
}
