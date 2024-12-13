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

void print (auto const comment , auto const & container) {
    auto size = container.size();
    cout<<comment<<"{ ";
    for (auto const & i:container)
        {
            cout<<i<<(--size?", ":" ");
        }
    cout<<"}\n";

}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    deque<int> x{1,2,3},y,z;
    const auto w= {4,5,6,7};
    cout<<"Initially:\n";
    print("x= ",x);
    print("y= ",y);
    print("z= ",z);
    cout<<"Copy assignment copies data from x to y:\n";
    y=x;
    print("x= ",x);
    print("y= ",y);
    cout<<" Move assignment moves data from x to z,modifying both x and z:\n";
    z=move(x);
    print("x= ",x);
    print("z= ",z);
    cout<<"Assignment of initializer_list w to z:\n";
    z=w;
    print("w= ",w);
    print("z= ",z);
    return 0;
}
