


## Score: 132/150 (88.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==10650== Memcheck, a memory error detector
==10650== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10650== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10650== Command: ./test -r xml "DH::testRemoveEASY"
==10650== 
==10650== 
==10650== HEAP SUMMARY:
==10650==     in use at exit: 0 bytes in 0 blocks
==10650==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==10650== 
==10650== All heap blocks were freed -- no leaks are possible
==10650== 
==10650== For counts of detected and suppressed errors, rerun with: -v
==10650== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==10653== Memcheck, a memory error detector
==10653== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10653== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10653== Command: ./test -r xml "DH::testRemoveHard"
==10653== 
==10653== 
==10653== HEAP SUMMARY:
==10653==     in use at exit: 0 bytes in 0 blocks
==10653==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==10653== 
==10653== All heap blocks were freed -- no leaks are possible
==10653== 
==10653== For counts of detected and suppressed errors, rerun with: -v
==10653== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==10655== Memcheck, a memory error detector
==10655== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10655== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10655== Command: ./test -r xml "DH::testResizeOnce"
==10655== 
==10655== 
==10655== HEAP SUMMARY:
==10655==     in use at exit: 0 bytes in 0 blocks
==10655==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==10655== 
==10655== All heap blocks were freed -- no leaks are possible
==10655== 
==10655== For counts of detected and suppressed errors, rerun with: -v
==10655== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==10657== Memcheck, a memory error detector
==10657== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10657== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10657== Command: ./test -r xml "DH::testResizeAll"
==10657== 
==10657== 
==10657== HEAP SUMMARY:
==10657==     in use at exit: 0 bytes in 0 blocks
==10657==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==10657== 
==10657== All heap blocks were freed -- no leaks are possible
==10657== 
==10657== For counts of detected and suppressed errors, rerun with: -v
==10657== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==10659== Memcheck, a memory error detector
==10659== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10659== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10659== Command: ./test -r xml "DH::testInsertEasy"
==10659== 
==10659== 
==10659== HEAP SUMMARY:
==10659==     in use at exit: 0 bytes in 0 blocks
==10659==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==10659== 
==10659== All heap blocks were freed -- no leaks are possible
==10659== 
==10659== For counts of detected and suppressed errors, rerun with: -v
==10659== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==10676== Memcheck, a memory error detector
==10676== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10676== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10676== Command: ./test -r xml "DH::testInsertHard"
==10676== 
==10676== 
==10676== HEAP SUMMARY:
==10676==     in use at exit: 0 bytes in 0 blocks
==10676==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==10676== 
==10676== All heap blocks were freed -- no leaks are possible
==10676== 
==10676== For counts of detected and suppressed errors, rerun with: -v
==10676== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==10686== Memcheck, a memory error detector
==10686== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10686== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10686== Command: ./test -r xml "SC::testRemoveEASY"
==10686== 
==10686== 
==10686== HEAP SUMMARY:
==10686==     in use at exit: 0 bytes in 0 blocks
==10686==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==10686== 
==10686== All heap blocks were freed -- no leaks are possible
==10686== 
==10686== For counts of detected and suppressed errors, rerun with: -v
==10686== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==10691== Memcheck, a memory error detector
==10691== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10691== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10691== Command: ./test -r xml "SC::testRemoveHard"
==10691== 
==10691== 
==10691== HEAP SUMMARY:
==10691==     in use at exit: 0 bytes in 0 blocks
==10691==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==10691== 
==10691== All heap blocks were freed -- no leaks are possible
==10691== 
==10691== For counts of detected and suppressed errors, rerun with: -v
==10691== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==10693== Memcheck, a memory error detector
==10693== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10693== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10693== Command: ./test -r xml "SC::testResizeOnce"
==10693== 
==10693== 
==10693== HEAP SUMMARY:
==10693==     in use at exit: 0 bytes in 0 blocks
==10693==   total heap usage: 2,083 allocs, 2,083 frees, 252,704 bytes allocated
==10693== 
==10693== All heap blocks were freed -- no leaks are possible
==10693== 
==10693== For counts of detected and suppressed errors, rerun with: -v
==10693== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==10702== Memcheck, a memory error detector
==10702== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10702== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10702== Command: ./test -r xml "SC::testResizeAll"
==10702== 
==10702== 
==10702== HEAP SUMMARY:
==10702==     in use at exit: 0 bytes in 0 blocks
==10702==   total heap usage: 1,982 allocs, 1,982 frees, 245,888 bytes allocated
==10702== 
==10702== All heap blocks were freed -- no leaks are possible
==10702== 
==10702== For counts of detected and suppressed errors, rerun with: -v
==10702== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==10704== Memcheck, a memory error detector
==10704== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10704== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10704== Command: ./test -r xml "SC::testInsertEasy"
==10704== 
==10704== 
==10704== HEAP SUMMARY:
==10704==     in use at exit: 0 bytes in 0 blocks
==10704==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==10704== 
==10704== All heap blocks were freed -- no leaks are possible
==10704== 
==10704== For counts of detected and suppressed errors, rerun with: -v
==10704== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==10706== Memcheck, a memory error detector
==10706== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10706== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10706== Command: ./test -r xml "SC::testInsertHard"
==10706== 
==10706== 
==10706== HEAP SUMMARY:
==10706==     in use at exit: 0 bytes in 0 blocks
==10706==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==10706== 
==10706== All heap blocks were freed -- no leaks are possible
==10706== 
==10706== For counts of detected and suppressed errors, rerun with: -v
==10706== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==10711== Memcheck, a memory error detector
==10711== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10711== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10711== Command: ./test -r xml "LP::testRemoveEASY"
==10711== 
==10711== 
==10711== HEAP SUMMARY:
==10711==     in use at exit: 0 bytes in 0 blocks
==10711==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==10711== 
==10711== All heap blocks were freed -- no leaks are possible
==10711== 
==10711== For counts of detected and suppressed errors, rerun with: -v
==10711== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==10714== Memcheck, a memory error detector
==10714== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10714== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10714== Command: ./test -r xml "LP::testRemoveHard"
==10714== 
==10714== 
==10714== HEAP SUMMARY:
==10714==     in use at exit: 0 bytes in 0 blocks
==10714==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==10714== 
==10714== All heap blocks were freed -- no leaks are possible
==10714== 
==10714== For counts of detected and suppressed errors, rerun with: -v
==10714== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - LP::testResizeOnce

- **Points**: 0 / 7


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <Failure filename="tests/tests-lp.cpp" line="76">
        Didn't copy over existing lists properly on resize
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/11] - LP::testResizeAll

- **Points**: 0 / 11


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <Failure filename="tests/tests-lp.cpp" line="103">
        Missed a key during resize: a
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==10718== Memcheck, a memory error detector
==10718== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10718== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10718== Command: ./test -r xml "LP::testInsertEasy"
==10718== 
==10718== 
==10718== HEAP SUMMARY:
==10718==     in use at exit: 0 bytes in 0 blocks
==10718==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==10718== 
==10718== All heap blocks were freed -- no leaks are possible
==10718== 
==10718== For counts of detected and suppressed errors, rerun with: -v
==10718== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==10722== Memcheck, a memory error detector
==10722== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10722== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==10722== Command: ./test -r xml "LP::testInsertHard"
==10722== 
==10722== 
==10722== HEAP SUMMARY:
==10722==     in use at exit: 0 bytes in 0 blocks
==10722==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==10722== 
==10722== All heap blocks were freed -- no leaks are possible
==10722== 
==10722== For counts of detected and suppressed errors, rerun with: -v
==10722== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **manukov2** using **c5518d33515554c46c29bc0e2a07b0b620cfcc5d** (from **November 4th 2019, 12:15:00 am**)
