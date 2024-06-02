#include "find.h"
int bin_find(int* tab, int target,int h, int l){
if(h>=l){
    int mid=l+(h-l)/2;
    if (tab[mid]==target) return mid;
    if (tab[mid]>target) return bin_find(tab,target,mid-1,l); else return bin_find(tab,target,h,mid+1);
  }
  return -1;  
}
