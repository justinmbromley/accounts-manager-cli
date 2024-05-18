#ifndef ACCOUNTIDGENERATOR_H
#define ACCOUNTIDGENERATOR_H

#include <cstdint>

class AccountIDGenerator {
public:
    /**
     * Generates a new 32-bit Account ID
     * 
     * @return random 32-bit integer
    */
    uint32_t generate_new_id(); 
};

#endif // ACCOUNTIDGENERATOR_H