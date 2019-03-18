#pragma once

#include "Account.h"
#include "string.h"
#include "AccountException.h"

class NormalAccount : public Account
{
private:
    int interest;
public:
    NormalAccount(int _id, int _balance, String _name, int _interest)
     : Account(_id, _balance, _name), interest(_interest)
    {}

    virtual void deposit(int money)
    {
        if(money < 0)
            throw MinusException(money);
        Account::deposit(money);
        Account::deposit(money*(interest/100.0));
    }
};
