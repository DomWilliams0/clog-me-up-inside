# clog-me-up-inside
Simple header-only C logging

## Example
### example/test.c

```c
#include "clog.h"

void do_bad_in_other_function() {
	LOG_ERROR("uh oh");
}

int main() {
	LOG_DEBUG("not visible unless DEBUG is #defined");
	LOG_INFO("hello there");
	LOG_WARN("careful, warning");

	do_bad_in_other_function();
}
```

### Output
```
INFO  test.c:9:main(): hello there
WARN  test.c:10:main(): careful, warning
ERROR test.c:4:do_bad_in_other_function(): uh oh
```
