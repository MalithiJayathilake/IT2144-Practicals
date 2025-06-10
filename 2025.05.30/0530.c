//send

#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MAX 100


struct mesg_buffer{
        long mesg_type;
        char mesg_text[1000];
}message;
int main()
{
        key_t key;
        int msgid;
       
        key = ftok("progfile2021ICT52",52);
        
        msgid = msgget(key,0666 | IPC_CREAT);
        message.mesg_type = 1;
        printf("Write Data: ");
        fgets(message.mesg_text,MAX,stdin);
        
        msgsnd(msgid,&message,sizeof(message),0);
        
        printf("Data send is: %s \n",message.mesg_text);
        return 0;
}


//receiver

#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct mesg_buffer{
        long mesg_type;
        char mesg_text[1000];
}message;
int main()
{
        key_t key;
        int msgid;
       
        key = ftok("progfile2021ICT52",54);
        
        msgid = msgget(key,0666 | IPC_CREAT);
       
        msgrcv(msgid,&message,sizeof(message),1,0);
       
        printf("Data Received is: %s \n",message.mesg_text);
       
        msgctl(msgid,IPC_RMID,NULL);
        return 0;
}


[2021ict52@fedora ~]$ touch progfile2021ICT52
[2021ict52@fedora ~]$ chmod 644 progfile2021ICT52


[2021ict52@fedora ~]$ vi Day18send.c
[2021ict52@fedora ~]$ vi Day18receiver.c
[2021ict52@fedora ~]$ gcc Day18send.c -o Day18send
[2021ict52@fedora ~]$ gcc Day18receiver.c -o Day18receiver
[2021ict52@fedora ~]$ ./Day18send
Write Data: Hello World
Data send is: Hello World

[2021ict52@fedora ~]$ ./Day18receiver
Data Received is: Hello World

