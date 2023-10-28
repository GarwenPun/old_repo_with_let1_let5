// Галкин Артём ИУ10-17
#include <iostream>
int main(){
    char symbols[] = "1234567890AaBbCcDdEeFfGgHhXxYyZz";
    for (char s1 : symbols){
        for (char s2 : symbols){
            for (char s3 : symbols){
                for (char s4 : symbols){
                    for (char s5 : symbols){
                    printf("%c%c%c%c%c\n",s1, s2, s3, s4, s5);
                    }
                }
            }
        }
    }
    return 0;
}