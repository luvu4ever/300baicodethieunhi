

int lengthOfLongestSubstring(char * s){
    int visited[1000];
    int ans = 0;
    for(int i=1; i<= 200; i++)
        visited[i] = 0;
    int start = 0;
    for(int i = 0; i < strlen(s); i++){
        if(visited[s[i]]){
            while(visited[s[i]])
                visited[s[start++]]--;
        }
        visited[s[i]]++;
        if(i - start + 1 > ans)
            ans = i - start + 1;
    }
    return ans;
}