#include <stdlib.h>
#include <stdio.h>

const int MAX=9;

void printValues(int* values){
	printf("["); 
	for(int i = 0; i < MAX; i++){
		printf("%d ", values[i]); //Turns out, placing the [] before and after the loop only adds two of those. oops
	}
	printf("] \n");
} // end printValues()

void swap(int* x, int* y){
        int temp = *x; //temporary for short
        *x = *y;
        *y = temp;
} //end swap()

void sort(int* values){
	int i; 
	int j;
	for(i = 0; i < MAX - 1; i++){
		for(j = 0; j < MAX - 1; j++){
			if(values[j] > values[j + 1]){
				swap(&values[j], &values[j + 1]);
				printValues(values);
			}
		}
	}
}// end sort()

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} //end main
