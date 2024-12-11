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

void print(const string_view s) {
    cout << s << " ";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    const array<string_view, 8> data{
        "¨x", "¨y", "¨z", "¨{", "¨|", "¨}", "¨~", "¨€"
    };
    array<string, 8> arr;
    copy(data.cbegin(), data.cend(), arr.begin());
    print("Print 'arr' in direct order using [cbegin , cend):\t");
    for_each(arr.begin(), arr.end(), print);
    print("\n\nPrint 'arr' in reverse order using [crbegin , crend):\t");
    for_each(arr.rbegin(), arr.rend(), print);
    return 0;
}
