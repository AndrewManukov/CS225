


## Score: 20/20 (100.00%)


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


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==10888== Memcheck, a memory error detector
==10888== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10888== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10888== Command: ./test -r xml "test_heapify_down_1"
==10888== 
==10888== 
==10888== HEAP SUMMARY:
==10888==     in use at exit: 0 bytes in 0 blocks
==10888==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==10888== 
==10888== All heap blocks were freed -- no leaks are possible
==10888== 
==10888== For counts of detected and suppressed errors, rerun with: -v
==10888== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="67">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==10924== Memcheck, a memory error detector
==10924== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10924== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10924== Command: ./test -r xml "test_heapify_down_2"
==10924== 
==10924== 
==10924== HEAP SUMMARY:
==10924==     in use at exit: 0 bytes in 0 blocks
==10924==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==10924== 
==10924== All heap blocks were freed -- no leaks are possible
==10924== 
==10924== For counts of detected and suppressed errors, rerun with: -v
==10924== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="73">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==10984== Memcheck, a memory error detector
==10984== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10984== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10984== Command: ./test -r xml "test_heapify_down_3"
==10984== 
==10984== 
==10984== HEAP SUMMARY:
==10984==     in use at exit: 0 bytes in 0 blocks
==10984==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==10984== 
==10984== All heap blocks were freed -- no leaks are possible
==10984== 
==10984== For counts of detected and suppressed errors, rerun with: -v
==10984== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="79">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==11030== Memcheck, a memory error detector
==11030== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11030== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11030== Command: ./test -r xml "test_heapify_down_4"
==11030== 
==11030== 
==11030== HEAP SUMMARY:
==11030==     in use at exit: 0 bytes in 0 blocks
==11030==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==11030== 
==11030== All heap blocks were freed -- no leaks are possible
==11030== 
==11030== For counts of detected and suppressed errors, rerun with: -v
==11030== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==11072== Memcheck, a memory error detector
==11072== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11072== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11072== Command: ./test -r xml "test_heapify_down_5"
==11072== 
==11072== 
==11072== HEAP SUMMARY:
==11072==     in use at exit: 0 bytes in 0 blocks
==11072==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==11072== 
==11072== All heap blocks were freed -- no leaks are possible
==11072== 
==11072== For counts of detected and suppressed errors, rerun with: -v
==11072== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="91">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==11134== Memcheck, a memory error detector
==11134== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11134== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11134== Command: ./test -r xml "test_heapify_down_6"
==11134== 
==11134== 
==11134== HEAP SUMMARY:
==11134==     in use at exit: 0 bytes in 0 blocks
==11134==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==11134== 
==11134== All heap blocks were freed -- no leaks are possible
==11134== 
==11134== For counts of detected and suppressed errors, rerun with: -v
==11134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_6" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="100">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==11272== Memcheck, a memory error detector
==11272== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11272== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11272== Command: ./test -r xml "test_heapify_down_7"
==11272== 
==11272== 
==11272== HEAP SUMMARY:
==11272==     in use at exit: 0 bytes in 0 blocks
==11272==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==11272== 
==11272== All heap blocks were freed -- no leaks are possible
==11272== 
==11272== For counts of detected and suppressed errors, rerun with: -v
==11272== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_7" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="106">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==11299== Memcheck, a memory error detector
==11299== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11299== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11299== Command: ./test -r xml "test_heapify_down_8"
==11299== 
==11299== 
==11299== HEAP SUMMARY:
==11299==     in use at exit: 0 bytes in 0 blocks
==11299==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==11299== 
==11299== All heap blocks were freed -- no leaks are possible
==11299== 
==11299== For counts of detected and suppressed errors, rerun with: -v
==11299== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_8" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="112">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==11362== Memcheck, a memory error detector
==11362== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11362== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11362== Command: ./test -r xml "test_heapify_down_9"
==11362== 
==11362== 
==11362== HEAP SUMMARY:
==11362==     in use at exit: 0 bytes in 0 blocks
==11362==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==11362== 
==11362== All heap blocks were freed -- no leaks are possible
==11362== 
==11362== For counts of detected and suppressed errors, rerun with: -v
==11362== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_9" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="118">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="21" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="21" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==11409== Memcheck, a memory error detector
==11409== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11409== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11409== Command: ./test -r xml "test_heapify_down_10"
==11409== 
==11409== 
==11409== HEAP SUMMARY:
==11409==     in use at exit: 0 bytes in 0 blocks
==11409==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==11409== 
==11409== All heap blocks were freed -- no leaks are possible
==11409== 
==11409== For counts of detected and suppressed errors, rerun with: -v
==11409== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_heapify_down_10" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="124">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="30" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="30" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==11455== Memcheck, a memory error detector
==11455== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11455== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11455== Command: ./test -r xml "test_build_heap_1"
==11455== 
==11455== 
==11455== HEAP SUMMARY:
==11455==     in use at exit: 0 bytes in 0 blocks
==11455==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==11455== 
==11455== All heap blocks were freed -- no leaks are possible
==11455== 
==11455== For counts of detected and suppressed errors, rerun with: -v
==11455== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_2

- **Points**: 1 / 1

```
==11483== Memcheck, a memory error detector
==11483== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11483== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11483== Command: ./test -r xml "test_build_heap_2"
==11483== 
==11483== 
==11483== HEAP SUMMARY:
==11483==     in use at exit: 0 bytes in 0 blocks
==11483==   total heap usage: 1,874 allocs, 1,874 frees, 237,096 bytes allocated
==11483== 
==11483== All heap blocks were freed -- no leaks are possible
==11483== 
==11483== For counts of detected and suppressed errors, rerun with: -v
==11483== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="141">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==11518== Memcheck, a memory error detector
==11518== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11518== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11518== Command: ./test -r xml "test_build_heap_3"
==11518== 
==11518== 
==11518== HEAP SUMMARY:
==11518==     in use at exit: 0 bytes in 0 blocks
==11518==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==11518== 
==11518== All heap blocks were freed -- no leaks are possible
==11518== 
==11518== For counts of detected and suppressed errors, rerun with: -v
==11518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="153">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==11578== Memcheck, a memory error detector
==11578== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11578== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11578== Command: ./test -r xml "test_build_heap_4"
==11578== 
==11578== 
==11578== HEAP SUMMARY:
==11578==     in use at exit: 0 bytes in 0 blocks
==11578==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==11578== 
==11578== All heap blocks were freed -- no leaks are possible
==11578== 
==11578== For counts of detected and suppressed errors, rerun with: -v
==11578== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="165">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_build_heap_5

- **Points**: 1 / 1

```
==11605== Memcheck, a memory error detector
==11605== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11605== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11605== Command: ./test -r xml "test_build_heap_5"
==11605== 
==11605== 
==11605== HEAP SUMMARY:
==11605==     in use at exit: 0 bytes in 0 blocks
==11605==   total heap usage: 1,882 allocs, 1,882 frees, 239,736 bytes allocated
==11605== 
==11605== All heap blocks were freed -- no leaks are possible
==11605== 
==11605== For counts of detected and suppressed errors, rerun with: -v
==11605== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_build_heap_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="177">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==11637== Memcheck, a memory error detector
==11637== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11637== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11637== Command: ./test -r xml "test_update_elem_1"
==11637== 
==11637== 
==11637== HEAP SUMMARY:
==11637==     in use at exit: 0 bytes in 0 blocks
==11637==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==11637== 
==11637== All heap blocks were freed -- no leaks are possible
==11637== 
==11637== For counts of detected and suppressed errors, rerun with: -v
==11637== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_1" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="192">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==11675== Memcheck, a memory error detector
==11675== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11675== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11675== Command: ./test -r xml "test_update_elem_2"
==11675== 
==11675== 
==11675== HEAP SUMMARY:
==11675==     in use at exit: 0 bytes in 0 blocks
==11675==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==11675== 
==11675== All heap blocks were freed -- no leaks are possible
==11675== 
==11675== For counts of detected and suppressed errors, rerun with: -v
==11675== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_2" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="198">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="6" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="6" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==11732== Memcheck, a memory error detector
==11732== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11732== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11732== Command: ./test -r xml "test_update_elem_3"
==11732== 
==11732== 
==11732== HEAP SUMMARY:
==11732==     in use at exit: 0 bytes in 0 blocks
==11732==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==11732== 
==11732== All heap blocks were freed -- no leaks are possible
==11732== 
==11732== For counts of detected and suppressed errors, rerun with: -v
==11732== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_3" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="204">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="11" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="11" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==11757== Memcheck, a memory error detector
==11757== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11757== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11757== Command: ./test -r xml "test_update_elem_4"
==11757== 
==11757== 
==11757== HEAP SUMMARY:
==11757==     in use at exit: 0 bytes in 0 blocks
==11757==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==11757== 
==11757== All heap blocks were freed -- no leaks are possible
==11757== 
==11757== For counts of detected and suppressed errors, rerun with: -v
==11757== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_4" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="210">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="15" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="15" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==11813== Memcheck, a memory error detector
==11813== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11813== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==11813== Command: ./test -r xml "test_update_elem_5"
==11813== 
==11813== 
==11813== HEAP SUMMARY:
==11813==     in use at exit: 0 bytes in 0 blocks
==11813==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==11813== 
==11813== All heap blocks were freed -- no leaks are possible
==11813== 
==11813== For counts of detected and suppressed errors, rerun with: -v
==11813== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_update_elem_5" tags="[valgrind][weight=1]" filename="tests/tests.cpp" line="216">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="66" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="66" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **manukov2** using **548206863840856bf309953e13e062f8f7aed528** (from **November 11th 2019, 12:15:00 am**)
