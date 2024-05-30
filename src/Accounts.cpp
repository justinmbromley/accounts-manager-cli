#include <iostream>
#include <random>


#include "../include/Account.h"
#include "../include/Accounts.h"

Accounts::Accounts() {}

Accounts::Accounts(const Accounts& accounts) {
    this->accounts = accounts.accounts;
}

Accounts::~Accounts() {}

void Accounts::add_account(const Account& account) {
    accounts.push_back(account);
}

void Accounts::delete_account(const std::vector<Account>::iterator it) {
    if (accounts.empty()) {
        throw std::logic_error("Trying to delete past the end element");
    }
    accounts.erase(it);
}

bool Accounts::empty() const {
    return accounts.empty();
}

bool Accounts::operator==(const Accounts& accounts) const {
    return this->accounts == accounts.accounts;
}

bool Accounts::operator!=(const Accounts& accounts) const {
    return this->accounts != accounts.accounts;
}

void Accounts::operator=(const Accounts& accounts) {
    this->accounts = accounts.accounts;
}

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