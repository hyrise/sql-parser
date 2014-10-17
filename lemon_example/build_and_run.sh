rm -f lemon_test lemon_parser.c lemon_parser.h flex_scanner.c flex_scanner.h
echo "Lemon"
lemon lemon_parser.y
echo "Flex"
# flex lexer.l
flex --outfile=flex_scanner.c --header-file=flex_scanner.h flex_scanner.l
echo "Compile"
g++ main.cpp lemon_parser.c flex_scanner.c -o lemon_test -std=c++11 -pthread
./lemon_test