/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LOWER_THAN_ELSE = 258,
     ELSE = 259,
     MOD_ASSIGN = 260,
     DIVIDE_ASSIGN = 261,
     TIMES_ASSIGN = 262,
     MINUS_ASSIGN = 263,
     PLUS_ASSIGN = 264,
     ASSIGN = 265,
     OR = 266,
     AND = 267,
     NEQ = 268,
     EQ = 269,
     GTE = 270,
     LTE = 271,
     GT = 272,
     LT = 273,
     MINUS = 274,
     PLUS = 275,
     MOD = 276,
     DIVIDE = 277,
     TIMES = 278,
     NOT = 279,
     DECREMENT = 280,
     INCREMENT = 281,
     PROGRAM = 282,
     END = 283,
     VAR = 284,
     CONST = 285,
     RETURN = 286,
     NEW = 287,
     BOOL = 288,
     INT = 289,
     FLOAT = 290,
     CHAR = 291,
     STRING = 292,
     NULL_TYPE = 293,
     MAP = 294,
     IF = 295,
     ELSE_IF = 296,
     FOR = 297,
     WHILE = 298,
     DO = 299,
     BREAK = 300,
     CONTINUE = 301,
     FUNCTION = 302,
     CLASS = 303,
     CONSTRUCTOR = 304,
     EXTENDS = 305,
     READ = 306,
     PRINT = 307,
     TRY = 308,
     CATCH = 309,
     FINALLY = 310,
     THROW = 311,
     THIS = 312,
     SUPER = 313,
     LPAREN = 314,
     RPAREN = 315,
     LBRACE = 316,
     RBRACE = 317,
     LBRACKET = 318,
     RBRACKET = 319,
     SEMICOLON = 320,
     COMMA = 321,
     DOT = 322,
     COLON = 323,
     INT_LITERAL = 324,
     FLOAT_LITERAL = 325,
     CHAR_LITERAL = 326,
     STRING_LITERAL = 327,
     BOOL_LITERAL = 328,
     IDENTIFIER = 329
   };
#endif
/* Tokens.  */
#define LOWER_THAN_ELSE 258
#define ELSE 259
#define MOD_ASSIGN 260
#define DIVIDE_ASSIGN 261
#define TIMES_ASSIGN 262
#define MINUS_ASSIGN 263
#define PLUS_ASSIGN 264
#define ASSIGN 265
#define OR 266
#define AND 267
#define NEQ 268
#define EQ 269
#define GTE 270
#define LTE 271
#define GT 272
#define LT 273
#define MINUS 274
#define PLUS 275
#define MOD 276
#define DIVIDE 277
#define TIMES 278
#define NOT 279
#define DECREMENT 280
#define INCREMENT 281
#define PROGRAM 282
#define END 283
#define VAR 284
#define CONST 285
#define RETURN 286
#define NEW 287
#define BOOL 288
#define INT 289
#define FLOAT 290
#define CHAR 291
#define STRING 292
#define NULL_TYPE 293
#define MAP 294
#define IF 295
#define ELSE_IF 296
#define FOR 297
#define WHILE 298
#define DO 299
#define BREAK 300
#define CONTINUE 301
#define FUNCTION 302
#define CLASS 303
#define CONSTRUCTOR 304
#define EXTENDS 305
#define READ 306
#define PRINT 307
#define TRY 308
#define CATCH 309
#define FINALLY 310
#define THROW 311
#define THIS 312
#define SUPER 313
#define LPAREN 314
#define RPAREN 315
#define LBRACE 316
#define RBRACE 317
#define LBRACKET 318
#define RBRACKET 319
#define SEMICOLON 320
#define COMMA 321
#define DOT 322
#define COLON 323
#define INT_LITERAL 324
#define FLOAT_LITERAL 325
#define CHAR_LITERAL 326
#define STRING_LITERAL 327
#define BOOL_LITERAL 328
#define IDENTIFIER 329




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 55 "devbhasha.y"
{
    int ival;
    float fval;
    char cval;
    char* sval;
    int bval;
    struct ExpressionResult* expr;
}
/* Line 1529 of yacc.c.  */
#line 206 "devbhasha.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

