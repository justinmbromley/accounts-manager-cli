    #ifndef ACCOUNTIDVALIDATOR_H
    #define ACCOUNTIDVALIDATOR_H

    #include <cstdint>

    class AccountIDValidator {
    public:
        /**
         * Evaluates whether the Account ID is valid
         * 
         * @param account_id 32 bit integer
         * @return true if the Account ID is valid, false if not
        */
        bool is_account_id_valid(uint32_t account_id, const Accounts& accounts) const;
    };

    #endif // ACCOUNTIDVALIDATOR_H