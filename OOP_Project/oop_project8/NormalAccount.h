#pragma once

class NormalAccount : public Account
{
private:
    int interest;
public:
    NormalAccount(int _id, int _balance, char * _name, int _interest)
     : Account(_id, _balance, _name), interest(_interest)
    {}

    virtual void deposit(int money)
    {
        Account::deposit(money);
        Account::deposit(money*(interest/100.0));
    }
};
