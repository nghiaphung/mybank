#include <iostream>
#include <string>


void display_welcome_option(void)
{
    const std::string welcome_string {"\nWELCOM TO NPB\n"};
    const std::string login_select_opt {
"Please select from below option\n\
1. Login\n\
2. Create a new account\n\
q. Quit\n"
};
    std::cout << welcome_string << std::endl;
    std::cout << login_select_opt;
};



