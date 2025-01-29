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
    string choice, mode;
    getDetails obj;
    specialOperation ob;
    cout<<"Which mode do you want to work in?";
    cin>>mode;
    if(mode == "n"){
       cout<<"Hello, It's Just a test";
    }
    cout<<"\t\tDreamer's On Calculator v.1.01! \n\n"<<endl;
    cout<<"1) Addition\n2) Subtraction\n3) Division\n4) Multiplication\n5) Decimal to Binary conversion\n6) Exit\n\nTo perform any operation enter the sign(+, -, /, *) or write c to convert from Decimal to Binary or exit to close the Application\nYour Choice: ";
    do{
        cout<<"Enter the operator (+, -, /, * or write exit to close the application) to perform the calculations or ( c ) to convert Decimal to Binary: ";
        cin>>choice;
        if(choice == "exit"){
            cout<<"\nThanks for using the App!\n"<<endl;
            break;
        }
        else{
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
                   case 'c':
                        out<<"Enter a decimal No.: ";
                        cin>>ob.decimalNo;
                        ob.binaryNo = ob.decimalToBinary(ob.decimalNo);
                        cout<<"\nThe Decimal No. "<<ob.decimalNo<<" is = "<<ob.binaryNo<<" in Binary\n"<<endl;
                        break;
                    default :
                        cout<<"\nInvalid operator. Pls Try again... \n"<<endl;
                        continue;
                }
        }
    } while(true);
    return 0;
}

/*int sqrt, number, oddNumb;
 cout<<"Enter the no.: ";
 cin>>number;
 do{
   sqrt = number - oddNumb;
 } while (sqrt != 0);
 */
