// Note that n & n-1 has same n bits except the rightmost set bit.
#include<iostream>
using namespace std;

int number_of_1(int n){
  int count = 0;
  while(n){
    count ++ ;
  }
  return count;
}

int main(){
  cout<<number_of_1(19)<<endl;
}

//Since, we know that binary of 19 is 01011, therefore, we will ontinue this loop till 16, where the & opeartion of n(16) and n-1(15) will become 0(all bits), so here, it will be done 3 times, so it will return 0.
