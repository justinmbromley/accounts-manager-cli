#include <random>

#include "../include/AccountIDGenerator.h"

// Constructor
AccountIDGenerator::AccountIDGenerator() {}

// Destructor
AccountIDGenerator::~AccountIDGenerator() {}


// Generate a new Account ID
uint32_t AccountIDGenerator::generate_new_id() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<uint32_t> dis(1, 0xFFFFFFFF);
    return dis(gen);
}