#include <gtest/gtest.h>

#include "../include/Account.h"

// Tests the creation and destruction of Account with getters
TEST(AccountConstructor, CreationGettersDestruction) {
    uint32_t account_id = 31293;
    std::string account_name = "Bobby Smith";
    std::vector<std::string> account_details = { "Username: bobsmith23", "Password: hungrybob02" };
    time_t random_time = 1234;

    Account account(account_id, account_name, account_details, random_time);
    
    EXPECT_EQ(account.get_account_id(), account_id);
    EXPECT_EQ(account.get_account_name(), account_name);
    EXPECT_EQ(account.get_account_details(), account_details);
    EXPECT_EQ(account.get_account_time_last_edited(), random_time);
}

// Tests the setters of Account
TEST(AccountSetters, ChangeVariables) {
    uint32_t account_id = 39293;
    std::string account_name = "Gmail";
    std::vector<std::string> account_details = { "Email: greghill10@gmail.com", "Password: password10" };
    time_t random_time = 1234;

    Account account(account_id, account_name, account_details, random_time);

    uint32_t new_account_id = 123456;
    std::string new_account_name = "Hotmail";
    std::vector<std::string> new_account_details = { "Email: John Watkins", "Bank Account Number: 1234567", "Password: donttouchmenow" };
    time_t new_random_time = 243567;

    account.set_account_id(new_account_id);
    account.set_account_name(new_account_name);
    account.set_account_details(new_account_details);
    account.set_account_time_last_edited(new_random_time);

    EXPECT_EQ(account.get_account_id(), new_account_id);
    EXPECT_EQ(account.get_account_name(), new_account_name);
    EXPECT_EQ(account.get_account_details(), new_account_details);
    EXPECT_EQ(account.get_account_time_last_edited(), new_random_time);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}