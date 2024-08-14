#include <gtest/gtest.h>

#include <string>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountUpdater.h"

// Update Test
TEST(AccountsUpdaterUpdateAccountName, UpdateName) {
    Accounts accounts;

    Account account(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);

    accounts.add_account(account);

    AccountUpdater account_updater;
    account_updater.update_account_name(accounts, 31293, "Johnny Smith");
    account_updater.update_account_details(accounts, 31293, { "Username: johnnysmith32", "Password: dididid", "Location: Switzerland" });

    Account expected(31293, "Johnny Smith", { "Username: johnnysmith32", "Password: dididid", "Location: Switzerland" }, 1234);

    Account result = *(accounts.cbegin());
    
    EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
