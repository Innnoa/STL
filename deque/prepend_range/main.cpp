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
    auto deq = deque{1,2,3,4};
    const auto vec = vector{4,5,6,7};
#ifdef __cpp_lib_containers_ranges
    deq.prepend_range(vec);
#else
    deq.insert(deq.begin(),vec.begin(),vec.end());
#endif
    assert(ranges::equal(deq,deque{4,5,6,7,1,2,3,4}));
    return 0;
}