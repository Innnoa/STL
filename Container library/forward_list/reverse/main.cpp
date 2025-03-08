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

ostream & operator<<(ostream& ostr,const forward_list<int> & for_lis) {
    for (const auto & i:for_lis)
        {
            ostr<<i<<" ";
        }
    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis =forward_list {1,2,3,7,3,4,5,6,7,8};
    cout<<"before:"<<for_lis;
    for_lis.sort();
    cout<<"\nsort:"<<for_lis;
    for_lis.reverse();
    cout<<"\nreverse:"<<for_lis;
    return 0;
}