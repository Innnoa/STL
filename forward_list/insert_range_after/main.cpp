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
    auto for_lis = forward_list {1,2,3,4};
    auto pos = next(for_lis.begin());
    const auto vec = vector {5,6,7};
#ifdef __cpp_lib_containers_ranges
    for_lis.insert_range_after(vec);
#else
    for_lis.insert_after(pos,vec.begin(),vec.end());
#endif
    assert(ranges::equal(for_lis,forward_list{1,2,5,6,7,3,4}));
    return 0;
}