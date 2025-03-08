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

void print_list(const auto& str,const auto & lis) {
    auto size= std::size(lis);
    for (cout<<str;const auto & i:lis)
        {
            cout<<i<<(--size?",":" ");
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    list<int> lis1{1,2,3,4},lis2,lis3;
    const auto lis4 = {6,7,8,9};
    cout<<"all:\n";
    print_list("1: ",lis1);
    print_list("2: ",lis2);
    print_list("3: ",lis3);
    cout<<"lis2=lis1: \n";
    lis2=lis1;
    print_list("1: ",lis1);
    print_list("2: ",lis2);
    cout<<"lis3=move(lis1): \n";
    lis3=move(lis1);
    print_list("1: ",lis1);
    print_list("3: ",lis3);
    lis3=lis4;
    print_list("3: ",lis3);
    print_list("4: ",lis4);
    return 0;
}