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

template<typename T>
ostream &operator<<(ostream &s, const vector<T> &v) {
    s.put('(');
    for (char comma[3]{'\0', ' ', '\0'}; const auto &e: v)
        {
            s << comma << e;
            comma[0] = ',';
        }
    return s << "}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    //c++11 initializer list syntax:
    const vector<string> words1{"the", "yogurt", "is", "also", "cursed"};
    cout << "1: " << words1;
    //words2 == words1:
    const vector words2(words1.begin(), words1.end());
    cout << "2: " << words2;
    //words3 == words1:
    const vector<string>& words3(words1);
    cout<<"3: "<<words3;
    //words4 is {"Mo","Mo","Mo","Mo","Mo"}
    const vector<string> words4(5,"Mo");
    cout<<"4: "<<words4;
    return 0;
}
