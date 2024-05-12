#include <gtest/gtest.h>

#include "../include/AccountIDGenerator.h"

// TODO: Use a more complicated test to test the randomness
// Tests the creation and destruction of Account with getters
TEST(GenerateNewId, SimpleTest) {
    AccountIDGenerator account_id_generator;
    uint32_t result = account_id_generator.generate_new_id();
    EXPECT_TRUE(result);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}