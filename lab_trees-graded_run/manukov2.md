


## Score: 0/80 (0.00%)


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


### ✗ - [0/10] - test_mirror

- **Points**: 0 / 10


```
Original: a[i] == b[b.size()-1-i]
Expanded: 0 == 93
```


### ✗ - [0/10] - test_isOrderedRecursive

- **Points**: 0 / 10


```
Original: tree2.isOrderedRecursive() == true
Expanded: false == true
```


### ✗ - [0/10] - test_isOrderedIterative

- **Points**: 0 / 10


```
Original: tree2.isOrderedIterative() == true
Expanded: false == true
```


### ✗ - [0/10] - test_InorderTraversal

- **Points**: 0 / 10


```
Original: (*it)->elem == 0
Expanded: 52 == 0
```


### ✗ - [0/10] - test_getPaths

- **Points**: 0 / 10


```
Original: a.size() == b.size()
Expanded: 5 == 0
```


### ✗ - [0/10] - test_calcFromAST_simple

- **Points**: 0 / 10


```
Original: calc_tree.eval() == Approx(res).margin(0.1)
Expanded: -1.0 == Approx( 696.0 )
```


### ✗ - [0/10] - test_calcFromAST_intermediate

- **Points**: 0 / 10


```
Original: calc_tree.eval() == Approx(res).margin(0.1)
Expanded: -1.0 == Approx( 39766.0 )
```


### ✗ - [0/10] - test_calcFromAST_complex

- **Points**: 0 / 10


```
Original: calc_tree.eval() == Approx(res).margin(0.1)
Expanded: -1.0 == Approx( 73285.9396825397 )
```


### ✗ - [0/0] - test_sumDistances

- **Points**: 0 / 0


```
Original: 10 == tree.sumDistances()
Expanded: 10 == -1
```


---

This report was generated for **manukov2** using **787ac2ec512f9a41c36c0a9fba82b061c841b34f** (from **October 7th 2019, 12:15:00 am**)
