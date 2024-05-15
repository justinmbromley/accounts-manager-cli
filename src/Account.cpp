#include <iostream>
#include "../include/Account.h"

// Constructor
Account::Account(uint32_t account_id, std::string account_name, std::vector<std::string> account_details, time_t account_time_last_edited) 
    : account_id(account_id), account_name(account_name), account_details(account_details), account_time_last_edited(account_time_last_edited) {
}

// Copy constructor
Account::Account(const Account& account) : account_id(account.account_id), account_name(account.account_name), 
    account_details(account.account_details), account_time_last_edited(account.account_time_last_edited) {
}

// Destructor
Account::~Account() {}

// Getters
uint32_t Account::get_account_id() const { return this->account_id; }
std::string Account::get_account_name() const { return this->account_name; }
std::vector<std::string> Account::get_account_details() const { return this->account_details; }
time_t Account::get_account_time_last_edited() const { return this->account_time_last_edited; }

// Setters
void Account::set_account_id(const uint32_t& account_id) { this->account_id = account_id; }
void Account::set_account_name(const std::string& account_name) { this->account_name = account_name; }
void Account::set_account_details(const std::vector<std::string>& account_details) { this->account_details = account_details; }
void Account::set_account_time_last_edited(const time_t& account_time_last_edited) { this->account_time_last_edited = account_time_last_edited; }

// Equality operator overload
bool Account::operator==(const Account& account) const {
    return (this->account_id == account.account_id
        && this->get_account_name() == account.get_account_name()
        && this->get_account_details() == account.get_account_details()
        && this->get_account_time_last_edited() == account.get_account_time_last_edited()
    );
}

bool Account::operator!=(const Account& account) const {

}