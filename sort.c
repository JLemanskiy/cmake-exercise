#include <stdbool.h>
#include <stdio.h>
#include "sort.h"

void swap(int* i, int* j){
  int k=*i;
  *i=*j;
  *j=k;
}
void quicksort(int *tab,int l, int r){
  int central_point=tab[(r+l)/2];
    int i=l-1;
  int j=r+1;
    if(l >= r) return;
  while (true) {
  while (central_point>tab[++i]);
    while(central_point<tab[--j]);
    if(i<=j) swap(&tab[i],&tab[j]); else break;
  }
  if(j>l) quicksort(tab,l,j);
  if(i<r) quicksort(tab,i,r);
}
void print_table(int* table,int len){
  for(int i=0;i<len;i++){
    printf("%d\n",table[i]);
  }
}
