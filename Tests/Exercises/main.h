#ifndef MAIN_H
#define MAIN_H

char *read_line(void);
char *_getenv(const char *name);
void print_path(void);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

#endif
