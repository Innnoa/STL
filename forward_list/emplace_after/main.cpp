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

struct Sum {
    string str;
    int sum;
    Sum(string str,int sum):str(move(str)),sum(sum) {

    }
    void print ()const  {
        cout<<str<<"="<<sum<<"\n";
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto for_lis = forward_list<Sum> {};
    auto it =for_lis.before_begin();
    string str {"1"};
    for (int i{1},sum{1};i!=10;sum+=i)
        {
            it = for_lis.emplace_after(it,str,sum);
            ++i;
            str += " + "+ to_string(i);
        }
    for (const auto & i:for_lis)
        {
            i.print();
        }
    return 0;
}