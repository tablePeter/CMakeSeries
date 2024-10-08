#include <log.h>
#include <iostream>


void log_data(const char* message, LogType lt) {
    switch (lt)
    {
    case LogType::MESSAGE:
        std::cout << "Message: " << message << std::endl;
        break;

    case LogType::WARNING:
        std::cout << "warning: " << message << std::endl;
        break;

    case LogType::FATAL_ERROR:
        std::cout << "fatal error: " << message << std::endl;
        break;

    default:
        break;
    }
}