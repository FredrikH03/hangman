#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int checkThisShitOut(int* x){
  bool check = true;
  for(int y = 0; y < *x;){
    y++;
    if(check == true){
      if(y != *x && y != 1){
        if((*x%y)==0){
          check = false;
        }
        else{
        }
      }
    }
  }
  if(check == true && (*x != 0 && *x != 1)){
    printf("X IS EQUALS: %d\n", *x);
  }
  return 0;
};


void main(){
  int x = 0;
  for(x = 0; true; x++){
    checkThisShitOut(&x);
  }
  return;
}


