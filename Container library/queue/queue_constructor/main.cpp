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
    auto que1 = queue<int>{};
    que1.push(1);
    assert(que1.size()==1);
    auto que2 = queue<int>{que1};
    assert(que2.size()==1);
    deque deq{1, 2, 3, 4};
    auto que3 = queue{deq};
    assert(que3.size()==4);
#ifdef __cpp_lib_adaptor_iterator_pair_constructor
    const auto li = {1,2,3,4,5};
    auto que4 =queue{li.begin(),li.end()};
    assert(que4.size()==5);
#endif

#if _cpp_lib_containers_ranges >= 202202L
    auto que5 = queue(from_range_t,range::iota(0,42));
    assert(que5.size()==42);

    autoo que6 = ranges::iota(0,42) | ranges::to<queue>();
    assert(que6.size()==42);

    allocator<int> alloc;

    auto que7 = queue(from_range_t,ranges::iota(0,42),alloc);
    assert(que7.size()==42);

    auto que8 =range::iota(0,42) | ranges::to<queue>(alloc);
    assert(que8.size()==42);
#endif
    return 0;
}
