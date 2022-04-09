#ifndef A_HEADER
#define A_HEADER

#ifdef FOO
int test(int a, int b) {
    return a + b;
}
#endif

#ifdef FUNCTION
int test2(int a, int b) {
    return a - b;
}
#endif
#endif

