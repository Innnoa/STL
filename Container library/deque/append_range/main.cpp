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
    auto head = deque{1, 2, 3, 4};
    auto li = list{5, 6, 7};
#ifdef __cpp_lib_containers_ranges
    head.append_range(list);
#else
    head.insert(head.end(), li.begin(), li.end());
#endif
    assert((head == deque{1,2,3,4,5,6,7}));

    return 0;
}
