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
    const auto source = list{2, 7, 1};
    auto destination = deque{3, 1, 4};

#ifdef __cpp_lib_incontainers_ranges
    destination.assign_range(sourse)
#else
    destination.assign(source.cbegin(), source.cend());
#endif
    assert(ranges::equal(source,destination));
    return 0;
}
