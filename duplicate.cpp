int findDuplicate(int arr[], int n)
{
   for(int i=0;i<n-1;i++){
       bool swap = false;
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
               int temp = arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               swap = true;
           }
       }
       if(!swap){
           break;
       }
      
   }
   for(int i=0;i<n-1;i++){
       if(arr[i]==arr[i+1]){
           return arr[i];
       }
   }


}