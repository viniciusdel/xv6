#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{

  printf(1, "MyPID: %d\n", getpid());
  exit();
}
