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

ostream& operator<<(ostream& ostr,const list<int>& list) {
    for (const auto & i:list)
        {
            cout<<" "<<i;
        }
    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis = list{1,2,3,4};
    auto lis1 = list {3,4,1,2};
    lis.sort();
    lis1.sort();
    cout<<"lis:"<<lis1<<"\n";
    cout<<"lis1:"<<lis1<<"\n";
    lis.merge(lis1);
    cout<<"merge lis:"<<lis<<"\n";
    return 0;
}