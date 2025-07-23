/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    INT = 261,                     /* INT  */
    FLOAT = 262,                   /* FLOAT  */
    VOID = 263,                    /* VOID  */
    RETURN = 264,                  /* RETURN  */
    CONST_INT = 265,               /* CONST_INT  */
    CONST_FLOAT = 266,             /* CONST_FLOAT  */
    ID = 267,                      /* ID  */
    ADDOP = 268,                   /* ADDOP  */
    MULOP = 269,                   /* MULOP  */
    ASSIGNOP = 270,                /* ASSIGNOP  */
    RELOP = 271,                   /* RELOP  */
    LOGICOP = 272,                 /* LOGICOP  */
    LPAREN = 273,                  /* LPAREN  */
    RPAREN = 274,                  /* RPAREN  */
    LCURL = 275,                   /* LCURL  */
    RCURL = 276,                   /* RCURL  */
    LTHIRD = 277,                  /* LTHIRD  */
    RTHIRD = 278,                  /* RTHIRD  */
    SEMICOLON = 279,               /* SEMICOLON  */
    COMMA = 280,                   /* COMMA  */
    WHILE = 281,                   /* WHILE  */
    DO = 282,                      /* DO  */
    SWITCH = 283,                  /* SWITCH  */
    DEFAULT = 284,                 /* DEFAULT  */
    GOTO = 285,                    /* GOTO  */
    BREAK = 286,                   /* BREAK  */
    CHAR = 287,                    /* CHAR  */
    DOUBLE = 288,                  /* DOUBLE  */
    CASE = 289,                    /* CASE  */
    CONTINUE = 290,                /* CONTINUE  */
    PRINTF = 291,                  /* PRINTF  */
    INCOP = 292,                   /* INCOP  */
    DECOP = 293,                   /* DECOP  */
    NOT = 294,                     /* NOT  */
    COLON = 295                    /* COLON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define FOR 260
#define INT 261
#define FLOAT 262
#define VOID 263
#define RETURN 264
#define CONST_INT 265
#define CONST_FLOAT 266
#define ID 267
#define ADDOP 268
#define MULOP 269
#define ASSIGNOP 270
#define RELOP 271
#define LOGICOP 272
#define LPAREN 273
#define RPAREN 274
#define LCURL 275
#define RCURL 276
#define LTHIRD 277
#define RTHIRD 278
#define SEMICOLON 279
#define COMMA 280
#define WHILE 281
#define DO 282
#define SWITCH 283
#define DEFAULT 284
#define GOTO 285
#define BREAK 286
#define CHAR 287
#define DOUBLE 288
#define CASE 289
#define CONTINUE 290
#define PRINTF 291
#define INCOP 292
#define DECOP 293
#define NOT 294
#define COLON 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
