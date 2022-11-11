//This function deals with setting the bit. Setting bit means if we are given a specific position then in that case, we have to set 1 there. And unsetting a bit means, if we are given a position, we need to unset that bit to 0. This is also done likely to the get_bit function, the only difference is instead of performing & operation here, we need to perform | operation here.
int set_bit(int n, int pos){
    return (n  | (1<<pos));
}

void main(){
  cout<<set_bit(5, 1);
}
