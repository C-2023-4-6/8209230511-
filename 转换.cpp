#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    char c;
    printf("ÇëÊäÈëÒ»¸ö×Ö·û->");
    cin("%c", & c);
    if (c >= 'a' && c <= 'z') { 
        c -= 32; // 
        printf("%c\n", c);
    }
    else if (c >= 'A' && c <= 'Z') { 
        printf("%d\n", c); 
    }
    else 
        printf("other\n");
    
    return 0;
}
