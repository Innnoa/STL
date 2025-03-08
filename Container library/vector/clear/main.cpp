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

void print_info(const string_view rem,const vector<int>& v) {
    cout<<rem<<"{";
    for (const auto & i:v)
        {
            cout<<i<<" ";
        }
    cout<<"}\n";
    cout<<"Size="<<v.size()<<", Capacity="<<v.capacity()<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector container{1,2,3};
    print_info("Before clear: ",container);
    container.clear();
    print_info("After clear: ",container);
    return 0;
}