#include <riak_client/client.h>
#include <stdio.h>

int
main(int argc, char *argv)
{
    riak_client client;

    client = riak_client_new("localhost", "8087");
    riak_object object = riak_get(client, "bucket", "foo");
    
    printf ("%s -> %s\n", )

    return 0;
}
