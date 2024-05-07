#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <ctime>

#include "Account.h"

int main() {
    uint32_t account_id = 2341;
    std::string account_name = "ANZ";
    std::vector<std::string> account_details = {
        "Username: jack_villain",
        "Password: doinstuff"
    };
    time_t current_time = time(nullptr);

    Account account(account_id, account_name, account_details, current_time);
    account.account_print_account();

    return 0;
}