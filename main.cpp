//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//



#include <iostream>
using namespace std;

struct{
  int firstNo, secondNo, result;
}data;

int main() {
    int choice;

    cout<<"Dreamer's Calculator V1.1"<<endl;
    cout<<"Basic Operations \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \nEnter your choice: ";
    cin>>choice;
    
    switch(choice){
        case 1:
            cout<<"Enter the 1st no.: ";
            cin>>data.firstNo;
            cout<<"Enter the 2nd no.: ";
            cin>>data.secondNo;
            data.result=data.firstNo + data.secondNo;
            cout<<"The result is: "<<data.result<<endl;
            break;
            
        case 2:
            cout<<"Enter the 1st no.: ";
            cin>>data.firstNo;
            cout<<"Enter the 2nd no.: ";
            cin>>data.secondNo;
            data.result=data.firstNo - data.secondNo;
            cout<<"The result is: "<<data.result<<endl;
            break;
            
        case 3:
            cout<<"Enter the 1st no.: ";
            cin>>data.firstNo;
            cout<<"Enter the 2nd no.: ";
            cin>>data.secondNo;
            data.result=data.firstNo * data.secondNo;
            cout<<"The result is: "<<data.result<<endl;
            break;
            
        case 4:
            cout<<"Enter the 1st no.: ";
            cin>>data.firstNo;
            cout<<"Enter the 2nd no.: ";
            cin>>data.secondNo;
            data.result=data.firstNo / data.secondNo;
            cout<<"The result is: "<<data.result<<endl;
            break;
            
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    return 0;
}

