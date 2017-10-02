#ifndef CLOG_H
#define CLOG_H

#include <stdio.h>
#include <string.h>

#define EXPAND_VA_ARGS(...) __VA_ARGS__
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#ifndef LOG_STREAM
#define LOG_STREAM (stderr)
#endif

#ifndef LOG_FLUSH
#define LOG_FLUSH fflush(LOG_STREAM)
#endif

#define LOG_INFO(msg, ...)  fprintf(LOG_STREAM, "INFO  %s:%d:%s(): " msg "\n", __FILENAME__, __LINE__, __func__, ##__VA_ARGS__);
#define LOG_WARN(msg, ...)  fprintf(LOG_STREAM, "WARN  %s:%d:%s(): " msg "\n", __FILENAME__, __LINE__, __func__, ##__VA_ARGS__);
#define LOG_ERROR(msg, ...) fprintf(LOG_STREAM, "ERROR %s:%d:%s(): " msg "\n", __FILENAME__, __LINE__, __func__, ##__VA_ARGS__);

#ifdef DEBUG
#define LOG_DEBUG(msg, ...) fprintf(LOG_STREAM, "DEBUG %s:%d:%s(): " msg "\n", __FILENAME__, __LINE__, __func__, ##__VA_ARGS__);
#else
#define LOG_DEBUG(msg, ...) do {} while (0)
#endif

#endif // CLOG_H
