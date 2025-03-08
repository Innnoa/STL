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

void pointer_func(const int *p, const size_t size) {
    cout << "data = ";
    for (size_t i = 0; i < size; i++)
        {
            cout << p[i] << ' ';
        }
    cout << endl;
}

void span_func(span<const int> data) {
    cout << "data = ";
    for (const auto &i: data)
        {
            cout << i << ' ';
        }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector container{1, 2, 3, 4};
    pointer_func(container.data(), container.size());
    span_func({
        container.data(), container.size()
    });
    return 0;
}
