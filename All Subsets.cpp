//In the case of subset, first we will run a loop from 0 to 2 raised to the power n (1<<n), because we know that number of subsets = 2^n, and then we will run an inner loop for each character of arr, in which we will check, if the jth element is 0, we will print nothing or else we will print that element of the array.
int subsets(int arr, int n){
  // n is the size of the array
  for (int i =0; i< (1<<n); i++){
    for (int j = 0; j< n; j++{
      if (i & (1<<j)){
        cout<<arr[j]<<" ";
      }
    }
    cout<<endl;
  }
}
         
int main(){
  cout<<subsets<<endl;
  return 0;
}
