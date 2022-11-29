

bool isPalindrome(char * s){
    int left = 0, right = strlen(s);
    while(left <= right){
        if(!isalpha(s[left]) && !isdigit(s[left])){
            left++;
            continue;
        }
        if(!isalpha(s[right]) && !isdigit(s[right])){
            right--;
            continue;
        }
        if(isdigit(s[left]) || isdigit(s[right]))
        {
            if(s[left] != s[right])
                return 0;
            left++;
            right--;
            continue;
        }
        if(s[left] != s[right] && abs(s[left]-s[right]) != 32)
            return 0;
        left++;
        right--;
    }
    
    return 1;
}