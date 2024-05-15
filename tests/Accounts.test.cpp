#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Account.h"
#include "../include/Accounts.h"

// Tests the creation and destruction of Accounts with getters
TEST(Constructor, NoAddedAccounts) {
    Accounts accounts;
    std::vector<Account> result = accounts.get_accounts();
    ASSERT_TRUE(result.empty());
}

// Tests adding one account
TEST(AddAccount, AddingOneAccount) {
    Accounts accounts;

    Account account(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 12345);
    accounts.add_account(account);

    std::vector<Account> result_vector = accounts.get_accounts();
    std::cout << "RESULT SIZE: " << result_vector.size() << std::endl;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}