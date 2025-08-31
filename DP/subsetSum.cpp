#include <iostream>
using namespace std;
bool subsetsum(int arr[], int sum, int n){
   if(sum==0) return 1;
   else if (n==0 && sum!=0) return 0;
    
    
   else if (arr[n-1]<=sum){
        return subsetsum(arr,sum-arr[n-1],n-1)||subsetsum(arr,sum,n-1);
    }
else  {
    return subsetsum(arr,sum,n-1);
}

 return 0;   
    
}
int main()
{
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter the Element of array: "<<endl;
 for(int i =0;i<n;i++){
     cin>> arr[i];
 }
 int sum;
 cout<<"Enter sum: ";
 cin>> sum;
 return subsetsum(arr,sum,n);
}