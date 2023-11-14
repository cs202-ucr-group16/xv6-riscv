// Test that sysinfo returns:
//  - number of active process if provided 0.

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#define MAX_PROC 10



int main(int argc, char *argv[])
{   
    printf("testttt");
    sched_statistics();
    exit(0);
  }
  