    #ifndef ACCOUNT_H
    #define ACCOUNT_H

    #include <string>
    #include <vector>
    #include <cstdint>
    #include <ctime>

    /**
     * @class Account
     * @brief A class that creates an Account object
    */
    class Account {
    public:
        /**
         * @brief Constructor for the Account class
         * @param account_id The ID associated with the account
         * @param account_name The name of the account
         * @param account_details The details associated with the account
         * @param account_time_last_edited The last time the account was edited
        */
        explicit Account(uint32_t account_id, std::string account_name, std::vector<std::string> account_details, time_t account_time_last_edited);

        /**
         * @brief Copy constructor of the Account class
         * @param account A constant reference to an account
        */
        Account(const Account& account);

        /**
         * @brief Destructor of the Accounts class
        */
        ~Account();

        /**
         * Fetches the properties of an account
        */
        uint32_t get_account_id() const;
        std::string get_account_name() const;
        std::vector<std::string> get_account_details() const;
        time_t get_account_time_last_edited() const;

        /**
         * Sets the properties of the Account class
        */
        void set_account_id(const uint32_t& account_id);
        void set_account_name(const std::string& account_name);
        void set_account_details(const std::vector<std::string>& account_details);
        void set_account_time_last_edited(const time_t& account_time_last_edited);

        /**
         * Compares the equality of two accounts
        */
        bool operator==(const Account& account) const;
        bool operator!=(const Account& account) const;

        /**
         * Used for assigning one account to another
        */
        void operator=(const Account& account);

    private:
        uint32_t account_id;
        std::string account_name;
        std::vector<std::string> account_details;
        time_t account_time_last_edited;
    };

    #endif // ACCOUNT_H
