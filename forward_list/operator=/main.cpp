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

void print_list(const auto & str,const auto & for_lis) {
    auto size = ranges::distance(for_lis);
    for (cout<<str<<":";const auto & i:for_lis)
        {
            cout<<i<<(--size?",":" ");
        }

    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    forward_list<int> for_lis{1,2,3,4,5},for_lis1,for_lis2;
    const auto lis = {2,3,1,4,5,1,24,5};
    cout<<"all:\n";
    print_list("1: ",for_lis);
    print_list("2: ",for_lis1);
    print_list("3: ",for_lis2);
    cout<<"y=x: \n";
    for_lis1 = for_lis;
    print_list("1: ",for_lis);
    print_list("2: ",for_lis1);
    cout<<"z=move(x): \n";
    for_lis2 = move(for_lis);
    print_list("1: ",for_lis);
    print_list("3: ",for_lis2);
    cout<<"z=lis: \n";
    for_lis2 = lis;
    print_list("lis: ",lis);
    print_list("3: ",for_lis2);
    return 0;
}