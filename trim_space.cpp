void trimSpaces(char input[]) {
    int space =0,character=0;
    for(int i=0; ;i++){
        if(input[i]==' '){
            space = i;
            break;
        }
    }
    for(int i=space; ; i++){
        if(input[i]>='a'&&input[i]<='z'){
            character=i;
            break;
        }
    }
    for(int i=character; ; i++){
        if(input[i]=='\0'){
            break;
        }else if(input[i]!=' '){
            swap(input[space++],input[i]);
        }
    }
}