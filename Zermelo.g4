grammar Zermelo;

set : '{' IDENTIFIER* '}';
assignment : IDENTIFIER '=' set;

membership : IDENTIFIER ':' set;
subset : (IDENTIFIER | set) '<' (IDENTIFIER | set);

program : (assignment | membership | subset)* EOF;

IDENTIFIER : [a-zA-Z0-9]+;
WHITESPACE : (' ' | '\n') -> skip;
