#ifndef KERNEL_H
#define KERNEL_H

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define kdebug(str) _kdebug(__FILE__ ":" STR(__LINE__) ": " str)

void _kdebug(const char* s);
void kdebug_char(char c);
void kdebug_base(uint64_t value, uint32_t base);
void kdebug_nl();


void active_screensaver();

#endif
