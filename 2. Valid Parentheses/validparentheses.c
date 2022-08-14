bool isValid(char * s){
    int a[10005];
    int count = 0;
    a[0] = 0;
    for(int i=0; i<strlen(s);i++) {
        if(s[i] == '(') a[++count] = 1;
        if(s[i] == '[') a[++count] = 2;
        if(s[i] == '{') a[++count] = 3;
        if(s[i] == ')')
            if(a[count] != 1) return 0;
                else
                    a[count--] = 0;
        if(s[i] == ']')
            if(a[count] != 2) return 0;
            else
                a[count--] = 0;
        if(s[i] == '}')
            if(a[count] != 3) return 0;
            else
                a[count--] = 0;
    }
    if(count == 0) return 1;
    return 0;
}