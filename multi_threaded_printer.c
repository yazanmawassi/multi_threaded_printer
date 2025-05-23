#include <stdio.h>
#include <pthread.h>

void* func1(void* args) {
  for(int i = 0; i < 10000; i++) {
    printf("I'm func1, currently at iteration %d\n", i);
  }
  return NULL;
}

void* func2(void* args) {
  for(int i = 0; i < 10000; i++) {
    printf("I'm func2, currently at iteration %d\n", i);
  }
  return NULL;
}

void* func3(void* args) {
  for(int i = 0; i < 10000; i++) {
    printf("I'm func3, currently at iteration %d\n", i);
  }
  return NULL;
}

void* func4(void* args) {
  for(int i = 0; i < 10000; i++) {
    printf("I'm func4, currently at iteration %d\n", i);
  }
  return NULL;
}

int main() {
  pthread_t threads[4];
  pthread_create(&threads[0], NULL, func1, NULL);
  pthread_create(&threads[1], NULL, func2, NULL);
  pthread_create(&threads[2], NULL, func3, NULL);
  pthread_create(&threads[3], NULL, func4, NULL);

  pthread_join(threads[0], NULL);
  pthread_join(threads[1], NULL);
  pthread_join(threads[2], NULL);
  pthread_join(threads[3], NULL);

  return 0;
}
