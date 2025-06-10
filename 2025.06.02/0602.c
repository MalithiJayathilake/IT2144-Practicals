//writer

#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define SHM_SIZE 1024 //size if shared memory segment

int main(){
	key_t key =  ftok("shmfile",52); // generate unique key
	int shmid = shmget(key,SHM_SIZE, IPC_CREAT| 0666); //create shared memeory segmewnt
	
	if(shmid == -1){
		perror("shmget");
		exit(1);
	}
	
	char *shmaddr = (char*) shmat(shmid,NULL,0); //Attach to shared memory
	if(shmaddr == (char*) -1) {
		perror("shmat");
		exit(1);
	}
	
	printf("Write Data: ");
	fgets(shmaddr, SHM_SIZE,stdin); //write data to shared memory
	printf("Data written in memory: %s\n", shmaddr);
	
	shmdt(shmaddr);  //Detach from shared memory
	
	return 0;
}

//reader

#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define SHM_SIZE 1024 //size if shared memory segment

int main(){
	key_t key =  ftok("shmfile",52); // generate unique key
	int shmid = shmget(key,SHM_SIZE ,0666); //create shared memeory segmewnt
	
	if(shmid == -1){
		perror("shmget");
		exit(1);
	}
	
	char *shmaddr = (char*) shmat(shmid,NULL,0); //Attach to shared memory
	if(shmaddr == (char*) -1) {
		perror("shmat");
		exit(1);
	}
	
	printf("Data read from memory: %s\n", shmaddr); //Read data from shared memory
	
	shmdt(shmaddr);  //Detach from shared memory
	
	shmctl(shmid,IPC_RMID,NULL); //Removed shared memory segment
	
	return 0;
}



[2021ict52@fedora ~]$ touch shmfile
[2021ict52@fedora ~]$ chmod 644 shmfile


[2021ict52@fedora ~]$ vi Day20writer.c
[2021ict52@fedora ~]$ vi Day20reader.c
[2021ict52@fedora ~]$ gcc Day20writer.c -o Day20writer
[2021ict52@fedora ~]$ gcc Day20reader.c -o Day20reader
[2021ict52@fedora ~]$ ./Day20writer
Write Data: Hello
Data written in memory: Hello

[2021ict52@fedora ~]$ ./Day20reader
Data read from memory: Hello
