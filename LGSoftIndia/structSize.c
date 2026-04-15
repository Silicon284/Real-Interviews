#include <stdio.h>

struct student {
    char name[4];
    int rollnum;
    int height;
};

struct student Rahul;

int main(){

  int *start = NULL;
  int *end = NULL;
  
  Rahul.height = 4;
  Rahul.rollnum = 23;
  Rahul.name[4] = "ABC";

  struct student *SPoint;

  SPoint = &Rahul;
  printf("Rahul points to 0x%x \n\r", SPoint );

  start = (int *)SPoint;
  SPoint++;
  end = (int *)SPoint;
  printf("Size of structure is %d \n\r", (end-start)*4);
}