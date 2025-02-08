#include <cpr/cpr.h>
#include <iostream>
#include <string>

std::string getURL()
{
    std::string url;
    std::cout << "Enter URL for GET Request: ";
    std::getline(std::cin, url);

    return url;
}

void getRequest(const std::string& url)
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
        std::cerr << "GET Request failed with status code: " << response.status_code << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    std::string url = getURL();

    getRequest(url);
    return 0;
}
