#include <stdio.h>



int main(){

    printf("Parent Process id:%d\n",(int)getpid());
    int rc = fork();
    if(rc < 0){
        printf("Fork failed\n");
    }
    else if(rc == 0){
        printf("Child process ID:%d\n",(int)getpid());
    }
    else{
        printf("waiting for child process to complete\n");
        int cc = wait(NULL);
        printf("DONE\n");
    }
    printf("Hello World\n");

}
