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
    deque data{1,2,4,5,5,6};
    //Set element 1
    data.at(1)= 88;
    //Read element 2
    cout<<"Element at index 2 has value: "<<data.at(2)<<"\n";
    cout<<"data size = "<<data.size()<<"\n";
    try
        {
            //Try to set element at random position >= size()
            auto moon_phase = [] {
                return chrono::system_clock::now().time_since_epoch().count()%8;
            };
            data.at(data.size()+moon_phase()) = 13;
        }catch (const out_of_range& ex)
            {
                cout<<ex.what()<<"\n";
            }
    //Print final value
    for (const auto & i:data)
        {
            cout<<i<<" ";
        }
    cout<<"\n";
    return 0;
}