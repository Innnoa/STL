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
    auto container = deque{1, 2, 3, 4};
    auto pos = next(container.begin(),2);
    assert((*pos = 3));
    const auto li =list{5,6,7};
#ifdef __cpp_lib_containers_ranges
    container.insert_range(pos,li);
#else
    container.insert(pos,li.begin(),li.end());
#endif
    assert(ranges::equal(container,deque{1,2,5,6,7,3,4}));
    return 0;
}
