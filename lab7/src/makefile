CC=gcc

tcpclient: tcpclient.c
	$(CC) tcpclient.c -o tcpclient

tcpserver: tcpserver.c
	$(CC) tcpserver.c -o tcpserver

udpclient: udpclient.c
	$(CC) udpclient.c -o udpclient

udpserver: udpserver.c
	$(CC) udpserver.c -o udpserver

tcp: tcpclient tcpserver

udp: udpclient udpserver

start_udp:
	./udpserver 20003 100 &
	./udpclient 127.0.0.1 20003 100

start_tcp:
	./tcpserver 20004 100 &
	./tcpclient 127.0.0.1 20004 100

clean :
	rm tcpclient tcpserver udpclient udpserver