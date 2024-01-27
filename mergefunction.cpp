void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
   
    int i=0,j=0,idx=0;
    while(i<size1&&j<size2){
        if(arr1[i]<arr2[j]){
            ans[idx]=arr1[i];
            i++;
            idx++;
        }else{
        ans[idx]=arr2[j];
        j++;
        idx++;
    }
    }

    while(i<size1){
        ans[idx] = arr1[i];
        i++;
        idx++;
    }
    while(j<size2){
        ans[idx]=arr2[j];
        j++;
        idx++;
    }
    
    
}

