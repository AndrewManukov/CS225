


## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
cs225/make/cs225.mk:99: [0;33m Looks like you are not on EWS. Be sure to test on EWS before the deadline. [0m
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____14()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:109: undefined reference to `cs225::Image::scale(double)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____16()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:118: undefined reference to `cs225::Image::scale(double)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____18()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:127: undefined reference to `cs225::Image::scale(double)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____20()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:137: undefined reference to `cs225::Image::scale(double)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____22()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:147: undefined reference to `cs225::Image::scale(unsigned int, unsigned int)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____25()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:159: undefined reference to `cs225::Image::scale(unsigned int, unsigned int)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____28()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:171: undefined reference to `cs225::Image::scale(unsigned int, unsigned int)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____31()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:183: undefined reference to `cs225::Image::scale(unsigned int, unsigned int)'
.objs/tests/tests-part1.o: In function `____C_A_T_C_H____T_E_S_T____34()':
/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:195: undefined reference to `cs225::Image::scale(unsigned int, unsigned int)'
.objs/tests/tests-part1.o:/tmp/tmp-25939LLt1AfI1l3RQ/tests/tests-part1.cpp:205: more undefined references to `cs225::Image::scale(unsigned int, unsigned int)' follow
clang-6.0: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [test] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Image.cpp -o .objs/Image.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1.cpp -o .objs/tests/tests-part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part2.cpp -o .objs/tests/tests-part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Image.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-part1.o .objs/tests/tests-part2.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


---

This report was generated for **manukov2** using **c762d2635eb6cb59317bac766c018b123191f2e6** (from **September 17th 2019, 12:15:00 am**)
