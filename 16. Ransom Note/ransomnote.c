

bool canConstruct(char * ransomNote, char * magazine){
    int count[100];
    for(int i=0; i<=50; i++)
        count[i] = 0;
    for(int i=0; i < strlen(magazine); i++){
        count[magazine[i] - 'a' + 1]++;
    }
    for(int i=0; i < strlen(ransomNote); i++){
        count[ransomNote[i] - 'a' + 1]--;
    }
    for(int i=0; i<=50; i++)
        if(count[i] < 0) return 0;
    return 1;
}