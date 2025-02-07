/**
 * @brief       NDN network with external communication capability
 *
 * @author      Pratik Pathak <pathakp@tcd.ie>
 *
 * @}
 */

#include <stdio.h>

#include "ndn-riot/ndn.h"
#include "shell.h"
#include "msg.h"

extern int ndn_ping(int argc, char **argv);
extern int udp_send(int argc, char **argv);
extern int udp_server(int argc, char **argv);

static const shell_command_t shell_commands[] = {
    { "ndn", "start ndn-ping client and server", ndn_ping },
    { "udp", "send udp packets", udp_send },
    { "udps", "start udp server", udp_server },
    { NULL, NULL, NULL }
};

int main(void)
{
    /* start shell */
    puts("All up, running the shell now");
    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(shell_commands, line_buf, SHELL_DEFAULT_BUFSIZE);

    /* should be never reached */
    return 0;
}
