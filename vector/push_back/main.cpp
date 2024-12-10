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
    vector<string> letters;
    letters.push_back("abc");
    string s("def");
    letters.push_back(move(s));
    cout<<"vecotr letters holds";
    for (auto & i:letters)
        {
            cout<<quoted(i)<<" ";
        }
    cout<<"\nMoveed-from string s holds "<<quoted(s)<<"\n";
    return 0;
}