#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <time.h>
using namespace std;



int main(){
    time_t start,stop;
    start = time(NULL);
    
    stop = time(NULL);
    printf("Use Time:%ld\n",(stop-start));
    return 0;
}