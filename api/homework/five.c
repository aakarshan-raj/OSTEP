#include <stdio.h>

int main(){

  int rc = fork();

  if(rc < 0){
        printf("fork failed\n");
   }
  else if(rc == 0){
      printf("in child process\n");
      int aa = wait(NULL);
      printf("calling wait in child process return %d\n",aa);      
   }
   else{
      int cc = wait(NULL);
      printf("in parent process\n");
   } 

}
