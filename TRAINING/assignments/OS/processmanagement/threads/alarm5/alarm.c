#include "errors.h"

struct alarm{
   				int secs;
				char messg[64];
				struct alarm *next;
	};

void *thread_fun(void *alarm)
{
	struct alarm *ala = (struct alarm *) alarm;
	sleep(ala->secs);
	printf("[%d] %s\n", ala->secs, ala->messg);
	signal(SIGCHLD, SIG_IGN);
	
	return NULL;
}

/*struct alarm{
   				int seconds;
				char *message;
				struct alarm *next;
	};*/

int main()
{
	int status;
	struct alarm *head = NULL;
	struct alarm *ala = NULL;
//	int seconds;
	char line[128];
//	char message[64];
	pthread_t th_id;
	
	while(1)
	{
		ala = (struct alarm*)malloc(MAX * sizeof(struct alarm));
		printf("Alarm> ");

		if(fgets (line, sizeof(line), stdin) == NULL) exit(0);
		if(strlen (line) <= 1) continue;

		/*
		  *parse input into seconds (%d) and a message (%64["\n"]),
		  *consists of up to 64 characters
		  *seperated from seconds by white space
		*/


		if(head == NULL)
			head = ala;
		else {
			ala -> next = head;
			head = ala;
			
			}

		if(sscanf (line, "%d %64[^\n]", &head->secs, head-> messg) < 2){
			fprintf(stderr, "BAD COMMAND\n");
		}
		else {
			status = pthread_create(&th_id, NULL, thread_fun, head);
			if(status != 0) 
			{
				printf("thread creation failed: %s\n", strerror(status));
			}
		}
	}

	pthread_exit(NULL);
	return 0;
}

