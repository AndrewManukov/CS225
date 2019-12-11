


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==12400== Memcheck, a memory error detector
==12400== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12400== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12400== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==12400== 
==12400== 
==12400== HEAP SUMMARY:
==12400==     in use at exit: 0 bytes in 0 blocks
==12400==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==12400== 
==12400== All heap blocks were freed -- no leaks are possible
==12400== 
==12400== For counts of detected and suppressed errors, rerun with: -v
==12400== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==12404== Memcheck, a memory error detector
==12404== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12404== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12404== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==12404== 
==12404== 
==12404== HEAP SUMMARY:
==12404==     in use at exit: 0 bytes in 0 blocks
==12404==   total heap usage: 2,019 allocs, 2,019 frees, 238,256 bytes allocated
==12404== 
==12404== All heap blocks were freed -- no leaks are possible
==12404== 
==12404== For counts of detected and suppressed errors, rerun with: -v
==12404== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==12408== Memcheck, a memory error detector
==12408== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12408== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12408== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==12408== 
==12408== 
==12408== HEAP SUMMARY:
==12408==     in use at exit: 0 bytes in 0 blocks
==12408==   total heap usage: 1,977 allocs, 1,977 frees, 235,032 bytes allocated
==12408== 
==12408== All heap blocks were freed -- no leaks are possible
==12408== 
==12408== For counts of detected and suppressed errors, rerun with: -v
==12408== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==12454== Memcheck, a memory error detector
==12454== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12454== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12454== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==12454== 
==12454== 
==12454== HEAP SUMMARY:
==12454==     in use at exit: 0 bytes in 0 blocks
==12454==   total heap usage: 2,019 allocs, 2,019 frees, 238,064 bytes allocated
==12454== 
==12454== All heap blocks were freed -- no leaks are possible
==12454== 
==12454== For counts of detected and suppressed errors, rerun with: -v
==12454== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==12457== Memcheck, a memory error detector
==12457== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12457== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12457== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==12457== 
==12457== 
==12457== HEAP SUMMARY:
==12457==     in use at exit: 0 bytes in 0 blocks
==12457==   total heap usage: 2,085 allocs, 2,085 frees, 243,672 bytes allocated
==12457== 
==12457== All heap blocks were freed -- no leaks are possible
==12457== 
==12457== For counts of detected and suppressed errors, rerun with: -v
==12457== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==12465== Memcheck, a memory error detector
==12465== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12465== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12465== Command: ./test -r xml "Testing\ simple\ backflow"
==12465== 
==12465== 
==12465== HEAP SUMMARY:
==12465==     in use at exit: 0 bytes in 0 blocks
==12465==   total heap usage: 2,065 allocs, 2,065 frees, 239,664 bytes allocated
==12465== 
==12465== All heap blocks were freed -- no leaks are possible
==12465== 
==12465== For counts of detected and suppressed errors, rerun with: -v
==12465== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==12468== Memcheck, a memory error detector
==12468== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12468== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12468== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==12468== 
==12468== 
==12468== HEAP SUMMARY:
==12468==     in use at exit: 0 bytes in 0 blocks
==12468==   total heap usage: 2,098 allocs, 2,098 frees, 244,752 bytes allocated
==12468== 
==12468== All heap blocks were freed -- no leaks are possible
==12468== 
==12468== For counts of detected and suppressed errors, rerun with: -v
==12468== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==12472== Memcheck, a memory error detector
==12472== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12472== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12472== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==12472== 
==12472== 
==12472== HEAP SUMMARY:
==12472==     in use at exit: 0 bytes in 0 blocks
==12472==   total heap usage: 2,112 allocs, 2,112 frees, 243,072 bytes allocated
==12472== 
==12472== All heap blocks were freed -- no leaks are possible
==12472== 
==12472== For counts of detected and suppressed errors, rerun with: -v
==12472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==12476== Memcheck, a memory error detector
==12476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12476== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12476== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==12476== 
==12476== 
==12476== HEAP SUMMARY:
==12476==     in use at exit: 0 bytes in 0 blocks
==12476==   total heap usage: 2,181 allocs, 2,181 frees, 252,240 bytes allocated
==12476== 
==12476== All heap blocks were freed -- no leaks are possible
==12476== 
==12476== For counts of detected and suppressed errors, rerun with: -v
==12476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==12481== Memcheck, a memory error detector
==12481== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12481== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==12481== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==12481== 
==12481== 
==12481== HEAP SUMMARY:
==12481==     in use at exit: 0 bytes in 0 blocks
==12481==   total heap usage: 2,184 allocs, 2,184 frees, 250,424 bytes allocated
==12481== 
==12481== All heap blocks were freed -- no leaks are possible
==12481== 
==12481== For counts of detected and suppressed errors, rerun with: -v
==12481== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **manukov2** using **fab1bde53d7ad2a961cf1a03cad089c77a4e038e** (from **December 9th 2019, 12:15:00 am**)
