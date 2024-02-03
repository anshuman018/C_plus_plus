#include <algorithm>
char highestOccurringChar(char input[]) {
    int arr[256]={0};
    int maxfreq = 0;
    for(int i = 0; input[i]!='\0';i++){
        arr[input[i]]+=1;
        maxfreq = max(maxfreq, arr[input[i]]);
    }
    for(int i = 0; input[i]!='\0' ;i++){
        if(arr[input[i]]==maxfreq){
            return input[i];
            break;
        }
    }
}