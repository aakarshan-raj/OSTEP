#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/wait.h>



int main(){

  int rc = fork();

  if(rc < 0){
        printf("fork failed\n");
   }
  else if(rc == 0){
      close(STDOUT_FILENO);
      printf("in child process\n");
   }
   else{

        printf("in parent process:\n");
   } 

}
