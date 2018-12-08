#include <stdio.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
main()
{
	int result;
	result = socket (AF_INET, SOCK_STREAM, 0);
 	if (result == -1 )
	{
		close (result);
		exit (EXIT_FAILURE);
	}
	else
	{
		printf ("Socket Successfully Created!!!");
	}

}