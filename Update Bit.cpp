//This means updating the bit at a given position and from a given value(either 0 or 1). Updating abit means first clearing that bit and setting that bit to that specific value.
void main(int n, int pos, int value){
  //For updation
  int mask = ~(1<<pos);
  n = n & mask;
  return (n | (value<<pos));
}

int main(){
  cout<<update_bit(5, 2, 1);
}
