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
    vector<int> data{1,2,4,5,5,6};
    data.at(1) =88;
    cout<<"index==2:"<<data.at(2)<<endl;
    cout<<"data.size:"<<data.size()<<endl;
    try
        {
            //try to set an element at random position >= size()
            auto moon_phase=[] {
                return chrono::system_clock::now().time_since_epoch().count()%8;
            };
            data.at(data.size()+moon_phase())=13;
        }
    catch (const out_of_range& ex)
        {
            cout<<ex.what()<<'\n';
        }
    //print final values:
    cout<<"data:";
    for (const auto & i : data)
        {
            cout<<" "<<i;
        }
    return 0;
}