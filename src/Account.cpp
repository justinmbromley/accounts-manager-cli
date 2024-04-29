#include <iostream>
#include "Account.h"

Account::Account(uint32_t account_id, std::string account_name, std::string account_details, time_t account_time_last_edited) 
    : account_id(account_id), account_name(account_name), account_details(account_details), account_time_last_edited(account_time_last_edited) {
}

// Destructor
Account::~Account() {
    std::cout << "Account " << account_name << " has been destructed" << std::endl;
}

// Getters
uint32_t Account::account_get_account_id() const { return this->account_id; }
std::string Account::account_get_account_name() const { return this->account_name; }
std::string Account::account_get_account_details() const { return this->account_details; }
time_t Account::account_get_account_time_last_edited() const { return this->account_time_last_edited; }

// Setters
void Account::account_set_account_id(const uint32_t& account_id) { this->account_id = account_id; }
void Account::account_set_account_name(const std::string& account_name) { this->account_name = account_name; }
void Account::account_set_account_details(const std::string& account_details) { this->account_details = account_details; }
void Account::account_set_account_time_last_edited(const time_t& account_time_last_edited) { this->account_time_last_edited = account_time_last_edited; }

void Account::account_print_account() {
    std::string capitalised_name = account_name;
    for (char& c : capitalised_name) {
        c = std::toupper(c);
    }
    
    std::cout << "--" << capitalised_name << "--" << std::endl;
    std::cout << "Account ID: " << account_id << std::endl;
    std::cout << "Last edited at: " << ctime(&account_time_last_edited);
    std::cout << "Account Details: \n" << account_details << std::endl;
}
