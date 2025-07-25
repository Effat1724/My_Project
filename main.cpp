#include <iostream>
#include <cstdint>
#include "utf8.h"  // Make sure utf8.h is in the same folder

using namespace std;

int main() {
    string utf8_string = u8"বাংলা ভাষা সুন্দর!"; // UTF-8 encoded Bangla text

    cout << "Original UTF-8 string: " << utf8_string << endl;

    cout << "Characters in UTF-8 string:\n";
    for (auto it = utf8_string.begin(); it != utf8_string.end();) {
        uint32_t cp = utf8::next(it, utf8_string.end());
        cout << "U+" << hex << cp << endl;
    }

    return 0;
}

