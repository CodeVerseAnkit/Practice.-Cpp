#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

// Callback function: API ka data yahan aata hai
size_t writeCallback(void *contents, size_t size, size_t nmemb, string *output)
{
    size_t totalSize = size * nmemb;
    output->append((char *)contents, totalSize);
    return totalSize;
}

int main()
{
    CURL *curl;
    CURLcode res;
    string response;

    curl = curl_easy_init();
    if (!curl)
    {
        cout << "Curl init failed\n";
        return 0;
    }

    curl_easy_setopt(curl, CURLOPT_URL,
                     "https://api.openweathermap.org/data/2.5/weather?q=Delhi&appid=d14fa9aeec858de08ec235aa9e48f895&units=metric");

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    res = curl_easy_perform(curl);

    if (res != CURLE_OK)
    {
        cout << "Error: " << curl_easy_strerror(res) << endl;
    }
    else
    {
        cout << response << endl; // RAW JSON
    }

    curl_easy_cleanup(curl);
}