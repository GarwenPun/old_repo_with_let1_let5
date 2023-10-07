#include <iostream>

int MaxOctLen(int num){
    int maxLen = 1;
    if (num < 0){
        maxLen++;
        num = -num;
    }
    while (num >= 8){
        maxLen++;
        num /=8;
    }
    return maxLen;
}

char* Dec_2_Oct(int num){
    int maxLen = MaxOctLen(num);
    int num_1 = num;
    char* octStr = new char[maxLen + 3];

    int i = maxLen + 1;
    int abs_num = abs(num_1);
    while (abs_num > 0){
        octStr[i] = '0' + abs_num % 8;
        abs_num /= 8;
        i--;
    }
    if (num == 0){
        octStr[0] = '0';
        octStr[1] = 'o';
        octStr[2] = '0';
    }
    if (num > 0){
        octStr[0] = '0';
        octStr[1] = 'o';
    }
    if (num < 0){
        octStr[0] = '-';
        octStr[1] = '0';
        octStr[2] = 'o';
    }

    octStr[maxLen + 2] = '\0';

    return octStr;
}

int main(){
    // int num;
    // std::cout << "Enter: ";
    // std::cin >> num;
    // char* octStr = Dec_2_Oct(num);
    // std::cout << octStr << std::endl;
    // delete[] octStr;
    // return 0;
    int k = -1000;
    for (k; k < 1000; k++){
        char* octStr = Dec_2_Oct(k);
        std::cout << k << "    "  << octStr << std::endl;
        delete[] octStr;
    }
    return 0;
}