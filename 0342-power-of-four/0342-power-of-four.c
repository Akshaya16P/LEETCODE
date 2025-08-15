bool isPowerOfFour(int n) {
    return n>0 && __builtin_popcount(n)==1 && n%3==1;
}     