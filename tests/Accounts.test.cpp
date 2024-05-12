#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Account.h"
#include "../include/Accounts.h"

// Tests the creation and destruction of Accounts with getters
TEST(Constructor, NoAddedAccounts) {
    Accounts accounts;

    // Tests if the beginning iterator is equal to the end iterator to test if it's empty
    bool result = accounts.get_accounts().empty();
    EXPECT_TRUE(result);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}