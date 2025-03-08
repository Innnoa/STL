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

namespace zjy {
    void print_list(const auto & str,const auto & lis) {
        for (cout<<str<<":";const auto & i:lis)
            {
                cout<<i<<" ";
            }
        cout<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list {1,2,3,4};
    zjy::print_list("begin:",lis);
    auto pos = lis.begin();
    lis.insert(pos,200);
    zjy::print_list("insert one",lis);
    lis.insert(pos,2,200);
    zjy::print_list("insert 2 200 ",lis);
    pos = next(lis.begin(),3);
    auto au = {1,2,2,5};
    lis.insert(pos,au.begin(),au.end());
    zjy::print_list("insert iterator au",lis);
    int num[] = {2,1,7};
    lis.insert(lis.end(),num,num+size(num));
    zjy::print_list("insert array",lis);
    lis.insert(next(lis.begin(),5),{1,2,5,8,9});
    zjy::print_list("insert l",lis);
    return 0;
}