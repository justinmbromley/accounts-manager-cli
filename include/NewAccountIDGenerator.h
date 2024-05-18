#ifndef NEWACCOUNTIDGENERATOR_H
#define NEWACCOUNTIDGENERATOR_H

#include <cstdint>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountIDGenerator.h"
#include "../include/AccountIDValidator.h"
#include "../include/NewAccountIDGenerator.h"

class NewAccountIDGenerator {
public:
    /**
     * Generates a new Account ID
     * 
     * @return a new Account ID
    */
    uint32_t generate_new_account_id(const Accounts& accounts) const; 
};

#endif // NEWACCOUNTIDGENERATOR_H