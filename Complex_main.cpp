#include <bits/stdc++.h>
#include"Complex.h"
using namespace std;

int main() {
    int choice;
    BigDecimalInt num1("");
    BigDecimalInt num2("");

    cout << "Please select one choice: \n" << endl;
    cout << "1)check valid or not." << endl;
    cout << "2)check valid or not." << endl;
    cout << "3)add two number." << endl;
    cout << "4)subtract two numbers." << endl;
    cout << "5)check if greater." << endl;
    cout << "6)check if smaller." << endl;
    cout << "7)check equality." << endl;
    cout << "8)" << endl;
    cout << "9)find the size of number." << endl;
    cout << "10)check the sign." << endl;
    cin >> choice;
    if (choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7) {
        cout << "Enter first number.\n";
        cin >> num1;
        cout << "Enter second number.\n";
        cin >> num2;
    }
    if (choice == 1 || choice == 2 || choice == 9 || choice == 10) {
        cout << "enter the number.\n";
    }
    if (choice == 3) {
        BigDecimalInt num3 = num1 + num2;
        cout << num3;
    }
    if(choice == 5){
        if(num1 > num2) cout << "YES\n";
        else cout << "NO\n";
    }
    if(choice == 6){
        if(num1 < num2) cout << "YES\n";
        else cout << "NO\n";
    }
    if(choice == 7) {
        if (num1 == num2) cout << "YES\n";
        else cout << "NO\n";
    }
}


/*
    cout <<"please enter number 1." << endl;
    cin >> num1;
    cout << "please enter number 2." << endl;
    cin >> num2;
    cout<<num1<<" + "<<num2<<" = ";
    //BigDecimalInt num5 = num1 + num2;
    BigDecimalInt num3 = num1 + num2;
    cout<<num3<<endl;
    if(num1 == num3)
        cout<<"yes\n";
    else
        cout<<"no\n";
    if(num1 > num2)
        cout<<"yes\n";
    else
        cout<<"no\n";

}
 */