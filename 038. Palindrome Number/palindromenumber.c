#include<stdio.h>

int isPalindrome(int x){
    int ans = 0;
    int temp = x;
    while(x != 0){
        int digit = x% 10;
        ans = ans*10 + digit;
        x/=10;
    }
    if(ans == temp) return 1;
    return 0;
}

int main(){
    printf("%d", isPalindrome(121));
    return 0;
}