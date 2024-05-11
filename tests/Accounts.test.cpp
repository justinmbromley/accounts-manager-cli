#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Account.h"
#include "../include/Accounts.h"

// Tests the creation and destruction of Accounts with getters
TEST(Accounts, Constructor) {
    Accounts accounts;
}

// Tests if it gets the account
TEST(Accounts, AddAccount) {
    Accounts accounts;

    std::string account_name = "University";
    std::vector<std::string> account_details = { "Uni ID: 39493093", "Password: Dinkleberry", "Course: Economics" };

    accounts.add_account(account_name, account_details);
}

// Tests the addition of a single new account
TEST(Accounts, AddAccount) {
    Accounts accounts;

    std::string account_name = "University";
    std::vector<std::string> account_details = { "Uni ID: 39493093", "Password: Dinkleberry", "Course: Economics" };

    accounts.add_account(account_name, account_details);
}


// TEST(Accounts, GenerateNewId) {
//     MockAccounts accounts;
    
//     // Test generate_new_id() function
//     EXPECT_CALL(accounts, generate_new_id())
//         .Times(1) // Expect to call generate_new_id() once
//         .WillOnce(testing::Return(123)); // Return a specific value for testing

//     uint32_t result = accounts.generate_new_id();

//     // Test the returned value
//     const uint32_t min_value = 1;
//     const uint32_t max_value = 0xFFFFFFFF;
//     ASSERT_GE(result, min_value); // Check if result is greater than or equal to min_value
//     ASSERT_LE(result, max_value); // Check if result is less than or equal to max_value
// }



int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}