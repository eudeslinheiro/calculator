//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//

#include <iostream>
using namespace std;

class getDetails {
   public:
    double firstNo, secondNo, result;
    void details(){
        cout<<"\nEnter the 1st No.: ";
        cin>>firstNo;
        cout<<"\nEnter the 2nd No.: ";
        cin>>secondNo;
    }
};

int main() {
    int choice;
    getDetails obj;
    
    cout<<"\t\tDreamer's On Calculator v.1.01! \n\n"<<endl;
    do{
        cout<<"1) Addition\n2) Subtraction\n3) Division\n4) Multiplication\n5) Exit\nYour Choice: ";
        cin>>choice;
            switch(choice){
                case 1:
                    obj.details();
                    obj.result = obj.firstNo + obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case 2:
                    obj.details();
                    obj.result = obj.firstNo - obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case 3:
                    obj.details();
                    if(obj.secondNo == 0){
                        cout<<"\nError: Cannot divide this number by zero!\n"<<endl;
                        continue;
                    }
                    obj.result = obj.firstNo / obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case 4:
                    obj.details();
                    obj.result = obj.firstNo * obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case 5:
                    cout<<"\nThanks for using the App!\n"<<endl;
                    break;
                default :
                    cout<<"\nInvalid choice! try again...\n"<<endl;
                    continue;
            }
    } while(true && choice != 5);
    return 0;
}
