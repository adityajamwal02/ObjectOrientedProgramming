///  Classes declaration with : [parent name]()

#include<bits/stdc++.h>
using namespace std;

class Account{
    double balance;
public:
    Account(double b): balance(b){}

    void deposit(double amount){
        balance+=amount;
    }

    void withdraw(double amount){
        balance-=amount;
    }

    double getBalance() const{
        return balance;
    }
};

class BankAccount : public Account{

public:
    BankAccount(double b) : Account(b){}

    void addInterest(){
        deposit(getBalance()*0.05);
    }
};

int main(){
    BankAccount bankAcc(100.0);
    bankAcc.deposit(50.0);
    bankAcc.deposit(25.25);
    bankAcc.withdraw(30);
    bankAcc.addInterest();
    cout<<"BALANCE : "<<bankAcc.getBalance()<<endl;

    return 0;
}
