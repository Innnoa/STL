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
    vector nums{1,2,4,8,16};
    vector fruits{"orange","apple","raspberry"};
    //print vector:
    for_each(nums.begin(),nums.end(),[](const int n ){cout<<n<<" ";});
    cout<<endl;
    //Sum all integers in the vector num (if any) , printing only the result  .
    cout<<"Sum of nums: "<<accumulate(nums.begin(),nums.end(),0)<<endl;
    //print the first fruit in the vector fruits, checking if there is any.
    if (!fruits.empty())
        {
            cout<<"First Fruit :"<< *fruits.begin() <<endl;
        }
    if (vector<char> empty; empty.begin()==empty.end())
        {
            cout<<"its empty";
        }
    return 0;
}