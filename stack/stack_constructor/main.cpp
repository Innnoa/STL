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
    auto sta1 = stack<int>{};
    sta1.push(1);
    assert(sta1.size()==1);
    auto sta2 = stack{sta1};
    assert(sta2.size()==1);
    auto vec = vector{1, 2, 3, 4, 5};
    auto sta3 = stack{vec};
    assert(sta3.size()==5);
#ifdef _cpp_lib_adaptor_iterator_pair_constructor
    const auto li = {5,6,7,8,9,10};
    auto sta4 = stack {li.begin(),li.end()};
    assert(sta4.size()==6);
#endif

#if _cpp_lib_containers_ranges >= 202202L
    auto sta5 = stack (from_range_t,range_iota(0,42));
    assert(sta5.size()==42);

    auto sta6 = raneg::iota(0,42) | ranges::to<stack>();
    assert(sta6.size()==42);

    allocator<int> alloc;
    auto sta7 = stack(from::range_t,range_iota(0,42),alloc);
    assert(sta7.size()==42);
    auto sta8 = range::iota(0,42) | range_to<stack>(alloc);
    assert(sta8.size()==42);
#endif

    return 0;
}
