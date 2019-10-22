


## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==27701== Memcheck, a memory error detector
==27701== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27701== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27701== Command: ./test -r xml "test_find"
==27701== 
==27701== 
==27701== HEAP SUMMARY:
==27701==     in use at exit: 0 bytes in 0 blocks
==27701==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==27701== 
==27701== All heap blocks were freed -- no leaks are possible
==27701== 
==27701== For counts of detected and suppressed errors, rerun with: -v
==27701== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==27705== Memcheck, a memory error detector
==27705== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27705== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27705== Command: ./test -r xml "test_insert_big"
==27705== 
==27705== 
==27705== HEAP SUMMARY:
==27705==     in use at exit: 0 bytes in 0 blocks
==27705==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==27705== 
==27705== All heap blocks were freed -- no leaks are possible
==27705== 
==27705== For counts of detected and suppressed errors, rerun with: -v
==27705== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==27713== Memcheck, a memory error detector
==27713== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27713== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==27713== Command: ./test -r xml "test_remove_big"
==27713== 
==27713== 
==27713== HEAP SUMMARY:
==27713==     in use at exit: 0 bytes in 0 blocks
==27713==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==27713== 
==27713== All heap blocks were freed -- no leaks are possible
==27713== 
==27713== For counts of detected and suppressed errors, rerun with: -v
==27713== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **manukov2** using **ebb234156f31dd41dd047517f083487b47c00807** (from **October 21st 2019, 12:15:00 am**)
