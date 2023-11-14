#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(int argc, char *argv[]) {
  sched_statistics();  // Call the newly implemented system call
  exit(0);  // Exit the program
}
