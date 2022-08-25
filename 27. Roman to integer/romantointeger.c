#include<stdio.h>
#include<string.h>

int romanToInt(char * s){
    int cur = 0;
    int ans = 0;
    while(cur < strlen(s)){
        if(s[cur] == 'I'){
            if(s[cur+1] == 'V' || s[cur+1] == 'X'){
                if(s[cur+1] == 'V') ans += 5-1;
                if(s[cur+1] == 'X') ans += 10-1;
                cur += 2;
            } else{
                cur += 1;
                ans += 1;
            }
            continue;
        }
        if(s[cur] == 'X'){
            if(s[cur+1] == 'L' || s[cur+1] == 'C'){
                if(s[cur+1] == 'L') ans += 50 - 10;
                if(s[cur+1] == 'C') ans += 100 - 10;
                cur += 2;
            } else{
                cur += 1;
                ans += 10;
            }
            continue;
        }
        if(s[cur] == 'C'){
            if(s[cur+1] == 'D' || s[cur+1] == 'M'){
                if(s[cur+1] == 'D') ans += 500 - 100;
                if(s[cur+1] == 'M') ans += 1000 - 100;
                cur += 2;
            } else{
                cur += 1;
                ans += 100;
            }
            continue;
        }
        if(s[cur] == 'V'){
            cur += 1;
            ans += 5;
            continue;
        }
        if(s[cur] == 'L'){
            cur += 1;
            ans += 50;
            continue;
        }
        if(s[cur] == 'D'){
            cur += 1;
            ans += 500;
            continue;
        }
        if(s[cur] == 'M'){
            cur += 1;
            ans += 1000;
        }
        //printf("%d %d\n", cur, ans);
    }
    return ans;
}

int main(){
    char s[10005];
    scanf("%s", s);
    printf("%d", romanToInt(s));
    return 0;
}