#include <iostream>
#include <random>


#include "../include/Account.h"
#include "../include/Accounts.h"

// Constructor
Accounts::Accounts() {}

// Copy constructor
Accounts::Accounts(const Accounts& accounts) {
    this->accounts = accounts.accounts;
}

// Destructor
Accounts::~Accounts() {}

// Add Account
void Accounts::add_account(Account account) {
    accounts.push_back(account);
}

// Deletes an account
void Accounts::delete_account(std::vector<Account>::iterator it) {
    if (accounts.empty()) {
        throw std::logic_error("Trying to delete past the end element");
    }
    accounts.erase(it);
}

// Equality operator
bool Accounts::operator==(const Accounts& accounts) const {
    return this->accounts == accounts.accounts;
}

// Inequality operator
bool Accounts::operator!=(const Accounts& accounts) const {
    return this->accounts != accounts.accounts;
}

// Assignment operator
void Accounts::operator=(const Accounts& accounts) {
    this->accounts = accounts.accounts;
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