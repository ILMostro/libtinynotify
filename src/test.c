#include "tinynotify.h"

#include <stdio.h>

void print_errors(NotifySession s) {
	fprintf(stderr, "ERROR: %d (%s)\n", notify_session_get_error(s),
			notify_session_get_error_message(s));
}

int main(void) {
	NotifySession s;

	s = notify_session_new();
	print_errors(s);
	notify_session_free(s);

	return 0;
}
