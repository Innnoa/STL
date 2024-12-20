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

template<class Os,class K>
Os &operator<<(Os& os,const set<K> &v) {
    os<<"["<<v.size()<<"]{";
    bool o{};
    for (const auto & i:v)
        {
            os << (o ? ", " : (o = true, " ")) << i;
        }
    return os<< "}\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    set<char> p{'a','b','c','a'},q{'g','b','c'};
    cout<<"p: "<<p<<"q: "<<q;
    p.merge(q);
    cout<<"p.merge: "<<p<<"after q"<<q;
    return 0;
}