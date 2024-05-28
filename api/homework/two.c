#include <stdio.h>
#include <fcntl.h>

int main(){

    int fd = open("file.txt",O_RDONLY);
    
    int BUFFER_SIZE = 1000;
    char buffer[BUFFER_SIZE];

    int fc = read(fd,buffer,BUFFER_SIZE);
    
    int rc = fork();
    
    if(rc < 0){
        printf("fork faild\n");
    }

    else if(rc == 0){
  
      printf("In child process\n");
      int bs = 1000;
      char b[bs];
      lseek(fd,0,SEEK_SET);
      int cfc = read(fd,b,bs);
      printf("Read data in child process:%s",b);
 
    }

    else{
      
      printf("Read data:%s",buffer);

    }


}
