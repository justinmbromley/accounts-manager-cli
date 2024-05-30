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
    /**
     * Creates a new Accounts object and initialises it to have an empty vector
    */
    Accounts();

    /**
     * Used to create new Accounts from another Accounts object
    */
    Accounts(const Accounts& accounts);

    /**
     * Destroys Accounts
    */
    ~Accounts();

    /**
     * Adds Account
    */
    void add_account(const Account& account);

    // Deletes an account
    void delete_account(const std::vector<Account>::iterator it);

    /**
     * States whether accounts is empty or not
     * 
     * @return true if accounts is empty, false otherwise
    */
    bool empty() const;

    /**
     * Equality operators
    */
    bool operator==(const Accounts& accounts) const;
    bool operator!=(const Accounts& accounts) const;

    /**
     * Assignment operator
    */
    void operator=(const Accounts& accounts);

    /**
     * Iterators to accounts
    */
    std::vector<Account>::iterator begin();
    std::vector<Account>::iterator end();
    std::vector<Account>::const_iterator cbegin() const;
    std::vector<Account>::const_iterator cend() const;

private:
    std::vector<Account> accounts;
};

#endif // ACCOUNTS_H