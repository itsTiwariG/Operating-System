#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(){

    for(int i=0; i<15; i++){
        int p = fork();
        if (p==0)
        {
            printf(1, "%d Child process id\n", getpid());
            exit();
        }
        else{
            printf(1,"%d Parent Process id\n", getpid());
        } 
    }
    exit();
}