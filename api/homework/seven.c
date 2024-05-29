#include <stdio.h>

int main(){

  int rc = fork();

  if(rc < 0){
        printf("fork failed\n");
   }
  else if(rc == 0){
      printf("in child process\n");
      char *args[2];
      args[0] = "ls";
      args[1] = NULL;

      
      execvp(args[0],args);
   }
   else{

   } 

}
