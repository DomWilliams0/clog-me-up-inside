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


