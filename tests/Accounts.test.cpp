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
    EXPECT_THROW(accounts.delete_account(it), std::logic_error);
}

// == operator
TEST(AccountsEqualityOperator, AccountsAreEqual) {
    Accounts accounts_1;
    Accounts accounts_2;

    Accounts accounts_holder;
    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);

    accounts_holder.add_account(account_1);
    accounts_holder.add_account(account_2);
    accounts_holder.add_account(account_3);

    for (Account account : accounts_holder) {
        accounts_1.add_account(account);
        accounts_2.add_account(account);
    }

    EXPECT_TRUE(accounts_1 == accounts_2);
}

TEST(AccountsEqualityOperator, AccountsAreNotEqual) {
    Accounts accounts_1;
    Accounts accounts_2;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_2.add_account(account_3);
    accounts_2.add_account(account_4);

    EXPECT_TRUE(!(accounts_1 == accounts_2));
}

TEST(AccountsEqualityOperator, EmptyAccounts) {
    Accounts accounts_1;
    Accounts accounts_2;

    EXPECT_TRUE(accounts_1 == accounts_2);
}

// != operator
TEST(AccountsInequalityOperator, AccountsAreNotEqual) {
    Accounts accounts_1;
    Accounts accounts_2;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_2.add_account(account_3);
    accounts_2.add_account(account_4);

    EXPECT_TRUE(accounts_1 != accounts_2);
}

TEST(AccountsInequalityOperator, AccountsAreEqual) {
    Accounts accounts_1;
    Accounts accounts_2;

    Accounts accounts_holder;
    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);

    accounts_holder.add_account(account_1);
    accounts_holder.add_account(account_2);
    accounts_holder.add_account(account_3);

    for (Account account : accounts_holder) {
        accounts_1.add_account(account);
        accounts_2.add_account(account);
    }

    EXPECT_TRUE(!(accounts_1 != accounts_2));
}

TEST(AccountsInequalityOperator, EmptyAccount) {
    Accounts accounts_1;
    Accounts accounts_2;
    Account account(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    accounts_2.add_account(account);

    EXPECT_TRUE(accounts_1 != accounts_2);
}

TEST(AccountsAssignmentOperator, Assignment) {
    Accounts accounts_1;
    Accounts accounts_2;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_2.add_account(account_3);
    accounts_2.add_account(account_4);

    accounts_1 = accounts_2;

    EXPECT_TRUE(accounts_1 == accounts_2);
}

TEST(AccountsAssignmentOperator, EmptyAssignment) {
    Accounts accounts_1;
    Accounts accounts_2;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_1.add_account(account_3);
    accounts_1.add_account(account_4);

    accounts_1 = accounts_2;

    EXPECT_EQ(accounts_1.cbegin(), accounts_1.cend());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
