#ifndef H
#define H

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

    // a, u, f, d, p, i, e
    


    
    /**
     * Finds the account based on the Account ID
     * 
     * @param account_id The account ID you want to get
     * @return Returns Account if account was found
     * @return Returns something if account was not found
    */
    std::optional<Account> get_account(const uint32_t account_id) const;

    // Adds a new account
    void add_account(const std::string account_name, const std::vector<std::string> account_details);

    // Updates account specified
    void update_account(const uint32_t account_id);

    // Lists Account Details
    void print_account(const uint32_t account_id);

    // Deletes Account
    void delete_account(const uint32_t account_id);

    // Prints all accounts in alphabetical order
    void print_accounts();

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

#endif // H