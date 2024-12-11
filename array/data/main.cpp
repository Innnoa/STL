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

void pointer_func(const auto * p,auto size) {
    cout<<"data = ";
    for (auto i=0;i<size;i++)cout<<p[i]<<" ";
    cout<<"\n";
}

void span_func(span<const int> data) {
    cout<<"data = ";
    for (const auto & i:data)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    array container{1,2,3,4};
    //Prefer container.data() over &container[0]
    pointer_func(container.data(),container.size());
    //span is a safer alternative to separeted pointer/size
    span_func({container.data(),container.size()});
    return 0;
}