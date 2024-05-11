#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Account.h"
#include "../include/Accounts.h"

// // Tests the creation and destruction of Accounts with getters
// TEST(Accounts, Constructor) {
//     Accounts accounts;
// }

// // Tests if it gets the account
// TEST(Accounts, AddAccount) {
//     Accounts accounts;

//     std::string account_name = "University";
//     std::vector<std::string> account_details = { "Uni ID: 39493093", "Password: Dinkleberry", "Course: Economics" };

//     accounts.add_account(account_name, account_details);
// }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}