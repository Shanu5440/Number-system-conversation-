#include <stdio.h>

int main() {

  int dec_num, bin_num, oct_num, hex_num;
  
  printf("Enter a decimal number: ");
  scanf("%d", &dec_num);

  bin_num = dec_num;
  printf("Binary equivalent: ");
  while(bin_num != 0) {
    printf("%d", bin_num % 2);
    bin_num /= 2;
  }

  oct_num = dec_num;
  printf("\nOctal equivalent: ");
  while(oct_num != 0) {
    printf("%d", oct_num % 8);
    oct_num /= 8;
  }

  hex_num = dec_num;
  printf("\nHexadecimal equivalent: ");
  while(hex_num != 0) {
    if(hex_num % 16 < 10) {
      printf("%d", hex_num % 16);
    } else {
      printf("%c", (hex_num % 16) + 55); 
    }
    hex_num /= 16;
  }

  return 0;
}