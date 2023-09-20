#ifndef MAIN_H
#define MAIN_H

int main(int ac, char **av);
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

#endif
