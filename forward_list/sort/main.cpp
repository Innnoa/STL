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
ostream& operator<<(ostream& ostr, const forward_list<int>& list)
{
    for (const int i : list)
        ostr << ' ' << i;
    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis =forward_list {2,3,1,5,7,2,8};
    cout<<"before: "<<for_lis;
    for_lis.sort();
    cout<<"\nsort; "<<for_lis;
    for_lis.sort(greater());
    cout<<"\ngreater: "<<for_lis;
    return 0;
}