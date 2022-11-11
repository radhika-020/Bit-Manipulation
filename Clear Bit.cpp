//This function deals with clearing the bit at a given position, i.e., setting that bit to 0. This can be done by first making a number which ontains 1 at the place of the given position and 0 elsewhere. And then taking the one's complement of that number. And then this one's complement to be performed & operation with the original number which will get us the desired result.
int clear_bit(int n, int pos){
  int mask = ~(1<<pos);
  return (n & mask);
}

int main(){
  cout<<clear_bit<<endl;
}
