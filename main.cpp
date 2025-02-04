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

void getRequest(const std::string_view& url)
{
    std::cout << "Making GET Request to: " << url << std::endl;

    cpr::Response response = cpr::Get(cpr::Url{url});
    if (response.status_code == 200)
    {
        std::cout << "GET Request successful." << std::endl;
        std::cout << "Response: " << response.text << std::endl;
    }
    else
    {
        std::cout << "GET Request failed." << std::endl;
    }

}