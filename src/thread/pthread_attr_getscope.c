#include "pthread_impl.h"

int pthread_attr_getscope(const pthread_attr_t *restrict a, int *restrict scope)
{
	*scope = PTHREAD_SCOPE_SYSTEM;
	return 0;
}
