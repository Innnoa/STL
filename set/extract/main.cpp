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

void print_set(const auto & str,const auto & se) {
    for (cout<<str<<":";const auto & i:se)
        {
            cout<<i<<" ";
        }
   cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto se =set{1,2,3,4,5};
    print_set("before: ",se);
    auto nh = se.extract(1);
    nh.value()=666;
    print_set("before and after:",se);
    se.insert(move(nh));
    print_set("after",se);
    return 0;
}