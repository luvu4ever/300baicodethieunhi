class Solution {
public:
    string addBinary(string a, string b) {
        string answer;
        int n = a.length() - 1;
        int m = b.length() - 1;
        int rem = 0;
        char plus;
        while(n != -1 || m != -1){
            int nbra, nbrb;
            if (n == -1) nbra = 0;
            else nbra = a[n--] - '0';
            if(m == -1) nbrb = 0;
            else nbrb = b[m--] - '0';
            int sum = nbra + nbrb + rem;
            plus = '0';
            rem = 0;
            if(sum % 2) plus = '1';
            if(sum > 1) rem = 1;
            answer = plus + answer;
        }
        if(rem == 1)
            answer = "1" + answer;
        return answer;
    }
};