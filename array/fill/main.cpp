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
    constexpr size_t xy =4;
    using Cell = array<unsigned char,8>;
    array<Cell,xy*xy> board{};
    board.fill({0xE2,0x96,0x84,0xE2,0x96,0x80,0,0});
    for (size_t count{};auto c:board)
        {
            cout<<c.data()<<((++count%xy)?"":"\n");
        }
    return 0;
}