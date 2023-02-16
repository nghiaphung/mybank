add_library(
    account
    STATIC
    account.cpp
    account.hpp
)

target_include_directories(account
    PUBLIC
    ./
)