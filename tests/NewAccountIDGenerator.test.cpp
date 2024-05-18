#include <gtest/gtest.h>

#include "../include/Account.h"
#include "../include/Accounts.h"
#include "../include/AccountIDGenerator.h"
#include "../include/AccountIDValidator.h"
#include "../include/NewAccountIDGenerator.h"

// generate new Account ID
TEST(NewAccountIDGeneratorGenerateNewAccountID, ReturnsValidAccountID) {
    Accounts accounts;

    Account account_1(31293, "Bobby Smith", { "Username: bobsmith23", "Password: hungrybob02" }, 1234);
    Account account_2(1984, "Stake", { "Email: Jordan Bellton", "Username: jbellton24", "Password: jbjbjbjb", "Password: Goodstuff" }, 4321);
    Account account_3(123, "DET login", { "Email: helloman@email.com", "Password: hellowoman" }, 929382);
    Account account_4(49392, "Loreal", { "Loreal Special Number: 23432", "Secret shape: octagon", "Metal: shoegaze" }, 43123);

    accounts.add_account(account_1);
    accounts.add_account(account_2);
    accounts.add_account(account_3);
    accounts.add_account(account_4);

    NewAccountIDGenerator new_account_id_generator;
    AccountIDValidator account_id_validator;
    uint32_t new_account_id = new_account_id_generator.generate_new_account_id(accounts);
    bool result = account_id_validator.is_account_id_valid(new_account_id, accounts);

    EXPECT_EQ(result, true);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}