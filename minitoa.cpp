/*
 * @Author: ggulteki 
 * @Date: 2024-12-05 14:39:33 
 * @Last Modified by: ggulteki
 * @Last Modified time: 2024-12-05 14:40:05
 */

#include <iostream>
#include <cstdlib>

using namespace std;

char* minItoa(int num, int count) {
    char* str = (char*)malloc(count + 1 * sizeof(char));

    str[count] = '\0';
    count = count - 1;
    if (num < 0) {
        num *= -1;
        str[0] = '-';
    }
    
    while(num) {
        int digit = num % 10 + 48;
        str[count] = digit;
        num /= 10;
        count--;
    }

    return str;
}

int main() {
    int number = -1234, digitCount = 5;
    char *str = minItoa(number, digitCount);

    cout << str;

    free(str);

    return 0;
}