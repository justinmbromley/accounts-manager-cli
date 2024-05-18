#include <algorithm>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountIDValidator.h"

bool AccountIDValidator::is_account_id_valid(uint32_t account_id, const Accounts& accounts) const {
    if (account_id > 0xFFFFFFFF || account_id == 0) {
        return false;
    }
    auto found_account_id_it = std::find_if(accounts.cbegin(), accounts.cend(), [&account_id](const Account& account) {
        return account.get_account_id() == account_id;  
    });

    // if matching id is not found, then it is original and thus is valid
    return (found_account_id_it == accounts.cend());
}