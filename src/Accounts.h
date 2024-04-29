#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <cstdint>
#include <list>

#include <Account.h>

class Account;

class Accounts {
public:
    // Constructor
    Accounts();

    // Destructor
    ~Accounts();

    // Add Account
    Account accounts_add_account(const Account& account);

private:
    std::list<Account> accounts;
};

#endif // ACCOUNT_H