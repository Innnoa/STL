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
    cout<<"\n";
    return ostr;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis =forward_list {1,2,3,4};
    auto for_lis1 = forward_list {7,8,9};
    for_lis.sort();
    for_lis1.sort();
    cout<<"for_lis:"<<for_lis;
    cout<<"for_lis1:"<<for_lis1;
    for_lis.merge(for_lis1);
    cout<<"for_lis:"<<for_lis;
    return 0;
}