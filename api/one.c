#include <stdio.h>


int main(){

   printf("World before fork, %d\n",(int) getpid());
   int rc = fork();
   if(rc < 0){
   printf("fork failed\n");
   }
   else if(rc == 0)
      printf("forked success, process id: %d\n",(int) getpid());
   
   else {
     int cc =  wait(NULL);
     printf("waited for %d\n",cc);
   }

}
