#include <iostream>
#include <random>


#include "../include/Account.h"
#include "../include/Accounts.h"

// Constructor
Accounts::Accounts() {}

// Destructor
Accounts::~Accounts() {}

// Getter
const std::vector<Account>& Accounts::get_accounts() const {
    return accounts;
}

// Add Account
void Accounts::add_account(Account account) {

}



std::ostream& operator<<(std::ostream& os, const Accounts& accounts) {
    
    return os;
}
