


## Score: 109/114 (95.61%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==3207== Memcheck, a memory error detector
==3207== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3207== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3207== Command: ./test -r xml "List::merge"
==3207== 
==3207== 
==3207== HEAP SUMMARY:
==3207==     in use at exit: 0 bytes in 0 blocks
==3207==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==3207== 
==3207== All heap blocks were freed -- no leaks are possible
==3207== 
==3207== For counts of detected and suppressed errors, rerun with: -v
==3207== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==3209== Memcheck, a memory error detector
==3209== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3209== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3209== Command: ./test -r xml "List::sort\ simple\ #1"
==3209== 
==3209== 
==3209== HEAP SUMMARY:
==3209==     in use at exit: 0 bytes in 0 blocks
==3209==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==3209== 
==3209== All heap blocks were freed -- no leaks are possible
==3209== 
==3209== For counts of detected and suppressed errors, rerun with: -v
==3209== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==3211== Memcheck, a memory error detector
==3211== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3211== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3211== Command: ./test -r xml "List::sort\ simple\ #2"
==3211== 
==3211== 
==3211== HEAP SUMMARY:
==3211==     in use at exit: 0 bytes in 0 blocks
==3211==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==3211== 
==3211== All heap blocks were freed -- no leaks are possible
==3211== 
==3211== For counts of detected and suppressed errors, rerun with: -v
==3211== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==3215== Memcheck, a memory error detector
==3215== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3215== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3215== Command: ./test -r xml "List::insertFront\ size"
==3215== 
==3215== 
==3215== HEAP SUMMARY:
==3215==     in use at exit: 0 bytes in 0 blocks
==3215==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==3215== 
==3215== All heap blocks were freed -- no leaks are possible
==3215== 
==3215== For counts of detected and suppressed errors, rerun with: -v
==3215== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==3217== Memcheck, a memory error detector
==3217== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3217== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3217== Command: ./test -r xml "List::insertBack\ size"
==3217== 
==3217== 
==3217== HEAP SUMMARY:
==3217==     in use at exit: 0 bytes in 0 blocks
==3217==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==3217== 
==3217== All heap blocks were freed -- no leaks are possible
==3217== 
==3217== For counts of detected and suppressed errors, rerun with: -v
==3217== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==3219== Memcheck, a memory error detector
==3219== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3219== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3219== Command: ./test -r xml "List::insert\ contents"
==3219== 
==3219== 
==3219== HEAP SUMMARY:
==3219==     in use at exit: 0 bytes in 0 blocks
==3219==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==3219== 
==3219== All heap blocks were freed -- no leaks are possible
==3219== 
==3219== For counts of detected and suppressed errors, rerun with: -v
==3219== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==3222== Memcheck, a memory error detector
==3222== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3222== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3222== Command: ./test -r xml "List::split\ simple"
==3222== 
==3222== 
==3222== HEAP SUMMARY:
==3222==     in use at exit: 0 bytes in 0 blocks
==3222==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==3222== 
==3222== All heap blocks were freed -- no leaks are possible
==3222== 
==3222== For counts of detected and suppressed errors, rerun with: -v
==3222== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==3225== Memcheck, a memory error detector
==3225== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3225== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3225== Command: ./test -r xml "List::_destroy\ empty\ list"
==3225== 
==3225== 
==3225== HEAP SUMMARY:
==3225==     in use at exit: 0 bytes in 0 blocks
==3225==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==3225== 
==3225== All heap blocks were freed -- no leaks are possible
==3225== 
==3225== For counts of detected and suppressed errors, rerun with: -v
==3225== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==3227== Memcheck, a memory error detector
==3227== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3227== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3227== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==3227== 
==3227== 
==3227== HEAP SUMMARY:
==3227==     in use at exit: 0 bytes in 0 blocks
==3227==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==3227== 
==3227== All heap blocks were freed -- no leaks are possible
==3227== 
==3227== For counts of detected and suppressed errors, rerun with: -v
==3227== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==3229== Memcheck, a memory error detector
==3229== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3229== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3229== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==3229== 
==3229== 
==3229== HEAP SUMMARY:
==3229==     in use at exit: 0 bytes in 0 blocks
==3229==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==3229== 
==3229== All heap blocks were freed -- no leaks are possible
==3229== 
==3229== For counts of detected and suppressed errors, rerun with: -v
==3229== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==3231== Memcheck, a memory error detector
==3231== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3231== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3231== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==3231== 
==3231== 
==3231== HEAP SUMMARY:
==3231==     in use at exit: 0 bytes in 0 blocks
==3231==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==3231== 
==3231== All heap blocks were freed -- no leaks are possible
==3231== 
==3231== For counts of detected and suppressed errors, rerun with: -v
==3231== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==3233== Memcheck, a memory error detector
==3233== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3233== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3233== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==3233== 
==3233== 
==3233== HEAP SUMMARY:
==3233==     in use at exit: 0 bytes in 0 blocks
==3233==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==3233== 
==3233== All heap blocks were freed -- no leaks are possible
==3233== 
==3233== For counts of detected and suppressed errors, rerun with: -v
==3233== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==3235== Memcheck, a memory error detector
==3235== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3235== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3235== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==3235== 
==3235== 
==3235== HEAP SUMMARY:
==3235==     in use at exit: 0 bytes in 0 blocks
==3235==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==3235== 
==3235== All heap blocks were freed -- no leaks are possible
==3235== 
==3235== For counts of detected and suppressed errors, rerun with: -v
==3235== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==3237== Memcheck, a memory error detector
==3237== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3237== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3237== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==3237== 
==3237== 
==3237== HEAP SUMMARY:
==3237==     in use at exit: 0 bytes in 0 blocks
==3237==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==3237== 
==3237== All heap blocks were freed -- no leaks are possible
==3237== 
==3237== For counts of detected and suppressed errors, rerun with: -v
==3237== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==3239== Memcheck, a memory error detector
==3239== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3239== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3239== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==3239== 
==3239== 
==3239== HEAP SUMMARY:
==3239==     in use at exit: 0 bytes in 0 blocks
==3239==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==3239== 
==3239== All heap blocks were freed -- no leaks are possible
==3239== 
==3239== For counts of detected and suppressed errors, rerun with: -v
==3239== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==3241== Memcheck, a memory error detector
==3241== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3241== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3241== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==3241== 
==3241== 
==3241== HEAP SUMMARY:
==3241==     in use at exit: 0 bytes in 0 blocks
==3241==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==3241== 
==3241== All heap blocks were freed -- no leaks are possible
==3241== 
==3241== For counts of detected and suppressed errors, rerun with: -v
==3241== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==3243== Memcheck, a memory error detector
==3243== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3243== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3243== Command: ./test -r xml "List::reverse\ simple"
==3243== 
==3243== 
==3243== HEAP SUMMARY:
==3243==     in use at exit: 0 bytes in 0 blocks
==3243==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==3243== 
==3243== All heap blocks were freed -- no leaks are possible
==3243== 
==3243== For counts of detected and suppressed errors, rerun with: -v
==3243== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==3245== Memcheck, a memory error detector
==3245== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3245== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3245== Command: ./test -r xml "List::reverse\ edge\ cases"
==3245== 
==3245== 
==3245== HEAP SUMMARY:
==3245==     in use at exit: 0 bytes in 0 blocks
==3245==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==3245== 
==3245== All heap blocks were freed -- no leaks are possible
==3245== 
==3245== For counts of detected and suppressed errors, rerun with: -v
==3245== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==3247== Memcheck, a memory error detector
==3247== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3247== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3247== Command: ./test -r xml "List::reverseNth\ #3"
==3247== 
==3247== 
==3247== HEAP SUMMARY:
==3247==     in use at exit: 0 bytes in 0 blocks
==3247==   total heap usage: 2,195 allocs, 2,195 frees, 263,128 bytes allocated
==3247== 
==3247== All heap blocks were freed -- no leaks are possible
==3247== 
==3247== For counts of detected and suppressed errors, rerun with: -v
==3247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==3249== Memcheck, a memory error detector
==3249== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3249== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3249== Command: ./test -r xml "List::merge\ #2"
==3249== 
==3249== 
==3249== HEAP SUMMARY:
==3249==     in use at exit: 0 bytes in 0 blocks
==3249==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==3249== 
==3249== All heap blocks were freed -- no leaks are possible
==3249== 
==3249== For counts of detected and suppressed errors, rerun with: -v
==3249== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==3251== Memcheck, a memory error detector
==3251== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3251== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3251== Command: ./test -r xml "List::sort\ simple\ #3"
==3251== 
==3251== 
==3251== HEAP SUMMARY:
==3251==     in use at exit: 0 bytes in 0 blocks
==3251==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==3251== 
==3251== All heap blocks were freed -- no leaks are possible
==3251== 
==3251== For counts of detected and suppressed errors, rerun with: -v
==3251== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==3253== Memcheck, a memory error detector
==3253== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3253== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3253== Command: ./test -r xml "List::insert\ contents\ #2"
==3253== 
==3253== 
==3253== HEAP SUMMARY:
==3253==     in use at exit: 0 bytes in 0 blocks
==3253==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==3253== 
==3253== All heap blocks were freed -- no leaks are possible
==3253== 
==3253== For counts of detected and suppressed errors, rerun with: -v
==3253== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==3258== Memcheck, a memory error detector
==3258== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3258== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3258== Command: ./test -r xml "List::waterfall\ simple"
==3258== 
==3258== 
==3258== HEAP SUMMARY:
==3258==     in use at exit: 0 bytes in 0 blocks
==3258==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==3258== 
==3258== All heap blocks were freed -- no leaks are possible
==3258== 
==3258== For counts of detected and suppressed errors, rerun with: -v
==3258== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **manukov2** using **8602e81423e68e65bc1813afa3c47c39524b6773** (from **October 9th 2019, 12:15:00 am**)
