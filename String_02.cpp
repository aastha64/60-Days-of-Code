// Check whether the given string is a palindrome or not
bool isPalindrome(char string){
    int n = string.size();
    int s = 0;
    int e = n-1;
    while(s < e){
        if(string[s] != string[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }

    return true;
}