#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <cstdint>
#include <cctype>
#include <ctime>

class Account {
public:
    // Constructor
    Account(uint32_t account_id, std::string account_name, std::string account_details, time_t account_time_last_edited);

    // Destructor
    ~Account();

    // Getters
    uint32_t account_get_account_id() const;
    std::string account_get_account_name() const;
    std::string account_get_account_details() const;
    time_t account_get_account_time_last_edited() const;

    // Setters
    void account_set_account_id(const uint32_t& account_id);
    void account_set_account_name(const std::string& account_name);
    void account_set_account_details(const std::string& account_details);
    void account_set_account_time_last_edited(const time_t& account_time_last_edited);

    // Print account
    void account_print_account();

private:
    uint32_t account_id;
    std::string account_name;
    std::string account_details;
    time_t account_time_last_edited;
};

#endif // ACCOUNT_H