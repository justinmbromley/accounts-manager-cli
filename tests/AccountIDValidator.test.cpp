#include <gtest/gtest.h>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountIDValidator.h"

// Test validity of account_id
TEST(IsAccountIDValid, ValidAccountID) {
    AccountIDValidator account_id_validator;
    
    Accounts accounts_1;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_1.add_account(account_3);
    accounts_1.add_account(account_4);

    uint32_t account_id = 1234;
    bool result = account_id_validator.is_account_id_valid(account_id, accounts_1);

    EXPECT_EQ(result, true);
}

TEST(IsAccountIDValid, TakenAccountID) {
    AccountIDValidator account_id_validator;
    
    Accounts accounts_1;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_1.add_account(account_3);
    accounts_1.add_account(account_4);

    uint32_t account_id = 31293;
    bool result = account_id_validator.is_account_id_valid(account_id, accounts_1);

    EXPECT_EQ(result, false);
}

TEST(IsAccountIDValid, InvalidAccountID) {
    AccountIDValidator account_id_validator;
    
    Accounts accounts_1;
    
    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts_1.add_account(account_1);
    accounts_1.add_account(account_2);
    accounts_1.add_account(account_3);
    accounts_1.add_account(account_4);

    uint32_t account_id = 0;
    bool result = account_id_validator.is_account_id_valid(account_id, accounts_1);

    EXPECT_EQ(result, false);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}