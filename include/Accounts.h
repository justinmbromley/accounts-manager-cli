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
    std::list<Account> get_accounts() const;

    // Add Account
    void add_account(Account account);

    // Update an account
    std::optional<Account> update_account(const uint32_t account_id);

    // Gets an account from account_id
    std::optional<Account> get_account(const uint32_t account_id);

    // Returns a list of Account objects from the name
    std::optional<std::list<Account>> get_account_from_account_name(const std::string account_name);

    // Deletes Account
    void delete_account(const uint32_t account_id);

    // Prints all accounts in alphabetical order
    friend std::ostream& operator<<(std::ostream& os, const Accounts& accounts);

    // Iterators
    std::list<Account>::iterator begin() { return accounts.begin(); }
    std::list<Account>::iterator end() { return accounts.end(); }
    std::list<Account>::const_iterator cbegin() { return accounts.cbegin(); }
    std::list<Account>::const_iterator cend() { return accounts.cend(); }

private:
    // generates a new random 32 bit ID
    uint32_t generate_new_id();

    /**
     * Is Account ID already in use?
     * 
     * @param account_id The account ID you want to find if in use
     * @return Returns true if account
    */
    bool is_account_id_unique(const uint32_t account_id) const;

    std::list<Account> accounts;
};

#endif // ACCOUNTS_H