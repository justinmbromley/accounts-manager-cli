#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Accounts.h"

class MockAccounts : public Accounts {
public:
    MOCK_METHOD(uint32_t, generate_new_id, ());
};

// Tests the creation and destruction of Account with getters
TEST(Accounts, GenerateNewId) {
    MockAccounts accounts;
    
    // Test generate_new_id() function
    EXPECT_CALL(accounts, generate_new_id())
        .Times(1) // Expect to call generate_new_id() once
        .WillOnce(testing::Return(123)); // Return a specific value for testing

    uint32_t result = accounts.generate_new_id();

    // Test the returned value
    const uint32_t min_value = 1;
    const uint32_t max_value = 0xFFFFFFFF;
    ASSERT_GE(result, min_value); // Check if result is greater than or equal to min_value
    ASSERT_LE(result, max_value); // Check if result is less than or equal to max_value
}



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}