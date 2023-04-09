#include <string>

class Account{
    public:
    Account(std::string accountname, int initialBalance)
        : name{accountname}{

        if(initialBalance>0){
            balance=initialBalance;
        }
        }

        void deposit(int depositAmount){
            if(depositAmount>0){
                balance=balance+depositAmount;
            }
        }
        void withdraw(int withdrawAmount){
            if(withdrawAmount>0){
                balance=balance-withdrawAmount;
            }
        }


        int getBalance()const{
            return balance;
        }

        void setName(std::string AccountName){
            name=AccountName;
        }

        std::string getName()const{
            return name;
        }

        private:
            std::string name;
            int balance{0};
};