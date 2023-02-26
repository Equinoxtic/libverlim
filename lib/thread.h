#ifndef THREAD_H_
#define THREAD_H_

void thread_pause(bool silent = false);
unsigned get_sleep_time(unsigned ms);
void s_sleep(unsigned ms);
void ms_sleep(unsigned ms);

#endif // THREAD_H_
