#ifndef ACCOUNTUPDATER_H
#define ACCOUNTUPDATER_H

#include <cstdint>
#include <string>
#include <vector>

#include "../include/Accounts.h"

class AccountUpdater {
public:
    /**
     * @param account_number The account number of the account you want to change
     * @param new_account_name The account name that you 
     */
    void update_account_name(Accounts &accounts, const uint32_t account_number, const std::string new_account_name);
    
    /**
     * @param account_number The account number of the account you want to change
     * @param new_account_details The new account details you want to add
     */
    void update_account_details(Accounts &accounts, const uint32_t account_number, const std::vector<std::string> new_account_details);
};

#endif // ACCOUNTUPDATER_H