# 常用头文件函数

#### 通用头文件

＜bits/stdc++.h>包含了目前c++所包含的所有头文件．

```c++
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Here you should write something.    
    return 0;
}
```

#### 常用头文件

```c++
#include<iostream>
// cin cout
#include<cstdio>
// printf scanf
#include<algorithm>
//sort
#include<vector>
//...
```

#### 输入输出

```c++
// 不知道几组的情况
while(cin>>a>>b){
    cout<<a+b<<endl;
    // here you should write otherthing.
}

// 输入字符串
#include <iostream>
#include <string>
using namespace std;
main ()
{
    char a[20]; // or string a;
    // 接收一个字符串，遇“空格”、“TAB”、“回车”就结束
    cin>>a;
    cout<<a<<endl;
}

// 接收一个字符串，可以接收空格并输出
main ()
{
    char a[20];
    cin.getline(a,5); //需要指定长度，实际接受４个字符，最后一个为'\0'
    cout<<m<<endl;
}

// 接收一个字符串，可以接收空格并输出.即：接受全部内容．
main ()
{
    // a必须声明为string.
    string a;
    getline(cin,a);
    cout<<str<<endl;
}

// printf 格式化输出　int printf(const char *format,[argument]);
// format的定义格式：%[flags][width][.perc] [F|N|h|l]type
//     ［标志］［输出最少宽度］［．精度］［长度］类型
main()
{
    int a;
    cin>>a;
    printf("%6d\n", a);
    long long b; cin>>b;
    printf("%lld\n", b); //l对整型指long型，对实型指double型
    printf("%06.1f\n", a);
    printf("%e\n", a); 
    printf("%s\n", a);
    printf("%o\n", a);
    printf("%x\n", a);
    printf("%X\n", a);
    cout<<a<<endl;
    printf("%d", (int)sizeof(a));
}

```

#### 数据处理

```c++
数组清零　memset(a,0,sizeof(a));　memset对int数组赋初值时只能赋值0，其他数都不能赋值．

数组a全部复制到数组b:memcpy(b,a,sizeof(a));
数组a复制k个元素到数组b：memcpy（b,a,sizeof(int)*k);

数组赋值
fill(a, a+10, 100000);
fill(vt.begin(), vt.end(), -100000);

大小写转换　tolower(char c), toupper(char c)

字符数组转数字型(#include <stdlib.h>)　atoi(const char* str) 还有atof(), atol();  // 只接受char 数组形式的字符串．
c_str()将string对象转化为c语言字符串。
string类型字符串转换为int stoi(); stof();

整形，浮点型等转换为string类型字符串 string to_string(val);

取绝对值　整数：abs(int a); 浮点数：fabs(double a); 长整形：labs(long a);

isalnum()
判断一个字符是不是alphanumeric，即大小写英文字母或是数字
isalpha()
判断一个字符是不是alphabetic，即英文字母
isdigit()
判断一个字符是不是数字
```

### 序列容器

常用容器： vector、deque、list、queue、stack．序列的元素必须是严格的线性顺序排序。因此序列中的元素具有确定的顺序，可以执行将值插入到特定位置、删除特定区间等操作。

```c++
vector<int> a(10, 2); // 初始化长度为10, 值全为2．
vector<int> a(b.begin(), b.end()); //初始化为与b相同．
a.insert(a.begin(), 3);
a.insert(a.begin(), 5, 3); //插入５个３．
a.insert(a.begin(), b.begin(), b.begin()+3); 

a.erase(a.begin());
a.erase(a.begin(), a.begin()+10);
```