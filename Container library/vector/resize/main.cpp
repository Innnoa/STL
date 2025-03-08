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

void print (auto rem ,const auto &c) {
    for (cout<<rem;const auto & i:c)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    vector c{1,2,3};
    print("The vector holds: ",c);
    c.resize(5);
    print("After resize up to 5: ",c);
    c.resize(2);
    print ("After resize down to 2: ",c);
    c.resize(6,4);
    print("After resize up to 6(initializer=4)",c);
    return 0;
}