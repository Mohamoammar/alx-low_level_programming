Global   Main
	  extern    printf
Main:
	  Mov   Edi, Format
	  Xor   Eax, Eax
	  Call  Printf
	  Mov   Eax, 0
	  r e t
format: db `Hello, Holberton\n`,0

