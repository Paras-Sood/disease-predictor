/*SOCKET SERVER PROGRAM*/
#include<iostream>
#include<winsock.h>
using namespace std;

int main()

{   //INITIALISE THE WSA VARIABLES
    WSADATA ws;
    if(WSAStartup(MAKEWORD(2,2),&ws)<0)
	{
	cout<<endl<<"WSA FAILED TO INTIALISE";
    }
    
	else
	{
	cout<<endl<<"WSA INITIALISED";
    }
	//INITIALISE THE SOCKET
	int nSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if(nSocket<0)
	{
	cout<<endl<<"socket not opened";
    }
    
	else
	{
	cout<<endl<<"socket opened";
    }
	//INITIALISE THE ENVIRNMENT FOR sockaddr structure
	//bind the socket to local host
	//listen the request from clients (queues the request)
	//kepp waiting for new requests and proceed as per the request
}

