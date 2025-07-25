/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "22101348.y"


#include"symbol_info.h"
#include <stdio.h>
#include <stdlib.h>
#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);
void yyerror(const char* s);


extern FILE *yyin;



ofstream outlog;

int lines;




#line 95 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_CONST_INT = 10,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 11,               /* CONST_FLOAT  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_ADDOP = 13,                     /* ADDOP  */
  YYSYMBOL_MULOP = 14,                     /* MULOP  */
  YYSYMBOL_ASSIGNOP = 15,                  /* ASSIGNOP  */
  YYSYMBOL_RELOP = 16,                     /* RELOP  */
  YYSYMBOL_LOGICOP = 17,                   /* LOGICOP  */
  YYSYMBOL_LPAREN = 18,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 19,                    /* RPAREN  */
  YYSYMBOL_LCURL = 20,                     /* LCURL  */
  YYSYMBOL_RCURL = 21,                     /* RCURL  */
  YYSYMBOL_LTHIRD = 22,                    /* LTHIRD  */
  YYSYMBOL_RTHIRD = 23,                    /* RTHIRD  */
  YYSYMBOL_SEMICOLON = 24,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 25,                     /* COMMA  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 30,                      /* GOTO  */
  YYSYMBOL_BREAK = 31,                     /* BREAK  */
  YYSYMBOL_CHAR = 32,                      /* CHAR  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_CASE = 34,                      /* CASE  */
  YYSYMBOL_CONTINUE = 35,                  /* CONTINUE  */
  YYSYMBOL_PRINTF = 36,                    /* PRINTF  */
  YYSYMBOL_INCOP = 37,                     /* INCOP  */
  YYSYMBOL_DECOP = 38,                     /* DECOP  */
  YYSYMBOL_NOT = 39,                       /* NOT  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_start = 42,                     /* start  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_unit = 44,                      /* unit  */
  YYSYMBOL_func_definition = 45,           /* func_definition  */
  YYSYMBOL_parameter_list = 46,            /* parameter_list  */
  YYSYMBOL_compound_statement = 47,        /* compound_statement  */
  YYSYMBOL_var_declaration = 48,           /* var_declaration  */
  YYSYMBOL_type_specifier = 49,            /* type_specifier  */
  YYSYMBOL_declaration_list = 50,          /* declaration_list  */
  YYSYMBOL_statements = 51,                /* statements  */
  YYSYMBOL_statement = 52,                 /* statement  */
  YYSYMBOL_expression_statement = 53,      /* expression_statement  */
  YYSYMBOL_variable = 54,                  /* variable  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_logic_expression = 56,          /* logic_expression  */
  YYSYMBOL_rel_expression = 57,            /* rel_expression  */
  YYSYMBOL_simple_expression = 58,         /* simple_expression  */
  YYSYMBOL_term = 59,                      /* term  */
  YYSYMBOL_unary_expression = 60,          /* unary_expression  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_argument_list = 62,             /* argument_list  */
  YYSYMBOL_arguments = 63                  /* arguments  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  115

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    39,    39,    45,    52,    60,    66,    75,    81,    90,
      99,   108,   117,   129,   135,   144,   155,   159,   163,   170,
     176,   182,   188,   196,   197,   201,   207,   213,   219,   225,
     231,   237,   243,   249,   259,   264,   272,   278,   287,   293,
     301,   307,   315,   321,   330,   336,   345,   351,   359,   365,
     371,   380,   386,   392,   398,   404,   410,   416,   425,   432,
     438,   444
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "FOR",
  "INT", "FLOAT", "VOID", "RETURN", "CONST_INT", "CONST_FLOAT", "ID",
  "ADDOP", "MULOP", "ASSIGNOP", "RELOP", "LOGICOP", "LPAREN", "RPAREN",
  "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", "WHILE",
  "DO", "SWITCH", "DEFAULT", "GOTO", "BREAK", "CHAR", "DOUBLE", "CASE",
  "CONTINUE", "PRINTF", "INCOP", "DECOP", "NOT", "COLON", "$accept",
  "start", "program", "unit", "func_definition", "parameter_list",
  "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     125,   -60,   -60,   -60,    10,   125,   -60,   -60,   -60,    15,
     -60,   -60,    -5,    40,   104,    19,   -60,    30,    42,   -17,
      59,    60,    82,    13,   -60,    42,   125,   -60,   -60,    72,
      87,    90,    45,   -60,   -60,    22,    45,    45,   -60,   -60,
      96,   102,    45,   -60,   -60,   110,    67,   -60,   -60,    23,
     103,   -60,   112,    37,   120,   -60,   -60,   -60,   124,   114,
      45,   106,   115,    45,    45,    52,   -60,   119,    45,   128,
     -60,   122,   -60,   -60,    45,   -60,   -60,   -60,    45,    45,
      45,    45,   -60,   -60,   123,   106,   -60,   -60,   127,   116,
     126,   -60,   129,   131,   -60,   -60,   120,   130,   -60,    89,
      45,   -60,    45,   -60,    89,   132,   147,   133,   -60,   -60,
     -60,    89,    89,   -60,   -60
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    16,    17,    18,     0,     2,     4,     6,     5,     0,
       1,     3,    21,     0,     0,     0,    15,     0,     0,     0,
      12,     0,    19,     0,     8,     0,     0,    11,    22,     0,
       0,     0,     0,    54,    55,    36,     0,     0,    14,    34,
       0,     0,     0,    27,    25,     0,     0,    23,    26,    51,
       0,    38,    40,    42,    44,    46,    50,     7,    10,     0,
       0,     0,     0,    59,     0,    51,    48,     0,     0,     0,
      49,    21,    13,    24,     0,    56,    57,    35,     0,     0,
       0,     0,     9,    20,     0,     0,    33,    61,     0,    58,
       0,    53,     0,     0,    39,    41,    45,    43,    47,     0,
       0,    52,     0,    37,     0,     0,    28,     0,    60,    31,
      32,     0,     0,    29,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -60,   148,   -60,   -60,   -11,    81,   121,   -60,
     -60,   -45,   -50,   -33,   -32,   -59,    76,    75,    78,   -30,
     -60,   -60,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    19,    43,    44,    45,    13,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    88,    89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      62,    73,    25,    65,    87,    67,    66,    24,    26,    65,
      10,    85,    70,    14,    57,    94,    30,    15,    31,     1,
       2,     3,    32,    33,    34,    35,    36,    12,    84,    21,
      65,    37,    90,    23,    38,   100,    92,    39,    74,    40,
      63,    65,    22,   108,    64,    65,    65,    65,    65,    41,
      79,    98,    42,    80,   106,    33,    34,    35,    36,   109,
      75,    76,    23,    37,    16,    17,   113,   114,   107,    65,
      30,    27,    31,     1,     2,     3,    32,    33,    34,    35,
      36,     8,    59,    28,    42,    37,     8,    23,    72,    75,
      76,    39,    30,    40,    31,     1,     2,     3,    32,    33,
      34,    35,    36,    41,    29,    60,    42,    37,    61,    23,
       1,     2,     3,    39,    68,    40,    33,    34,    35,    36,
      69,     9,    71,    18,    37,    41,     9,    77,    42,    78,
      39,     1,     2,     3,    81,    20,    82,    83,    91,    86,
      93,   102,    99,    79,    15,    42,   101,    58,   104,   103,
     105,   111,   112,    11,    95,    97,   110,    96
};

static const yytype_int8 yycheck[] =
{
      32,    46,    19,    36,    63,    37,    36,    18,    25,    42,
       0,    61,    42,    18,    25,    74,     3,    22,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    12,    60,    10,
      63,    18,    64,    20,    21,    85,    68,    24,    15,    26,
      18,    74,    12,   102,    22,    78,    79,    80,    81,    36,
      13,    81,    39,    16,    99,    10,    11,    12,    13,   104,
      37,    38,    20,    18,    24,    25,   111,   112,   100,   102,
       3,    12,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,    10,    23,    39,    18,     5,    20,    21,    37,
      38,    24,     3,    26,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    36,    22,    18,    39,    18,    18,    20,
       6,     7,     8,    24,    18,    26,    10,    11,    12,    13,
      18,     0,    12,    19,    18,    36,     5,    24,    39,    17,
      24,     6,     7,     8,    14,    14,    12,    23,    19,    24,
      12,    25,    19,    13,    22,    39,    19,    26,    19,    23,
      19,     4,    19,     5,    78,    80,    24,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,    42,    43,    44,    45,    48,    49,
       0,    44,    12,    50,    18,    22,    24,    25,    19,    46,
      49,    10,    12,    20,    47,    19,    25,    12,    23,    22,
       3,     5,     9,    10,    11,    12,    13,    18,    21,    24,
      26,    36,    39,    47,    48,    49,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    47,    49,    10,
      18,    18,    55,    18,    22,    54,    60,    55,    18,    18,
      60,    12,    21,    52,    15,    37,    38,    24,    17,    13,
      16,    14,    12,    23,    55,    53,    24,    56,    62,    63,
      55,    19,    55,    12,    56,    57,    59,    58,    60,    19,
      53,    19,    25,    23,    19,    19,    52,    55,    56,    52,
      24,     4,    19,    52,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    46,    46,    47,    47,    48,    49,    49,    49,    50,
      50,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     5,     4,
       3,     2,     1,     3,     2,     3,     1,     1,     1,     3,
       6,     1,     4,     1,     2,     1,     1,     1,     5,     7,
       7,     5,     5,     3,     1,     2,     1,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       1,     1,     4,     3,     1,     1,     2,     2,     1,     0,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: program  */
#line 40 "22101348.y"
        {
		outlog<<"At line no: "<<lines<<" start : program "<<endl<<endl;
	}
#line 1352 "y.tab.c"
    break;

  case 3: /* program: program unit  */
#line 46 "22101348.y"
        {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname()<<endl<<endl;
		
		yyval = new symbol_info(yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname(),"program");
	}
#line 1363 "y.tab.c"
    break;

  case 4: /* program: unit  */
#line 53 "22101348.y"
        {
		outlog << "At line no: " << lines << " program : unit " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "program");
	}
#line 1373 "y.tab.c"
    break;

  case 5: /* unit: var_declaration  */
#line 61 "22101348.y"
     {
         outlog << "At line no: " << lines << " unit : var_declaration " << endl << endl;
         outlog << yyvsp[0]->getname() << endl << endl;
         yyval = new symbol_info(yyvsp[0]->getname(), "var_declaration");
     }
#line 1383 "y.tab.c"
    break;

  case 6: /* unit: func_definition  */
#line 67 "22101348.y"
     {
         outlog << "At line no: " << lines << " unit : func_definition " << endl << endl;
         outlog << yyvsp[0]->getname() << endl << endl;
         yyval = new symbol_info(yyvsp[0]->getname(), "func_definition");
     }
#line 1393 "y.tab.c"
    break;

  case 7: /* func_definition: type_specifier ID LPAREN parameter_list RPAREN compound_statement  */
#line 76 "22101348.y"
    {
        outlog << "At line no: " << lines << " func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement " << endl << endl;
        outlog << yyvsp[-5]->getname() << " " << yyvsp[-4]->getname() << "(" << yyvsp[-2]->getname() << ")" << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-5]->getname() + " " + yyvsp[-4]->getname() + "(" + yyvsp[-2]->getname() + ")" + yyvsp[0]->getname(), "func_def");
    }
#line 1403 "y.tab.c"
    break;

  case 8: /* func_definition: type_specifier ID LPAREN RPAREN compound_statement  */
#line 82 "22101348.y"
    {
        outlog << "At line no: " << lines << " func_definition : type_specifier ID LPAREN RPAREN compound_statement " << endl << endl;
        outlog << yyvsp[-4]->getname() << " " << yyvsp[-3]->getname() << "()\n" << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-4]->getname() + " " + yyvsp[-3]->getname() + "()\n" + yyvsp[0]->getname(), "func_def");
    }
#line 1413 "y.tab.c"
    break;

  case 9: /* parameter_list: parameter_list COMMA type_specifier ID  */
#line 91 "22101348.y"
    {
        
        outlog << "At line no: " << lines << " parameter_list : parameter_list COMMA type_specifier ID " << endl << endl;
        outlog << yyvsp[-3]->getname() << ", " << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        
       
        yyval = new symbol_info(yyvsp[-3]->getname() + ", " + yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "parameter_list");
    }
#line 1426 "y.tab.c"
    break;

  case 10: /* parameter_list: parameter_list COMMA type_specifier  */
#line 100 "22101348.y"
    {
        
        outlog << "At line no: " << lines << " parameter_list : parameter_list COMMA type_specifier " << endl << endl;
        outlog << yyvsp[-2]->getname() << ", " << yyvsp[0]->getname() << endl << endl;

        
        yyval = new symbol_info(yyvsp[-2]->getname() + ", " + yyvsp[0]->getname(), "parameter_list");
    }
#line 1439 "y.tab.c"
    break;

  case 11: /* parameter_list: type_specifier ID  */
#line 109 "22101348.y"
    {
        
        outlog << "At line no: " << lines << " parameter_list : type_specifier ID " << endl << endl;
        outlog << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;

        
        yyval = new symbol_info(yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "parameter_list");
    }
#line 1452 "y.tab.c"
    break;

  case 12: /* parameter_list: type_specifier  */
#line 118 "22101348.y"
    {
        
        outlog << "At line no: " << lines << " parameter_list : type_specifier " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;

        
        yyval = new symbol_info(yyvsp[0]->getname(), "parameter_list");
    }
#line 1465 "y.tab.c"
    break;

  case 13: /* compound_statement: LCURL statements RCURL  */
#line 130 "22101348.y"
    {
        outlog << "At line no: " << lines << " compound_statement : LCURL statements RCURL " << endl << endl;
        outlog << "Statements: " << yyvsp[-1]->getname() << endl << endl;
        yyval = new symbol_info("{" + yyvsp[-1]->getname() + "}", "compound_statement");
    }
#line 1475 "y.tab.c"
    break;

  case 14: /* compound_statement: LCURL RCURL  */
#line 136 "22101348.y"
    {
        outlog << "At line no: " << lines << " compound_statement : LCURL RCURL " << endl << endl;
        outlog << "Empty compound statement" << endl << endl;
        yyval = new symbol_info("{}", "compound_statement");
    }
#line 1485 "y.tab.c"
    break;

  case 15: /* var_declaration: type_specifier declaration_list SEMICOLON  */
#line 145 "22101348.y"
    {
        
        outlog << "At line no: " << lines << " var_declaration : type_specifier declaration_list SEMICOLON " << endl << endl;
        outlog << yyvsp[-2]->getname() << " " << yyvsp[-1]->getname() << ";" << endl << endl;
        
        
        yyval = new symbol_info(yyvsp[-2]->getname() + " " + yyvsp[-1]->getname(), "var_declaration");
    }
#line 1498 "y.tab.c"
    break;

  case 16: /* type_specifier: INT  */
#line 156 "22101348.y"
    {
        yyval = new symbol_info("int", "type_specifier");
    }
#line 1506 "y.tab.c"
    break;

  case 17: /* type_specifier: FLOAT  */
#line 160 "22101348.y"
    {
        yyval = new symbol_info("float", "type_specifier");
    }
#line 1514 "y.tab.c"
    break;

  case 18: /* type_specifier: VOID  */
#line 164 "22101348.y"
    {
        yyval = new symbol_info("void", "type_specifier");
    }
#line 1522 "y.tab.c"
    break;

  case 19: /* declaration_list: declaration_list COMMA ID  */
#line 171 "22101348.y"
    {
        outlog << "At line no: " << lines << " declaration_list : declaration_list COMMA ID " << endl << endl;
        outlog << yyvsp[-2]->getname() << ", " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + ", " + yyvsp[0]->getname(), "declaration_list");
    }
#line 1532 "y.tab.c"
    break;

  case 20: /* declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD  */
#line 177 "22101348.y"
    {
        outlog << "At line no: " << lines << " declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD " << endl << endl;
        outlog << yyvsp[-5]->getname() << ", " << yyvsp[-3]->getname() << "[" << yyvsp[-1]->getname() << "]" << endl << endl;
        yyval = new symbol_info(yyvsp[-5]->getname() + ", " + yyvsp[-3]->getname() + "[" + yyvsp[-1]->getname() + "]", "declaration_list");
    }
#line 1542 "y.tab.c"
    break;

  case 21: /* declaration_list: ID  */
#line 183 "22101348.y"
    {
        outlog << "At line no: " << lines << " declaration_list : ID " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "declaration_list");
    }
#line 1552 "y.tab.c"
    break;

  case 22: /* declaration_list: ID LTHIRD CONST_INT RTHIRD  */
#line 189 "22101348.y"
    {
        outlog << "At line no: " << lines << " declaration_list : ID LTHIRD CONST_INT RTHIRD " << endl << endl;
        outlog << yyvsp[-3]->getname() << "[" << yyvsp[-1]->getname() << "]" << endl << endl;
        yyval = new symbol_info(yyvsp[-3]->getname() + "[" + yyvsp[-1]->getname() + "]", "declaration_list");
    }
#line 1562 "y.tab.c"
    break;

  case 25: /* statement: var_declaration  */
#line 202 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : var_declaration " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "var_declaration");
    }
#line 1572 "y.tab.c"
    break;

  case 26: /* statement: expression_statement  */
#line 208 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : expression_statement " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "expression_statement");
    }
#line 1582 "y.tab.c"
    break;

  case 27: /* statement: compound_statement  */
#line 214 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : compound_statement " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "compound_statement");
    }
#line 1592 "y.tab.c"
    break;

  case 28: /* statement: IF LPAREN expression RPAREN statement  */
#line 220 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : IF LPAREN expression RPAREN statement " << endl << endl;
        outlog << "if(" << yyvsp[-2]->getname() << ")" << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info("if(" + yyvsp[-2]->getname() + ")" + yyvsp[0]->getname(), "if_statement");
    }
#line 1602 "y.tab.c"
    break;

  case 29: /* statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 226 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : IF LPAREN expression RPAREN statement ELSE statement " << endl << endl;
        outlog << "if(" << yyvsp[-4]->getname() << ")" << yyvsp[-2]->getname() << " else " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info("if(" + yyvsp[-4]->getname() + ")" + yyvsp[-2]->getname() + " else " + yyvsp[0]->getname(), "if_else_statement");
    }
#line 1612 "y.tab.c"
    break;

  case 30: /* statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 232 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement " << endl << endl;
        outlog << "for(" << yyvsp[-4]->getname() << yyvsp[-3]->getname() << yyvsp[-2]->getname() << ")" << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info("for(" + yyvsp[-4]->getname() + yyvsp[-3]->getname() + yyvsp[-2]->getname() + ")" + yyvsp[0]->getname(), "for_statement");
    }
#line 1622 "y.tab.c"
    break;

  case 31: /* statement: WHILE LPAREN expression RPAREN statement  */
#line 238 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : WHILE LPAREN expression RPAREN statement " << endl << endl;
        outlog << "while(" << yyvsp[-2]->getname() << ")" << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info("while(" + yyvsp[-2]->getname() + ")" + yyvsp[0]->getname(), "while_statement");
    }
#line 1632 "y.tab.c"
    break;

  case 32: /* statement: PRINTF LPAREN ID RPAREN SEMICOLON  */
#line 244 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : PRINTF LPAREN ID RPAREN SEMICOLON " << endl << endl;
        outlog << "printf(" << yyvsp[-2]->getname() << ");" << endl << endl;
        yyval = new symbol_info("printf(" + yyvsp[-2]->getname() + ");", "print_statement");
    }
#line 1642 "y.tab.c"
    break;

  case 33: /* statement: RETURN expression SEMICOLON  */
#line 250 "22101348.y"
    {
        outlog << "At line no: " << lines << " statement : RETURN expression SEMICOLON " << endl << endl;
        outlog << "return " << yyvsp[-1]->getname() << ";" << endl << endl;
        yyval = new symbol_info("return " + yyvsp[-1]->getname() + ";", "return_statement");
    }
#line 1652 "y.tab.c"
    break;

  case 34: /* expression_statement: SEMICOLON  */
#line 260 "22101348.y"
    {
        outlog << "At line no: " << lines << " expression_statement : SEMICOLON " << endl << endl;
        yyval = new symbol_info(";", "expression_statement");
    }
#line 1661 "y.tab.c"
    break;

  case 35: /* expression_statement: expression SEMICOLON  */
#line 265 "22101348.y"
    {
        outlog << "At line no: " << lines << " expression_statement : expression SEMICOLON " << endl << endl;
        outlog << yyvsp[-1]->getname() << ";" << endl << endl;
        yyval = new symbol_info(yyvsp[-1]->getname() + ";", "expression_statement");
    }
#line 1671 "y.tab.c"
    break;

  case 36: /* variable: ID  */
#line 273 "22101348.y"
    {
        outlog << "At line no: " << lines << " variable : ID " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "variable");
    }
#line 1681 "y.tab.c"
    break;

  case 37: /* variable: ID LTHIRD expression RTHIRD  */
#line 279 "22101348.y"
    {
        outlog << "At line no: " << lines << " variable : ID LTHIRD expression RTHIRD " << endl << endl;
        outlog << yyvsp[-3]->getname() << "[" << yyvsp[-1]->getname() << "]" << endl << endl;
        yyval = new symbol_info(yyvsp[-3]->getname() + "[" + yyvsp[-1]->getname() + "]", "variable");
    }
#line 1691 "y.tab.c"
    break;

  case 38: /* expression: logic_expression  */
#line 288 "22101348.y"
    {
        outlog << "At line no: " << lines << " expression : logic_expression " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "expression");
    }
#line 1701 "y.tab.c"
    break;

  case 39: /* expression: variable ASSIGNOP logic_expression  */
#line 294 "22101348.y"
    {
        outlog << "At line no: " << lines << " expression : variable ASSIGNOP logic_expression " << endl << endl;
        outlog << yyvsp[-2]->getname() << " = " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + " = " + yyvsp[0]->getname(), "expression");
    }
#line 1711 "y.tab.c"
    break;

  case 40: /* logic_expression: rel_expression  */
#line 302 "22101348.y"
    {
        outlog << "At line no: " << lines << " logic_expression : rel_expression " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "logic_expression");
    }
#line 1721 "y.tab.c"
    break;

  case 41: /* logic_expression: rel_expression LOGICOP rel_expression  */
#line 308 "22101348.y"
    {
        outlog << "At line no: " << lines << " logic_expression : rel_expression LOGICOP rel_expression " << endl << endl;
        outlog << yyvsp[-2]->getname() << " " << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + " " + yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "logic_expression");
    }
#line 1731 "y.tab.c"
    break;

  case 42: /* rel_expression: simple_expression  */
#line 316 "22101348.y"
    {
        outlog << "At line no: " << lines << " rel_expression : simple_expression " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "rel_expression");
    }
#line 1741 "y.tab.c"
    break;

  case 43: /* rel_expression: simple_expression RELOP simple_expression  */
#line 322 "22101348.y"
    {
        outlog << "At line no: " << lines << " rel_expression : simple_expression RELOP simple_expression " << endl << endl;
        outlog << yyvsp[-2]->getname() << " " << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + " " + yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "rel_expression");
    }
#line 1751 "y.tab.c"
    break;

  case 44: /* simple_expression: term  */
#line 331 "22101348.y"
    {
        outlog << "At line no: " << lines << " simple_expression : term " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "simple_expression");
    }
#line 1761 "y.tab.c"
    break;

  case 45: /* simple_expression: simple_expression ADDOP term  */
#line 337 "22101348.y"
    {
        outlog << "At line no: " << lines << " simple_expression : simple_expression ADDOP term " << endl << endl;
        outlog << yyvsp[-2]->getname() << " " << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + " " + yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "simple_expression");
    }
#line 1771 "y.tab.c"
    break;

  case 46: /* term: unary_expression  */
#line 346 "22101348.y"
    {
        outlog << "At line no: " << lines << " term : unary_expression " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "term");
    }
#line 1781 "y.tab.c"
    break;

  case 47: /* term: term MULOP unary_expression  */
#line 352 "22101348.y"
    {
        outlog << "At line no: " << lines << " term : term MULOP unary_expression " << endl << endl;
        outlog << yyvsp[-2]->getname() << " " << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + " " + yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "term");
    }
#line 1791 "y.tab.c"
    break;

  case 48: /* unary_expression: ADDOP unary_expression  */
#line 360 "22101348.y"
    {
        outlog << "At line no: " << lines << " unary_expression : ADDOP unary_expression " << endl << endl;
        outlog << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "unary_expression");
    }
#line 1801 "y.tab.c"
    break;

  case 49: /* unary_expression: NOT unary_expression  */
#line 366 "22101348.y"
    {
        outlog << "At line no: " << lines << " unary_expression : NOT unary_expression " << endl << endl;
        outlog << yyvsp[-1]->getname() << " " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-1]->getname() + " " + yyvsp[0]->getname(), "unary_expression");
    }
#line 1811 "y.tab.c"
    break;

  case 50: /* unary_expression: factor  */
#line 372 "22101348.y"
    {
        outlog << "At line no: " << lines << " unary_expression : factor " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "unary_expression");
    }
#line 1821 "y.tab.c"
    break;

  case 51: /* factor: variable  */
#line 381 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : variable " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "factor");
    }
#line 1831 "y.tab.c"
    break;

  case 52: /* factor: ID LPAREN argument_list RPAREN  */
#line 387 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : ID LPAREN argument_list RPAREN " << endl << endl;
        outlog << yyvsp[-3]->getname() << "(" << yyvsp[-1]->getname() << ")" << endl << endl;
        yyval = new symbol_info(yyvsp[-3]->getname() + "(" + yyvsp[-1]->getname() + ")", "factor");
    }
#line 1841 "y.tab.c"
    break;

  case 53: /* factor: LPAREN expression RPAREN  */
#line 393 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : LPAREN expression RPAREN " << endl << endl;
        outlog << "(" << yyvsp[-1]->getname() << ")" << endl << endl;
        yyval = new symbol_info("(" + yyvsp[-1]->getname() + ")", "factor");
    }
#line 1851 "y.tab.c"
    break;

  case 54: /* factor: CONST_INT  */
#line 399 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : CONST_INT " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "factor");
    }
#line 1861 "y.tab.c"
    break;

  case 55: /* factor: CONST_FLOAT  */
#line 405 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : CONST_FLOAT " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "factor");
    }
#line 1871 "y.tab.c"
    break;

  case 56: /* factor: variable INCOP  */
#line 411 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : variable INCOP " << endl << endl;
        outlog << yyvsp[-1]->getname() << "++" << endl << endl;
        yyval = new symbol_info(yyvsp[-1]->getname() + "++", "factor");
    }
#line 1881 "y.tab.c"
    break;

  case 57: /* factor: variable DECOP  */
#line 417 "22101348.y"
    {
        outlog << "At line no: " << lines << " factor : variable DECOP " << endl << endl;
        outlog << yyvsp[-1]->getname() << "--" << endl << endl;
        yyval = new symbol_info(yyvsp[-1]->getname() + "--", "factor");
    }
#line 1891 "y.tab.c"
    break;

  case 58: /* argument_list: arguments  */
#line 426 "22101348.y"
    {
        outlog << "At line no: " << lines << " argument_list : arguments " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "argument_list");
    }
#line 1901 "y.tab.c"
    break;

  case 59: /* argument_list: %empty  */
#line 432 "22101348.y"
    {
        outlog << "At line no: " << lines << " argument_list : empty " << endl << endl;
        yyval = new symbol_info("", "argument_list");  // Empty argument list
    }
#line 1910 "y.tab.c"
    break;

  case 60: /* arguments: arguments COMMA logic_expression  */
#line 439 "22101348.y"
    {
        outlog << "At line no: " << lines << " arguments : arguments COMMA logic_expression " << endl << endl;
        outlog << yyvsp[-2]->getname() << ", " << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[-2]->getname() + ", " + yyvsp[0]->getname(), "arguments");
    }
#line 1920 "y.tab.c"
    break;

  case 61: /* arguments: logic_expression  */
#line 445 "22101348.y"
    {
        outlog << "At line no: " << lines << " arguments : logic_expression " << endl << endl;
        outlog << yyvsp[0]->getname() << endl << endl;
        yyval = new symbol_info(yyvsp[0]->getname(), "arguments");
    }
#line 1930 "y.tab.c"
    break;


#line 1934 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 454 "22101348.y"



void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}



int main(int argc, char *argv[])
{
	if(argc != 2) 
	{
        cout << "Usage: " << argv[0] << " <input_file>" << endl;
        return 0;
	}
	yyin = fopen(argv[1], "r");
	outlog.open("my_log.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<< argv[1] << endl;
		return 0;
	}
    
	yyparse();
	
	outlog << "Total lines: " << lines << std::endl;
	
	outlog.close();
	
	fclose(yyin);
	
	return 0;
}
