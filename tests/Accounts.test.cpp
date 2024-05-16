#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/Account.h"
#include "../include/Accounts.h"

// Test the begin iterator
TEST(AccountsBegin, EmptyAccounts) {
    Accounts accounts;
    std::vector<Account>::iterator it = accounts.begin();
    EXPECT_TRUE(it == accounts.end());
}

// Test the const iterator
TEST(AccountsCBegin, EmptyAccounts) {
    Accounts accounts;
    std::vector<Account>::const_iterator it = accounts.cbegin();
    EXPECT_TRUE(it == accounts.cend());
}

// Tests adding one account
TEST(AccountsAddAccount, AddingOneAccount) {
    Accounts accounts;

    Account account(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    accounts.add_account(account);
    std::vector<Account>::const_iterator it = accounts.cbegin();

    EXPECT_EQ(*it, account);
}

// Tests adding multiple accounts
TEST(AccountsAddAccount, AddingMultipleAccounts) {
    Accounts accounts;
    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    
    std::vector<Account> expected;

    expected.push_back(account_1);
    expected.push_back(account_2);
    expected.push_back(account_3);

    accounts.add_account(account_1);
    accounts.add_account(account_2);
    accounts.add_account(account_3);

    int i = 0;
    for (auto it = accounts.cbegin(); it != accounts.cend(); it++) {
        EXPECT_EQ(*it, expected.at(i));
        i++;
    }
}

// Delete Account
TEST(AccountsDeleteAccount, DeletingOneAccount) {
    Accounts accounts;

    Account account(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    accounts.add_account(account);
    std::vector<Account>::iterator it = accounts.begin();
    accounts.delete_account(it);
    EXPECT_EQ(accounts.cbegin(), accounts.cend());
}

// Adds three accounts, deletes two of them, and sees if one remains
TEST(AccountsDeleteAccount, DeletingMultipleAccounts) {
    Accounts accounts;
    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    
    std::vector<Account> expected;

    accounts.add_account(account_1);
    accounts.add_account(account_2);
    accounts.add_account(account_3);

    auto it = accounts.begin();
    accounts.delete_account(it);
    accounts.delete_account(it);

    EXPECT_EQ(*(it), account_3);
}

TEST(AccountsDeleteAccount, DeletingFromAnEmptyList) {
    Accounts accounts;
    std::vector<Account>::iterator it = accounts.begin();
    EXPECT_THROW(accounts.delete_account(it), std::out_of_range);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
