add_executable(ui
    main.cpp
    display_ui.cpp
    display_ui.hpp
    server_connection.cpp
    server_connection.hpp
    ui.cpp
    ui.hpp
)

target_link_libraries(ui account)