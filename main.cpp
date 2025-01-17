//
//  main.cpp
//  cpp
//
//  Created by Eudes Linheiro on 02/09/24.
//

#include <iostream>
#include<string>

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

class specialOperation{
   public:
    int decimalNo;
    string binaryNo;
    string decimalToBinary(int n){
        string binary = "";
        while (n > 0){
            binary = to_string(n % 2) + binary;
            n /= 2;
        }
        return binary;
    }
};

int main() {
    string choice;
    getDetails obj;
    specialOperation ob;
    cout<<"\t\tDreamer's On Calculator v.1.01! \n\n"<<endl;
    do{
        cout<<"Enter the operator (+, -, /, * or write exit to close the application) to perform the calculations or ( c ) to convert Decimal to Binary: ";
        cin>>choice;
        if(choice == "exit"){
            cout<<"\nThanks for using the App!\n"<<endl;
            break;
        } else if (choice == "c"){
            cout<<"Enter a decimal No.: ";
            cin>>ob.decimalNo;
            ob.binaryNo = ob.decimalToBinary(ob.decimalNo);
            cout<<"\nThe Decimal No.: "<<ob.decimalNo<<" = "<<ob.binaryNo<<" in Binary"<<endl;
            break;
        }
        else{
            obj.details();
                switch(choice[0]){
                    case '+':
                        obj.result = obj.firstNo + obj.secondNo;
                        cout<<"\nThe Result is "<<obj.result<<endl;
                        break;
                    case '-':
                        obj.result = obj.firstNo - obj.secondNo;
                        cout<<"\nThe Result is "<<obj.result<<endl;
                        break;
                    case '/':
                        if(obj.secondNo == 0){
                            cout<<"\nError: Cannot divide this number by zero!\n"<<endl;
                            continue;
                        }
                        obj.result = obj.firstNo / obj.secondNo;
                        cout<<"\nThe Result is "<<obj.result<<endl;
                        break;
                    case '*':
                        obj.result = obj.firstNo * obj.secondNo;
                        cout<<"\nThe Result is "<<obj.result<<endl;
                        break;
                    default :
                        cout<<"\nInvalid operator. Pls Try again... \n"<<endl;
                        continue;
                }
        }
    } while(true);
    return 0;
}

