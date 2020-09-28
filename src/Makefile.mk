Tokenizer: tokenizer.o ui.o history.o
		cc tokenizer.o ui.o history.o output

tokenizer.o: tokenizer.h tokenizer.c 

history.o: history.h history.c 

ui.o: ui.c tokenizer.h history.h 