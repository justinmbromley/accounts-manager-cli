#ifndef ACCOUNTIDGENERATOR_H
#define ACCOUNTIDGENERATOR_H

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

#endif // ACCOUNTIDGENERATOR_H