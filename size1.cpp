#include <stdio.h>
  
int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;
  
    printf("Size of int is: %ld\n",
           sizeof(integerType));
  
    printf("Size of char is: %ld\n",
           sizeof(charType));
  
    printf("Size of float is: %ld\n",
           sizeof(floatType));
  
    printf("Size of double is: %ld\n",
           sizeof(doubleType));
  
    return 0;
}
