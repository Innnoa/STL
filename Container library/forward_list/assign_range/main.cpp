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
    auto for_lis =forward_list{1,2,3,4,5,6};
    auto vec = vector{3,4,5,67,1,2};
#ifdef ___cpp_lib_containers_ranges
    for_lis.assign_range(vec);
#else
    for_lis.assign(vec.begin(),vec.end());
#endif
    assert(ranges::equal(for_lis,forward_list{3,4,5,67,1,2}));

    return 0;
}