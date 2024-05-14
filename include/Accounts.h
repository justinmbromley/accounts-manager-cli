#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <iostream>
#include <cstdint>
#include <list>
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

    // Destructor
    ~Accounts();

    // Getter
    const std::list<Account>& get_accounts() const;

    // Add Account
    void add_account(Account account);

    // Update an account
    void delete_account(std::list<Account>::iterator it);

    // Prints all accounts in alp   habetical order
    friend std::ostream& operator<<(std::ostream& os, const Accounts& accounts);

    // Iterators
    std::list<Account>::iterator begin() { return accounts.begin(); }
    std::list<Account>::iterator end() { return accounts.end(); }
    std::list<Account>::const_iterator cbegin() { return accounts.cbegin(); }
    std::list<Account>::const_iterator cend() { return accounts.cend(); }

private:
    std::list<Account> accounts;
};

#endif // ACCOUNTS_H