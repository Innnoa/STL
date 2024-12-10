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
    auto head = vector{1,2,3,4};
    const auto tail = list{-5,-6,-7};
#ifdef __cpp_lib_containers_ranges
    head.append_range(tail);
#else
    head.insert(head.end(),tail.cbegin(),tail.cend());
#endif
    assert((head== vector{1,2,3,4,-5,-6,-7}));
    return 0;
}