#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;
main ()
{   
    // string a = "12.3";
    vector<int> a(1, 2);
    a.insert(a.begin(), 2, 3);
    //  = new char [2]; 
    a.erase(a.begin());
    a.erase(a.begin(), a.begin()+2);
    for(int i =0; i<a.size(); i++)
        cout<<a[i]; 
    // (int)stoi(a);
    // "123.2";
    // string b = "124";
    // cout<<(a>b);
    // cout<<a;
    // char a[3];
    // string a;
    // getline(cin, a);
    // cin>>a;
    // cin.getline(a);
    // int a;
    // cin>>a;
    // printf("%6d\n", a);
    // long long b; cin>>b;
    // printf("%lld\n", b); //l对整型指long型，对实型指double型
    // printf("%f\n", a);
    // printf("%e\n", a); 
    // printf("%s\n", a);
    // printf("%i\n", a);
    // printf("%o\n", a);
    // printf("%x\n", a);
    // printf("%X\n", a);
    // cout<<a<<endl;
    // printf("%d", (int)sizeof(a));
    // cout<<a[5]<<endl;
}