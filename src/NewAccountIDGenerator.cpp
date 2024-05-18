
#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountIDGenerator.h"
#include "../include/AccountIDValidator.h"
#include "../include/NewAccountIDGenerator.h"

uint32_t NewAccountIDGenerator::generate_new_account_id(const Accounts& accounts) const {
    AccountIDValidator account_id_validator;
    AccountIDGenerator account_id_generator;

    // while the Account ID generated is invalid
    uint32_t account_id = account_id_generator.generate_new_id();
    while (!account_id_validator.is_account_id_valid(account_id, accounts)) {
        account_id = account_id_generator.generate_new_id();
    }
    return account_id;
}