#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <cstdint>

class AccountIDGenerator {
public:
    // Constructor
    AccountIDGenerator();

    // Destructor
    ~AccountIDGenerator();

    // Generate a new Account ID
    uint32_t generate_new_id();
};

#endif // ACCOUNTS_H