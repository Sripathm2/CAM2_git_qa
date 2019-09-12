#include <stdio.h>
int main() {
	int arr[6] = {4, 8, 10, 3, 11, 5};
	int temp, swapped;
  while(1) {
    swapped = 0;  
    for (int i = 0; i < 5; i++) {
        if(arr[i] > arr[i + 1]) {
          temp = arr[i];
          arr[i] = arr[i + 1];
          arr[i + 1] = temp;
          swapped = 1;
        }
      }
    if(swapped == 0) {
      break;
    }
  }

  for(int i = 0; i < 6; i++) {
    printf("%d\n", arr[i]);
  }

	return 0;

}