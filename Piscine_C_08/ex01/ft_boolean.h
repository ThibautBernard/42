#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__ 
#include <unistd.h>

typedef int t_bool;

#define FALSE 0
#define TRUE 1
#define SUCCESS 0
#define EVEN(x) x % 2 == 0 
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#endif

