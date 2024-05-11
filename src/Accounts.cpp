#include <iostream>
#include <random>


#include "../include/Account.h"
#include "../include/Accounts.h"

// Constructor
Accounts::Accounts() {
    std::list<Account> accounts;
}

// Destructor
Accounts::~Accounts() {
    std::cout << "Destructed accounts" << std::endl;
}

// 

// generates a new 32 bit ID
uint32_t Accounts::generate_new_id() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> dis(1, 0xFFFFFFFF);
    return dis(gen);
}