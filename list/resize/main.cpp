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

void print_list(const auto & str,const auto & lis) {
    for (cout<<str<<":";const auto & i:lis)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis =list{1,2,3,4};
    print_list("first",lis);
    lis.resize(6);
    print_list("resize 6",lis);
    lis.resize(2);
    print_list("resize 2",lis);
    lis.resize(9,4);
    print_list("resize 9 4",lis);
    return 0;
}