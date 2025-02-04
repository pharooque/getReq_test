#include <cpr/cpr.h>
#include <iostream>
#include <string>
#include <string_view>

std::string_view getURL()
{
    std::string url{};
    std::cout << "Enter URL for GET Request: ";
    std::getline(std::cin, url);

    return url;
}
