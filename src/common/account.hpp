#pragma once

#include <string>
// #include "saving.hpp"
// #include "loan.hpp"

class Account {
    private:
        std::string name;
        std::string email;
        std::string password;
        unsigned long balance;
    public:
        Account(std::string name_p, std::string mail_p, std::string pass_p, unsigned long start_balance);
        ~Account();
        bool change_password(std::string new_pswd);
};