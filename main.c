#include <time.h>
#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
#include "find.h"
int main() {
srand(time(NULL));
int tab[20];
int tab_l=sizeof(tab)/sizeof(int);
  for (int i=0;i<tab_l;i++) tab[i]=rand()%(2001-100);
  int search_for=tab[8];
  printf("unsorted table:\n");
  print_table(tab,tab_l);
  quicksort(tab,0,tab_l);
  printf("sorted table:\n");
  print_table(tab,tab_l);
  int val=bin_find(tab,search_for,tab_l-1,0);
  printf("found!: %d \n",tab[val]);
}

