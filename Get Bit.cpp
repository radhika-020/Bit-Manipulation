//This function deals with accepting a binary number and then returning a bit at the given position. For eg, 0101 == 5(in deciamls), we need to get bit of 2nd poition, and as we know in case of binary numbers, we know that the 0th poition is from the right most element, 1st position is the second right and so on. Therefore, for this function we are using a logic for say, number is 0101 and we need to find bit for second position, then for this, we are left shifting the number by 2, which will get us the result as 0100, or simply we can say that the bit we are trying to find should remain 1 and others as 0. Then, after doing this, we need to perform the & operation on the given number and the number we made. Here, 0101 & 0100 will result in 0100, therefore, we can conclude here that the second right bit is 1 in this case.
int get_bit(int n, int pos){
     return ((n & (1<<pos))!=0);
}

void main(){
     cout<<get_bit(5, 2)<<endl;
}
