#ifndef _LIBOS_GETOPT_H
#define _LIBOS_GETOPT_H

#include <stddef.h>

int libos_get_opt(
    int* argc,
    const char* argv[],
    const char* opt,
    const char** optarg,
    char* err,
    size_t err_size);

#endif /* _LIBOS_GETOPT_H */