

int longestPalindrome(char * s){
    int ans = 0;
    int odd = 0;
    int count [150];
    for(int i=0; i<= 140; i++)
        count[i] = 0;
    for(int i=0; i< strlen(s); i++){
        count[s[i]]++;
    }
    //a to z
    for(int i = 97; i <= 122; i++){
        ans += (count[i] / 2);
        if(count[i] % 2) odd = 1;
    }
    for(int i = 65; i<= 90; i++){
        ans += (count[i] / 2);
        if(count[i] % 2) odd = 1;
    }
    ans *= 2;
    ans += odd;
    return ans;
}