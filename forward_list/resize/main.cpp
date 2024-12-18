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

void print_forward_list(const auto & str,const auto & for_lis) {
    for (cout<<str<<":";const auto & i:for_lis)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis = forward_list {1,2,3,4};
    print_forward_list("first",for_lis);
    for_lis.resize(5);
    print_forward_list("resize 5",for_lis);
    for_lis.resize(2);
    print_forward_list("resize 2",for_lis);
    for_lis.resize(7,5);
    print_forward_list("resize 7 5",for_lis);
    return 0;
}