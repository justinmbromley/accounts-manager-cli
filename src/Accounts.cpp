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
void Accounts::add_account(Account account) const {

}

std::ostream& operator<<(std::ostream& os, const Accounts& accounts) {
    return os;
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