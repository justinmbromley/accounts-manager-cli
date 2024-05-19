#include <string>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountsGetterByName.h"

const Accounts& AccountsGetterByName::get_accounts_by_name(const std::string account_name, const Accounts& accounts) const {
    return accounts;
}
