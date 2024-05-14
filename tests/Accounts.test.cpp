#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Account.h"
#include "../include/Accounts.h"

// Tests the creation and destruction of Accounts with getters
TEST(Constructor, NoAddedAccounts) {
    Accounts accounts;
    std::list<Account> result = accounts.get_accounts();
    ASSERT_TRUE(result.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}