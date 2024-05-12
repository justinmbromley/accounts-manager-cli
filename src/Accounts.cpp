#include <iostream>
#include <random>


#include "../include/Account.h"
#include "../include/Accounts.h"

// Constructor
Accounts::Accounts() {}

// Destructor
Accounts::~Accounts() {}

// Getter
std::list<Account> Accounts::get_accounts() const {
    return accounts;
}



std::ostream& operator<<(std::ostream& os, const Accounts& accounts) {
    
    return os;
}
