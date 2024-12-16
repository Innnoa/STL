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

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto lis1 = list{1,2,3,4};
    auto lis2 = list<string> {"hello","world", "zjy"};
    auto lis3 = list<int>{};
    for_each(lis2.begin(),lis2.end(),[](const auto & n){cout<<n<<" ";});
    cout<<"\n";
    cout<<"Sum:";
    cout<<accumulate(lis1.begin(),lis1.end(),0)<<"\n";
    if (lis3.begin()==lis3.end())
        {
            cout<<"its empty";
        }
    return 0;
}