/* 
 	Given an unsigned integer, reverse all bits of it and return the number with reversed bits.
*/



unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
     
    // traversing bits of 'n' from the right
    while (n > 0)
    {
        // bitwise left shift
        // 'rev' by 1
        rev <<= 1;
         
        // if current bit is '1'
        if (n & 1 == 1)
            rev ^= 1;
         
        // bitwise right shift
        // 'n' by 1
        n >>= 1;
	// Deubg line to see the process
        printf("%u %u\n", rev,n);

             
    }
     
    // required reverse number
    return rev;
}


int main()
{
    unsigned int x = 5; 
    printf("%u", reverseBits(x));
    return 0;
}
