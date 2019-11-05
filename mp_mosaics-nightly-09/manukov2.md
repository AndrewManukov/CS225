


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m
In file included from maptiles.cpp:8:
In file included from ./maptiles.h:16:
./kdtree.h:109:77: fatal error: expected ';' at end of declaration list
    double distance(const Point<Dim>& first, const Point<Dim>& second) const
                                                                            ^
                                                                            ;
1 error generated.
make: *** [.objs/maptiles.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c maptiles.cpp -o .objs/maptiles.o

```


---

This report was generated for **manukov2** using **c5518d33515554c46c29bc0e2a07b0b620cfcc5d** (from **November 5th 2019, 12:15:00 am**)
