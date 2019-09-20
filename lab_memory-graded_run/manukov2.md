


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==14685== Memcheck, a memory error detector
==14685== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14685== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14685== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==14685== 
==14685== 
==14685== HEAP SUMMARY:
==14685==     in use at exit: 0 bytes in 0 blocks
==14685==   total heap usage: 2,492 allocs, 2,492 frees, 278,680 bytes allocated
==14685== 
==14685== All heap blocks were freed -- no leaks are possible
==14685== 
==14685== For counts of detected and suppressed errors, rerun with: -v
==14685== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==14687== Memcheck, a memory error detector
==14687== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14687== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14687== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==14687== 
==14687== 
==14687== HEAP SUMMARY:
==14687==     in use at exit: 0 bytes in 0 blocks
==14687==   total heap usage: 2,492 allocs, 2,492 frees, 276,488 bytes allocated
==14687== 
==14687== All heap blocks were freed -- no leaks are possible
==14687== 
==14687== For counts of detected and suppressed errors, rerun with: -v
==14687== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==14689== Memcheck, a memory error detector
==14689== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==14689== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==14689== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==14689== 
==14689== 
==14689== HEAP SUMMARY:
==14689==     in use at exit: 0 bytes in 0 blocks
==14689==   total heap usage: 2,496 allocs, 2,496 frees, 277,208 bytes allocated
==14689== 
==14689== All heap blocks were freed -- no leaks are possible
==14689== 
==14689== For counts of detected and suppressed errors, rerun with: -v
==14689== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **manukov2** using **16398dade076e91bd29fb587ef3b93a77bf342cb** (from **September 16th 2019, 12:15:00 am**)
