#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 1. Basic sum
    auto sum = [](int a, int b) 
    
    { return a + b; };

    cout << "Sum: " << sum(5, 3) << endl;

    // 2. Multiply
    cout << "Mul: " << [](int x) { return x * 10; }(4) << endl;

    // 3. Capture by value
    int x = 10;
    auto val = [x]() { return x + 2; };
    cout << "Value: " << val() << endl;

    // 4. Capture by reference
    auto ref = [&x]() { x += 5; };
    ref();
    cout << "After ref: " << x << endl;

    // 5. for_each example
    vector<int> v = {1, 2, 3};
    for_each(v.begin(), v.end(), [](int n) {
        cout << "Val: " << n << endl;
    });

    // 6. sort descending
    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b;
    });

    // 7. filter even
    vector<int> even;
    copy_if(v.begin(), v.end(), back_inserter(even), [](int x) {
        return x % 2 == 0;
    });

    // 8. lambda in return
    auto gen = []() {
        return [](int n) { return n * n; };
    };
    cout << "Lambda square: " << gen()(4) << endl;

    // 9. mutable lambda
    int y = 5;
    auto change = [y]() mutable {
        y++;
        return y;
    };
    cout << "Mutable: " << change() << endl;

    // 10. Default argument
    auto defaultArg = [](int z = 100) {
        return z + 1;
    };
    cout << defaultArg() << endl;

    return 0;
}

