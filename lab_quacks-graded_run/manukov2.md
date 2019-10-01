


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==25261== Memcheck, a memory error detector
==25261== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25261== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25261== Command: ./test -r xml "sumDigits"
==25261== 
==25261== 
==25261== HEAP SUMMARY:
==25261==     in use at exit: 0 bytes in 0 blocks
==25261==   total heap usage: 1,714 allocs, 1,714 frees, 219,888 bytes allocated
==25261== 
==25261== All heap blocks were freed -- no leaks are possible
==25261== 
==25261== For counts of detected and suppressed errors, rerun with: -v
==25261== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sumDigits" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="26">
      <Section name="Base cases work" filename="tests/basic.cpp" line="27">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Multiple digits sum correctly" filename="tests/basic.cpp" line="31">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==25264== Memcheck, a memory error detector
==25264== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25264== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25264== Command: ./test -r xml "triangle"
==25264== 
==25264== 
==25264== HEAP SUMMARY:
==25264==     in use at exit: 0 bytes in 0 blocks
==25264==   total heap usage: 1,700 allocs, 1,700 frees, 219,440 bytes allocated
==25264== 
==25264== All heap blocks were freed -- no leaks are possible
==25264== 
==25264== For counts of detected and suppressed errors, rerun with: -v
==25264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="triangle" tags="[valgrind][weight=1]" filename="tests/basic.cpp" line="37">
      <Section name="Base cases work" filename="tests/basic.cpp" line="38">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Recursive cases work" filename="tests/basic.cpp" line="41">
        <OverallResults successes="3" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==25267== Memcheck, a memory error detector
==25267== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25267== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25267== Command: ./test -r xml "sum"
==25267== 
==25267== 
==25267== HEAP SUMMARY:
==25267==     in use at exit: 0 bytes in 0 blocks
==25267==   total heap usage: 1,771 allocs, 1,771 frees, 303,392 bytes allocated
==25267== 
==25267== All heap blocks were freed -- no leaks are possible
==25267== 
==25267== For counts of detected and suppressed errors, rerun with: -v
==25267== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="sum" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="48">
      <Section name="Sum is correct" filename="tests/basic.cpp" line="53">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="56">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Float sum is correct" filename="tests/basic.cpp" line="69">
        <OverallResults successes="0" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Stack is unchanged" filename="tests/basic.cpp" line="74">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Did not make any additional stack objects" filename="tests/basic.cpp" line="77">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==25270== Memcheck, a memory error detector
==25270== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25270== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25270== Command: ./test -r xml "isBalanced"
==25270== 
==25270== 
==25270== HEAP SUMMARY:
==25270==     in use at exit: 0 bytes in 0 blocks
==25270==   total heap usage: 1,763 allocs, 1,763 frees, 315,264 bytes allocated
==25270== 
==25270== All heap blocks were freed -- no leaks are possible
==25270== 
==25270== For counts of detected and suppressed errors, rerun with: -v
==25270== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="isBalanced" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="82">
      <Section name="balanced" filename="tests/basic.cpp" line="85">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="unbalanced" filename="tests/basic.cpp" line="101">
        <OverallResults successes="6" failures="0" expectedFailures="0"/>
      </Section>
      <Section name="Only used 1 stack" filename="tests/basic.cpp" line="117">
        <OverallResults successes="2" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="14" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="14" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==25274== Memcheck, a memory error detector
==25274== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25274== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25274== Command: ./test -r xml "scramble\ 17"
==25274== 
==25274== 
==25274== HEAP SUMMARY:
==25274==     in use at exit: 0 bytes in 0 blocks
==25274==   total heap usage: 1,712 allocs, 1,712 frees, 232,360 bytes allocated
==25274== 
==25274== All heap blocks were freed -- no leaks are possible
==25274== 
==25274== For counts of detected and suppressed errors, rerun with: -v
==25274== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 17" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==25277== Memcheck, a memory error detector
==25277== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==25277== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==25277== Command: ./test -r xml "scramble\ 9"
==25277== 
==25277== 
==25277== HEAP SUMMARY:
==25277==     in use at exit: 0 bytes in 0 blocks
==25277==   total heap usage: 1,707 allocs, 1,707 frees, 231,688 bytes allocated
==25277== 
==25277== All heap blocks were freed -- no leaks are possible
==25277== 
==25277== For counts of detected and suppressed errors, rerun with: -v
==25277== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="scramble 9" tags="[valgrind][weight=3]" filename="tests/basic.cpp" line="158">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/0] - verifySame (EXTRA CREDIT)

- **Points**: 0 / 0


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="verifySame (EXTRA CREDIT)" tags="[extraCredit=1][valgrind][weight=0]" filename="tests/basic.cpp" line="186">
      <Section name="Result for different stack and queue is different" filename="tests/basic.cpp" line="187">
        <Expression success="false" type="REQUIRE" filename="tests/basic.cpp" line="206">
          <Original>
            verifySame(s, q)== false
          </Original>
          <Expanded>
            true == false
          </Expanded>
        </Expression>
        <OverallResults successes="0" failures="1" expectedFailures="0"/>
      </Section>
      <Section name="Result for same stack and queue is same" filename="tests/basic.cpp" line="224">
        <OverallResults successes="1" failures="0" expectedFailures="0"/>
      </Section>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **manukov2** using **787ac2ec512f9a41c36c0a9fba82b061c841b34f** (from **September 30th 2019, 12:15:00 am**)
