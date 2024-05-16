#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <variant>
#include <cstddef>
#include <optional>

// #include "Account.h"
class Account;

class Accounts {
public:
    // Constructor
    Accounts();

    // Copy constructor
    Accounts(const Accounts& accounts);

    // Destructor
    ~Accounts();
    
    // Add Account
    void add_account(Account account);

    // Deletes an account
    void delete_account(std::vector<Account>::iterator it);

    bool operator==(const Accounts& accounts) const;

    bool operator!=(const Accounts& accounts) const;


    // Iterators
    std::vector<Account>::iterator begin();
    std::vector<Account>::iterator end();
    std::vector<Account>::const_iterator cbegin() const;
    std::vector<Account>::const_iterator cend() const;

private:
    std::vector<Account> accounts;
};

#endif // ACCOUNTS_H