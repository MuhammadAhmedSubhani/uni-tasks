#include <iostream>
#include <curl/curl.h>
using namespace std;

int main() {
    curl_version_info_data *data = curl_version_info(CURLVERSION_NOW);
    cout << "libcurl version: " << data->version << endl;
    return 0;
}
