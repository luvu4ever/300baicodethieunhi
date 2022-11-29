

bool isAnagram(char * s, char * t){
    int count[100];
    if(strlen(s) != strlen(t)) 
        return 0;
    for(int i=1; i<=25; i++)
        count[i] = 0;
    for(int i=0; i< strlen(s); i++)
    {
        count[s[i] - 'a' + 1]++;
        count[t[i] - 'a' + 1]--;
    }
    for(int i=1; i<=25; i++)
    {
        if(count[i] != 0)
            return 0;
    }
    return 1;
}
