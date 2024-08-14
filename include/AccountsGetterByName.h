#ifndef ACCOUNTSGETTERBYNAME_H
#define ACCOUNTSGETTERBYNAME_H

#include <string>

#include "../include/Account.h"
#include "../include/Accounts.h"

class AccountsGetterByName {
public:
    /**
     * Returns a reference to an Accounts
     * 
     * @param account_name String of account name to find
     * @param Accounts A const reference to an object of type Accounts
     * @return A list of objects of type Account
    */
    const Accounts get_accounts_by_name(const std::string account_name, const Accounts& accounts) const;
};

#endif // ACCOUNTSGETTERBYNAME_H