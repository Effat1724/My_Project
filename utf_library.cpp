#include <iostream>
#include "utf8.h" // তোমার প্রজেক্টে এই header রাখতে হবে
using namespace std;

int main() {
    const char* str = "বাংলা";

    // 1. Count UTF-8 characters
    cout << "UTF-8 length: " << utf8len(str) << endl;

    // 2. Count bytes needed
    cout << "UTF-8 bytes: " << utf8size(str) << endl;

    // 3. Copy string
    char dest[100];
    utf8cpy(dest, str);
    cout << "Copied string: " << dest << endl;

    // 4. Concatenate
    const char* s1 = "আমি ";
    const char* s2 = "বাংলা";
    char result[100] = "";
    utf8cpy(result, s1);
    utf8cat(result, s2);
    cout << "Concatenated: " << result << endl;

    // 5. Compare strings
    cout << "Comparison: " << utf8cmp("বাংলা", "বাংলা") << endl;

    // 6. Case-insensitive compare
    cout << "Case compare: " << utf8ncasecmp("HELLO", "hello", 5) << endl;

    // 7. Search character
    cout << "First ল: " << utf8chr("কলম লাল", 'ল') << endl;

    // 8. Last occurrence
    cout << "Last ল: " << utf8rchr("কলম লাল", 'ল') << endl;

    // 9. Mixed string count
    cout << utf8len("hello বাংলা 😀") << endl;

    // 10. Emoji length
    cout << utf8len("😀😀😀") << endl;

    return 0;
}

