/**
 * ClassName: ${NAME}
 * package: ${PACKAGE_NAME}
 * Description:
 * @Author: innno
 * @Create: 2024/2/27 - 21:54
 * @Version: v1.0
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cout << boolalpha;
    array<int, 0> empty;
    std::cout << "1) "
            << (empty.begin() == empty.end()) << ' ' // true
            << (empty.cbegin() == empty.cend()) << '\n'; // true
    // *(empty.begin()) = 42; // => undefined behavior at run-time
    array numbers{5, 2, 3, 4};
    std::cout << "2) "
            << (numbers.begin() == numbers.end()) << ' ' // false
            << (numbers.cbegin() == numbers.cend()) << '\n' // false
            << "3) "
            << *(numbers.begin()) << ' ' // 5
            << *(numbers.cbegin()) << '\n'; // 5
    *numbers.begin()=1;
    std::cout << "4) " << *(numbers.begin()) << '\n'; // 1
    // *(numbers.cbegin()) = 42; // compile-time error:
    // read-only variable is not assignable

    // print out all elements
    std::cout << "5) ";
    ranges::for_each(std::as_const(numbers), [](int x)
    {
        std::cout << x << ' ';
    });
    std::cout << '\n';
    constexpr std::array constants{'A', 'B', 'C'};
    static_assert(constants.begin() != constants.end());   // OK
    static_assert(constants.cbegin() != constants.cend()); // OK
    static_assert(*constants.begin() == 'A');              // OK
    static_assert(*constants.cbegin() == 'A');             // OK
    // *constants.begin() = 'Z'; // compile-time error:
    // read-only variable is not assignable
    return 0;
}
