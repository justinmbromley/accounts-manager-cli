#include <gtest/gtest.h>

#include "../include/AccountIDGenerator.h"
#include "../include/AccountIDValidator.h"

// Test validity of account_id
TEST(IsAccountIDValid, ValidAccountID) {
    AccountIDGenerator account_id_generator;
    AccountIDValidator account_id_validator;

    uint32_t account_id_1 = 123;
    uint32_t account_id_2 = 234;

    EXPECT_EQ(1, 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}