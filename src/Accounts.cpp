#include <iostream>
#include <random>


#include "../include/Account.h"
#include "../include/Accounts.h"

// Constructor
Accounts::Accounts() {}

// Destructor
Accounts::~Accounts() {}

// // Getter
// const std::vector<Account>& Accounts::get_accounts() const {
//     return accounts;
// }

// Add Account
void Accounts::add_account(Account account) {
    accounts.push_back(account);
}

// Deletes an account
void Accounts::delete_account(std::vector<Account>::iterator it) {
    if (accounts.empty()) {
        throw std::out_of_range("Trying to delete past the end element");
    }
    accounts.erase(it);
}

// Equality operator
bool Accounts::operator==(const Accounts& accounts) const {
    return this->accounts == accounts.accounts;
}

// Inequality operator
bool Accounts::operator!=(const Accounts& accounts) const {
    return 1;
}


// Iterators
std::vector<Account>::iterator Accounts::begin() {
    return accounts.begin();
}

std::vector<Account>::iterator Accounts::end() {
    return accounts.end();
}

std::vector<Account>::const_iterator Accounts::cbegin() const {
    return accounts.cbegin();
}

std::vector<Account>::const_iterator Accounts::cend() const {
    return accounts.cend();
}