//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//


#include <iostream>
using namespace std;

int main() {
    int choice;
    double firstNo, secondNo, result;
    
    cout<<"\t\tDreamer's On Calculator v.1.01! \n\n"<<endl;
    do{
        cout<<"1) Addition\n2) Subtraction\n3) Division\n4) Multiplication\nYour Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter the 1st number: ";
                cin>>firstNo;
                cout<<"Enter the 2nd number: ";
                cin>>secondNo;
                result = firstNo + secondNo;
                cout<<"\nThe Result is "<<result<<endl;
                break;
            case 2:
                cout<<"\nEnter the 1st number: ";
                cin>>firstNo;
                cout<<"Enter the 2nd number: ";
                cin>>secondNo;
                result = firstNo - secondNo;
                cout<<"\nThe Result is "<<result<<endl;
                break;
            case 3:
                cout<<"\nEnter the 1st number: ";
                cin>>firstNo;
                cout<<"Enter the 2nd number: ";
                cin>>secondNo;
                if(secondNo == 0){
                    cout<<"\nError: Cannot divide this number by zero!\n"<<endl;
                    continue;
                }
                result = firstNo / secondNo;
                cout<<"\nThe Result is "<<result<<endl;
                break;
            case 4:
                cout<<"\nEnter the 1st number: ";
                cin>>firstNo;
                cout<<"Enter the 2nd number: ";
                cin>>secondNo;
                result = firstNo * secondNo;
                cout<<"\nThe Result is "<<result<<endl;
                break;
            case 5:
                cout<<"\nThanks for using the App!\n"<<endl;
                break;
            default :
                cout<<"\nInvalid choice! try again...\n"<<endl;
                continue;
        }
    } while(true && choice !=5);
    return 0;
}

