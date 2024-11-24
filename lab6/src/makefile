CC=gcc

client: client.c
	$(CC) client.c utils.o -L -lutils -pthread -o client

server: server.c
	$(CC) server.c utils.o -L -lutils -pthread -o server

libutils.so: utils.o
	$(CC) -shared utils.o -o libutils.so

utils.o : utils.c
	$(CC) -c -fPIC utils.c -o utils.o

clean :
	rm client server libutils.so utils.o

all : libutils.so server client

run_servers: server.c
	./server --port 20001 --tnum 4 &
	./server --port 20002 --tnum 4 &

run_client: client.c
	./client --k 10 --mod 11 --servers servers.txt