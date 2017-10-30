#include <stdio.h>

int main() {
    int i, temp = 746;
    for(int i = 0 ; i < 10 ; i++)
      printf("%d\n",temp>>i%2);
    return 0;
}