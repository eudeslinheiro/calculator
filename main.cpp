//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//

#include <iostream>
using namespace std;

int a, b, r, choice;
int main() {
    cout<<"Dreamer's Calculator V1.1"<<endl;
    cout<<"Basic Operations \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \nEnter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter the 1st no.: ";
            cin>>a;
            cout<<"Enter the 2nd no.: ";
            cin>>b;
            r=a+b;
            cout<<"The result is: "<<r<<endl;
            break;
            
        case 2:
            cout<<"Enter the 1st no.: ";
            cin>>a;
            cout<<"Enter the 2nd no.: ";
            cin>>b;
            r=a-b;
            cout<<"The result is: "<<r<<endl;
            break;
            
        case 3:
            cout<<"Enter the 1st no.: ";
            cin>>a;
            cout<<"Enter the 2nd no.: ";
            cin>>b;
            r=a*b;
            cout<<"The result is: "<<r<<endl;
            
        case 4:
            cout<<"Enter the 1st no.: ";
            cin>>a;
            cout<<"Enter the 2nd no.: ";
            cin>>b;
            r=a/b;
            cout<<"The result is: "<<r<<endl;
            
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    return 0;
}

