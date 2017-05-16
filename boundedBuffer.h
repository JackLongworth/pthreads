typedef struct boundedBuffer {
  pthread_mutex_t mutex;
  pthread_cond_t cond;
  int usedCount;
  int capacity;
  int in;
  int out;
  int *buffer;
} BoundedBuffer;
