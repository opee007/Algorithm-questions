#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string add(const string& a, const string& b) {
    const int n = a.size(), m = b.size();
    if(n < m) return add(b, a);

    string c; 
    vector<int> tem;
    // 数位和，两个加数对应的数位都加到 sum 上  
    // 0 <= sum <= 19
    int sum = 0;  
    for(int i = 0; i < n; i++) {
        sum += a[i] - '0';        
        if(i < m) sum += b[i] - '0';
        tem.push_back(sum % 10); // 获取该数位的数字
        sum /= 10;             // 获取进位信息
    }
    if(sum) tem.push_back(sum);  // 最高位的进位处理
    for (auto a : tem) {
        c = c + to_string(a);
    }
    return c;
}
int main() {
    string num1, num2;
    
    while (cin >> num1 >> num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string anst = add(num1, num2);
        string ans = string(anst.rbegin(), anst.rend());
        cout << ans << endl;
    }
    return 0;
}