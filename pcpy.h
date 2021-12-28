#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>

int block(const char * SFlie,int pronum);
int check_arg(const char * SFile,int arg_num,int pronum);
int procreate(const char * SFIle,const char * DFile,int pronum,int block);

