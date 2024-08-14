#include "../include/Account.h"
#include "../include/AccountUpdater.h"

void AccountUpdater::update_account_name(Accounts &accounts, const uint32_t account_number, const std::string new_account_name) {
    for (auto it = accounts.begin(); it != accounts.end(); it++) {
        if (it->get_account_id() == account_number) {
            it->set_account_name(new_account_name);
        }
    }
}

void AccountUpdater::update_account_details(Accounts &accounts, const uint32_t account_number, const std::vector<std::string> new_account_details) {
    for (auto it = accounts.begin(); it != accounts.end(); it++) {
        if (it->get_account_id() == account_number) {
            it->set_account_details(new_account_details);
        }
    }
}