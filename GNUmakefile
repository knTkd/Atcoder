run2: mycode.cpp
	g++ mycode.cpp; xclip -selection c -o; python -c 'print("-"*63)'; xclip -selection c -o | ./a.out; rm ./a.out


run: mycode.cpp
	g++ mycode.cpp ; xclip -selection c -o | ./a.out ; rm ./a.out ; cat mycode.cpp | xclip -selection c


handmade: mycode.cpp
	g++ mycode.cpp; ./a.out; rm ./a.out


submit:
	cat mycode.cpp | xclip -selection c

reset:
	cp references/mycode.cpp ./mycode.cpp
