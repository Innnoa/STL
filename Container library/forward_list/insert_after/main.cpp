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

void print_for_lis(const auto & for_lis) {
    cout<<"for_lis:{ ";
    for (char comma[3] = {'\0',' ','\0'};const auto & i:for_lis)
        {
            cout<<comma<<i;
            comma[0] = ',';
        }
    cout<<"}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis = forward_list {1,2,3,4,5,6};
    print_for_lis(for_lis);
    auto begin = for_lis.begin();
    for_lis.insert_after(begin,-6);
    print_for_lis(for_lis);
    auto anotherbegin = begin;
    ++anotherbegin;
    anotherbegin =for_lis.insert_after(anotherbegin,2,-4);
    print_for_lis(for_lis);
    auto vec = vector {1,2,3,4};
    anotherbegin = for_lis.insert_after(anotherbegin,vec.begin(),vec.end());
    print_for_lis(for_lis);
    for_lis.insert_after(anotherbegin,{-1,-2,-3});
    print_for_lis(for_lis);
    return 0;
}