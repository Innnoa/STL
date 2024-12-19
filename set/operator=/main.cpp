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

void print_set(const auto &str, const auto &set) {
    cout<<str<<": {";
    for (auto length=size(set);const auto & i:set)
        {
            cout<<i<<(--length?",":" ");
        }
    cout<<"}";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se = set{1,2,3,4};
    set<int> se1,se2;
    const auto li = {6,7,8,9};
    cout<<"all: \n";
    print_set("se",se);
    print_set("se1",se1);
    print_set("se2",se2);
    cout<<"\ncopy : \n";
    se1 = se;
    print_set("se",se);
    print_set("se1",se1);
    cout<<"\nmove :\n";
    se2=move(se);
    print_set("se",se);
    print_set("se2",se2);
    cout<<"\ncopy list:";
    se2=li;
    print_set("se2",se2);
    print_set("li",li);
    return 0;
}
