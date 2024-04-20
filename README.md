Made changes to the XV6 code repository to implement 2 system calls and 2 scheduling algorithms.  
The chngprior is called if the user wants to change the priority of a user program, the priority of programs are defined by the kernel.  
The prodt system call is called if the user wnats to know the details of all the programs that are running, program details include information like priority,cpu time etc.  
Priority Schedular has been implemented in proc.c.  
