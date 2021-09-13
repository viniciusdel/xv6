#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{

  printf(1, "The number of syscalls: %d\n", partB());
  exit();
}
