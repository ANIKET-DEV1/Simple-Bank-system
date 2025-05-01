#include <iostream>
using namespace std;

void showbalance(int balance);
int deposit(int balance);
int withdraw(int balance);
int main(){
    double balance;
    int choice;
    do{
        cout<<"Bank Servies"<<"\n"
        <<"1.Show balance"<<"\n"<<"2.Deposite"<<"\n"<<"3.Withdraw"<<"\n"<<"4.Exit"<<"\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance+=deposit(balance);
            showbalance(balance);
            break;
        case 3:
            balance-=withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            break;
        default:
            cout<<"invalid\n ";
            break;
        }
    }while (choice!=4);
    return 0;
}
void showbalance(int balance){
    cout<<"Your current balance is "<< balance <<"$\n";
}
int deposit(int balance){
    double amount;
    cout<<"Enter an amount a to deposit: ";
    cin>>amount;
    if (amount>0){
       cout<<"Amount deposit successfully!";
       return amount;
    }else{
        cout<<"invalid Amount\n";
        return 0;
    }
}
int withdraw(int balance){
    double amount;
    cout<<"Enter an amount a to withdraw: ";
    cin>>amount;
    if (amount>0 && amount < balance){
       cout<<"Amount withdraw successfully!";
       return amount;
    }else{
        cout<<"invalid Amount\n";
        return 0;
    }
}