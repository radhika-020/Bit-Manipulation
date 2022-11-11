//To check, if the number is the power of 2, then in that case, very first, we need to take n and n-1 and then perform & operation on them, if they are equal to 0, then it is a power of 2, else not.
int power_of2(int n){
  return (n && !(n & n-1)); // The first condition is the base case, i.e., if n is 0.
}

int main(){
  cout<<power_of2<<endl;
  return 0;
}
