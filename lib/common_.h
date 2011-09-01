/* libtinynotify -- common utility functions
 * (c) 2011 Michał Górny
 * 2-clause BSD-licensed
 */

#pragma once
#ifndef _TINYNOTIFY_COMMON__H
#define _TINYNOTIFY_COMMON__H

#define _mem_assert(x) _mem_check(!!(x))

void _mem_check(int res);
void _property_assign_str(char** prop, const char* newval);

#endif /*_TINYNOTIFY_COMMON__H*/