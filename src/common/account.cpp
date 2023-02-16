#include "account.hpp"
#include <iostream>

Account::Account(std::string name_p, std::string mail_p, std::string pass_p, unsigned long start_balance)
    : name (name_p), email (mail_p), password (pass_p), balance (start_balance) {
    std::cout << "account created\n";
};

Account::~Account() {
    std::cout << "account removed\n";
}