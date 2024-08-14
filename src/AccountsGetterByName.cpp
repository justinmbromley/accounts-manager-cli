#include <string>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountsGetterByName.h"

const Accounts AccountsGetterByName::get_accounts_by_name(const std::string account_name, const Accounts& accounts) const {
    Accounts accounts_with_same_names;
    for(auto it = accounts.cbegin(); it != accounts.cend(); it++) {
        if (it->get_account_name() == account_name) {
            accounts_with_same_names.add_account(*it);
        }
    }
    return accounts_with_same_names;
}   
