#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int g=0;

void *myThreadFun(void *vargp)
{
	int *myid=(int *)vargp;
	static int s=0;
	++s;
	++g;
	printf("Thread ID: %d, Static: %d, Global: %d\n", *myid, ++s, ++g);
	sleep(30);
	return NULL;
}


int main()
{
	pthread_t tid;
	printf("Before Thread\n");
for(int i=0;i<10;i++)
{
	pthread_create(&tid,NULL,myThreadFun,(void *)&tid);
	sleep(5);
}
	pthread_exit(NULL);
	printf("After Thread\n");
	return 0;
	
}

