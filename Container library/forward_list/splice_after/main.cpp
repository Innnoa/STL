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
    using F = forward_list<int>;
    F l1 = {1, 2, 3, 4, 5};
    F l2 = {10, 11, 12};
    l2.splice_after(l2.begin(), l1, l1.begin(), l1.end());
    assert(l1==F{1});
    assert((l2==F{10,2,3,4,5,11,12}));
    F x = {1, 2, 3, 4, 5};
    F y = {6, 7, 8, 9};
    x.splice_after(x.begin(), y);
    assert(y==F{});
    assert((x==F{1,6,7,8,9,2,3,4,5}));
    F f1 = {1, 2, 3, 4, 5};
    F f2 = {6, 7, 8, 9};
    f1.splice_after(f1.begin(), f2, f2.begin());
    assert((f1==F{1, 7, 2, 3, 4, 5}));
    assert((f2==F{6, 8, 9}));
    F w1 = {1,2,3,4,5};
    F w2 = {6,7,8,9};
    w1.splice_after(w1.begin(),w2,w2.begin(),w2.end());
    assert((w1==F{1,7,8,9,2,3,4,5}));
    assert((w2==F{6}));
    return 0;

                                                             }
