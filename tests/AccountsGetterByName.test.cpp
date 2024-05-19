#include <gtest/gtest.h>

#include <string>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountsGetterByName.h"

// test get accounts by name
TEST(AccountsGetterByNameGetAccountsByName, ReturnsAccounts) {
    Accounts accounts;

    std::string account_name = "Loreal";

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, account_name, { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);
    Account account_5(12345, account_name, { "Username: Bad Max" }, 12345);

    accounts.add_account(account_1);
    accounts.add_account(account_2);
    accounts.add_account(account_3);
    accounts.add_account(account_4);
    accounts.add_account(account_5);

    AccountsGetterByName accounts_getter_by_name;
    Accounts result = accounts_getter_by_name.get_accounts_by_name(account_name, accounts);

    Accounts expected;
    expected.add_account(account_4);
    expected.add_account(account_5);

    EXPECT_EQ(result, expected);
}

// TEST(AccountsGetterByNameGetAccountsByName, NoAccountsMatch) {
//     Accounts accounts;

//     Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
//     Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
//     Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
//     Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);
//     Account account_5(12345, "Loreal", { "Username: Bad Max" }, 12345);

//     accounts.add_account(account_1);
//     accounts.add_account(account_2);
//     accounts.add_account(account_3);
//     accounts.add_account(account_4);
//     accounts.add_account(account_5);

//     std::string account_name = "USA Express";
//     AccountsGetterByName accounts_getter_by_name;
//     Accounts result = accounts_getter_by_name.get_accounts_by_name(account_name, accounts);

//     EXPECT_TRUE(result.empty());
// }

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
