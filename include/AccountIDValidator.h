    #ifndef ACCOUNTIDVALIDATOR_H
    #define ACCOUNTIDVALIDATOR_H

    #include <cstdint>

    class AccountIDValidator {
    public:
        // Is Account ID valid?
        bool is_account_id_valid(uint32_t account_id);
    };

    #endif // ACCOUNTIDVALIDATOR_H