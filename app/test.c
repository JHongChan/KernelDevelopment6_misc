#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>


void led_all_off();
int main(int argc, char **argv) 
{
	int i=9;
	char send[20];
	
	int fd = open("/dev/btn_misc_device",O_RDWR);
	
	led_all_off(fd);
	send[0]=1;
	send[1]=0;
	while(1)
	{
		send[1]=send[1]%4+1;
		led_all_off(fd);
		i=write(fd,send,2);
		printf("%d\n",i);
		sleep(1);
	}
	
	
	close(fd);
	
		
	return 0;
}

void led_all_off(int fd)
{
	write(fd,"\0\1",2);
	write(fd,"\0\2",2);
	write(fd,"\0\3",2);
	write(fd,"\0\4",2);
}

