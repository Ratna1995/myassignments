#include "errors.h"

/*void handle(int sig_num)
{
  SIG_IGN;
}*/
int main()
{
	pid_t pid;
	int seconds;
	char line[128];
	char message[64];
//	signal(SIGCHLD,handle);

	while(1)
	{
		printf("Alarm> ");
		if(fgets (line, sizeof (line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) continue;

		/* 
		*parse input into seconds (%d) and a message
		*(%64["\n]), consistes of up to 64 characters
		* seperated from seconds by white space
		*/
		if(sscanf (line, "%d %64[^\n]",&seconds,message) < 2) {
				fprintf(stderr,"Bad comand\n");
		} else {
					pid = fork(); 
					if(pid == 0){	
                   //while(1){
					sleep(seconds);
					printf("[%d] %s\n", seconds,message);
					signal(SIGCHLD,SIG_IGN);
					exit(0);
					}
				}
				//}
	}

		return 0;
}

