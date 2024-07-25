#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include<sys/socket.h>	//header file for socket
#include<netinet/in.h>
#include<netinet/ip.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/types.h>

/*struct sockaddr_in
{
int sin_port;
int sin_family;
struct in_addr
{
long s_addr;
} sin addr;
} server;
*/

int main()
{
int sockfd=socket(AF_INET,SOCK_STREAM,0);	//(domain, socket_type, protocol)
printf("The socket value is %d\n",sockfd);
if(sockfd == -1)
{
perror("Socket creation failed");
exit(0);
}

struct sockaddr_in server,client;
server.sin_port=htons(5000);	//htons = host to networks
server.sin_family=AF_INET;
server.sin_addr.s_addr=inet_addr("127.0.0.1");
int b=bind(sockfd,(struct sockaddr*)&server,sizeof(server));
printf("Bind passed: %d\n",b);
if(sockfd == -1)
{
perror("Bind failed\n");
exit(0);
}
}
