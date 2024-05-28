#include <stdio.h>


int main(){

    
    int rc = fork();
    
    if(rc < 0){
        printf("fork faild\n");
    }

    else if(rc == 0){
        printf("Hello");
    }

    else{
//        int cc = wait(NULL);
        printf(" World");
    }


}
