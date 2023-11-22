#pragma once

/* adjust these macros to benchmark various operations */
#define USE_POLL 1
#define USE_SPLICE 0
#define USE_RECV_SEND 1

#define BACKLOG 512
#define MAX_MESSAGE_LEN 512

int init_socket(int portno);
