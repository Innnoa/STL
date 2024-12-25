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

struct Event {
    int priority{};
    char data{' '};

    friend bool operator<(const Event &lhs, const Event &rhs) {
        return lhs.priority < rhs.priority;
    }

    friend ostream &operator<<(ostream &os, const Event &e) {
        return os << '{' << e.priority << ", '" << e.data << "'}";
    }
};

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    auto pq = priority_queue<Event>{};
    std::cout << "Fill the events queue:\t";
    for (const auto &i: {Event{6, 'L'}, {8, 'I'}, {9, 'S'}, {1, 'T'}, {5, 'E'}, {3, 'N'}})
        {
            cout << i << ' ';
            pq.push(i);
        }
    std::cout << "\nProcess events:\t\t";
    for (; !pq.empty(); pq.pop())
        {
            const auto & e =pq.top();
            cout << e << ' ';
        }
}
