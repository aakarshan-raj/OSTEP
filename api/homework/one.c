#include <stdio.h>


int main(){

    int x = 100;
    
    int rc = fork();
    
    if(rc < 0){
        printf("fork faild\n");
    }

    else if(rc == 0){
        x = 99;
        printf("x in child process is:%d\n",x);
    }

    else{
        int cc = wait(NULL);
        printf("x in parent process is:%d\n",x);
    }


}
