#include <stdio.h>
#include <stdlib.h>

int insert(int *p, int count, int n){
   printf("Enter the element:");
   scanf("%d", p+count);
 
   for (int j = 0; j < count+1; j++){
      printf("element %d: %d \n", j, *(p + j));
   }
   return 1;
}

int search(int *p, int count){
   int i;
   printf("Enter element to be searched:");
   scanf("%d", &i);
   for (int j = 0; j < count; j++){
      if (i == *(p+j)){
         printf("Position: %d \n", j);
         return 1;
      }
      else{
         printf("Not found \n");
         return -1;
      }
   }
}

int ind(int *p){
   int i;
   printf("Enter index to be returned:");
   scanf("%d", &i);
   printf("%d \n", *(p+i));
   return 1;
}

int first_last(int* p, int count){
   printf("First element: %d \n", *(p));
   printf("Last element: %d \n", *(p+(count-1)));
}

int main(){
   int max, *p, count = 0, c = 0;
   printf("Enter array size: ");
   scanf("%d", &max);
   p = (int*)malloc(max * sizeof(int));


   do{
      printf("1: Insert \n 2: Search \n 3: Retrieve word \n 4: Print first and last element \n 0: Exit \n");
      scanf("%d", &c);
      switch (c){
      case 1:
         insert(p, count, max);
         count++;
         break;
      case 2:
         search(p, count);
         break;
      case 3:
         ind(p);
         break;
      case 4:
         first_last(p, count);
         break;
      }
   if (c == 0){
      free(p);
      return 0;
   }
   }while(c != 0);

}

