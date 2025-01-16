//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//

#include <iostream>
#include <string>
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
    string choice;
    getDetails obj;
    
    cout<<"\t\tDreamer's On Calculator v.1.01! \n\n"<<endl;
    do{
        cout<<"Enter the operator (+, -, /, * or write exit to close the application) to perform the calculations: ";
        cin>>choice;
        if(choice == "exit"){
           cout<<"\nThanks for using the App!\n"<<endl;
           break;
        }
            switch(choice[0]){
                case '+':
                    obj.details();
                    obj.result = obj.firstNo + obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case '-':
                    obj.details();
                    obj.result = obj.firstNo - obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case '/':
                    obj.details();
                    if(obj.secondNo == 0){
                        cout<<"\nError: Cannot divide this number by zero!\n"<<endl;
                        continue;
                    }
                    obj.result = obj.firstNo / obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                case '*':
                    obj.details();
                    obj.result = obj.firstNo * obj.secondNo;
                    cout<<"\nThe Result is "<<obj.result<<endl;
                    break;
                default :
                    cout<<"\nInvalid operator! please try again...\n"<<endl;
                    continue;
            }
    } while(true);
    return 0;
}
