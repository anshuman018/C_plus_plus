
bool checkPalindrome(string str) { 
   int n = str.size();
    for(int i = 0;i<n;i++){
       if(str[i]!=str[n-i-1]){
           return false;
       }
    }
    return true;
}