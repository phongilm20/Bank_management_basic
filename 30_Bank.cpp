#include <iostream>
#include <bits/stdc++.h>


double deposit(){
    double moneyDeposit;
    std::cout<<"How much do you want to deposit: $";
    std::cin>>moneyDeposit;
    return moneyDeposit;
}
double withdraw(double balance){
    double moneyWithdraw;
    std::cout<<"How much do you want to withdraw: $";
    std::cin>>moneyWithdraw;
    if( moneyWithdraw <= balance)
    {
        balance -= moneyWithdraw;
        std::cout<<"withdrawed!\n";
        std::cout<<"Your balance: $"<<balance<<'\n';
    }
    else
    {
        std::cout<<"You don't have enough money\n";
    }
    return balance;
}

void balance(){


}

int main(){ 
    double balance =0;
    int choice=1; 
    double moneyWithdraw;
    while(choice != 4)
    {
        std::cout<<"----BANK----\n";
        std::cout<<"1.See balance\n";
        std::cout<<"2.Deposit\n";
        std::cout<<"3.Withdraw\n";
        std::cout<<"4.Exit\n";
        std::cout<<"Your choice: ";
        std::cin>>choice;
        switch(choice){
            case 1:
                std::cout<<"\nYour balance: $"<<balance<<'\n';
                break;
            case 2:
                balance += deposit();
                std::cout<<"Your balance: $"<<balance<<'\n';
                break;
            case 3:
                moneyWithdraw = withdraw(balance);
                balance =moneyWithdraw;
                
            case 4:
                std::cout<<"Thank you for using!";
                break;

            default:
                std::cout<<"Invalid\n";
        }
    }
    return 0;
}
