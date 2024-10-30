CC=gcc

mutex: mutex.c
	$(CC) mutex.c -pthread -o mutex

mutex_on: mutex_on.c
	$(CC) mutex_on.c -pthread -o mutex_on

factorial: factorial.c
	$(CC) factorial.c -pthread -o factorial

deadlock: deadlock.c
	$(CC) -Wall deadlock.c -pthread -o deadlock

clean :
	rm mutex mutex_on factorial deadlock