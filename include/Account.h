    #ifndef ACCOUNT_H
    #define ACCOUNT_H

    #include <string>
    #include <vector>
    #include <cstdint>
    #include <ctime>

    class Account {
    public:
        // Constructor
        explicit Account(uint32_t account_id, std::string account_name, std::vector<std::string> account_details, time_t account_time_last_edited);

        // Copy Constructor
        Account(const Account& account);

        // Destructor
        ~Account();

        // Getters
        uint32_t get_account_id() const;
        std::string get_account_name() const;
        std::vector<std::string> get_account_details() const;
        time_t get_account_time_last_edited() const;

        // Setters
        void set_account_id(const uint32_t& account_id);
        void set_account_name(const std::string& account_name);
        void set_account_details(const std::vector<std::string>& account_details);
        void set_account_time_last_edited(const time_t& account_time_last_edited);

        // Equality operator overload
        bool operator==(const Account& account) const;

        // Inequality operator overload
        bool operator!=(const Account& account) const;

        // Assignment operator
        void operator=(const Account& account);

    private:
        uint32_t account_id;
        std::string account_name;
        std::vector<std::string> account_details;
        time_t account_time_last_edited;
    };

    #endif // ACCOUNT_H
