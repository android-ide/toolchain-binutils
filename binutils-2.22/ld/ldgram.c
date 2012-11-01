/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     NAME = 259,
     LNAME = 260,
     OREQ = 261,
     ANDEQ = 262,
     RSHIFTEQ = 263,
     LSHIFTEQ = 264,
     DIVEQ = 265,
     MULTEQ = 266,
     MINUSEQ = 267,
     PLUSEQ = 268,
     OROR = 269,
     ANDAND = 270,
     NE = 271,
     EQ = 272,
     GE = 273,
     LE = 274,
     RSHIFT = 275,
     LSHIFT = 276,
     UNARY = 277,
     END = 278,
     ALIGN_K = 279,
     BLOCK = 280,
     BIND = 281,
     QUAD = 282,
     SQUAD = 283,
     LONG = 284,
     SHORT = 285,
     BYTE = 286,
     SECTIONS = 287,
     PHDRS = 288,
     INSERT_K = 289,
     AFTER = 290,
     BEFORE = 291,
     DATA_SEGMENT_ALIGN = 292,
     DATA_SEGMENT_RELRO_END = 293,
     DATA_SEGMENT_END = 294,
     SORT_BY_NAME = 295,
     SORT_BY_ALIGNMENT = 296,
     SORT_NONE = 297,
     SORT_BY_INIT_PRIORITY = 298,
     SIZEOF_HEADERS = 299,
     OUTPUT_FORMAT = 300,
     FORCE_COMMON_ALLOCATION = 301,
     OUTPUT_ARCH = 302,
     INHIBIT_COMMON_ALLOCATION = 303,
     SEGMENT_START = 304,
     INCLUDE = 305,
     MEMORY = 306,
     REGION_ALIAS = 307,
     LD_FEATURE = 308,
     NOLOAD = 309,
     DSECT = 310,
     COPY = 311,
     INFO = 312,
     OVERLAY = 313,
     DEFINED = 314,
     TARGET_K = 315,
     SEARCH_DIR = 316,
     MAP = 317,
     ENTRY = 318,
     NEXT = 319,
     SIZEOF = 320,
     ALIGNOF = 321,
     ADDR = 322,
     LOADADDR = 323,
     MAX_K = 324,
     MIN_K = 325,
     STARTUP = 326,
     HLL = 327,
     SYSLIB = 328,
     FLOAT = 329,
     NOFLOAT = 330,
     NOCROSSREFS = 331,
     ORIGIN = 332,
     FILL = 333,
     LENGTH = 334,
     CREATE_OBJECT_SYMBOLS = 335,
     INPUT = 336,
     GROUP = 337,
     OUTPUT = 338,
     CONSTRUCTORS = 339,
     ALIGNMOD = 340,
     AT = 341,
     SUBALIGN = 342,
     PROVIDE = 343,
     PROVIDE_HIDDEN = 344,
     AS_NEEDED = 345,
     CHIP = 346,
     LIST = 347,
     SECT = 348,
     ABSOLUTE = 349,
     LOAD = 350,
     NEWLINE = 351,
     ENDWORD = 352,
     ORDER = 353,
     NAMEWORD = 354,
     ASSERT_K = 355,
     FORMAT = 356,
     PUBLIC = 357,
     DEFSYMEND = 358,
     BASE = 359,
     ALIAS = 360,
     TRUNCATE = 361,
     REL = 362,
     INPUT_SCRIPT = 363,
     INPUT_MRI_SCRIPT = 364,
     INPUT_DEFSYM = 365,
     CASE = 366,
     EXTERN = 367,
     START = 368,
     VERS_TAG = 369,
     VERS_IDENTIFIER = 370,
     GLOBAL = 371,
     LOCAL = 372,
     VERSIONK = 373,
     INPUT_VERSION_SCRIPT = 374,
     KEEP = 375,
     ONLY_IF_RO = 376,
     ONLY_IF_RW = 377,
     SPECIAL = 378,
     INPUT_SECTION_FLAGS = 379,
     EXCLUDE_FILE = 380,
     CONSTANT = 381,
     INPUT_DYNAMIC_LIST = 382
   };
#endif
/* Tokens.  */
#define INT 258
#define NAME 259
#define LNAME 260
#define OREQ 261
#define ANDEQ 262
#define RSHIFTEQ 263
#define LSHIFTEQ 264
#define DIVEQ 265
#define MULTEQ 266
#define MINUSEQ 267
#define PLUSEQ 268
#define OROR 269
#define ANDAND 270
#define NE 271
#define EQ 272
#define GE 273
#define LE 274
#define RSHIFT 275
#define LSHIFT 276
#define UNARY 277
#define END 278
#define ALIGN_K 279
#define BLOCK 280
#define BIND 281
#define QUAD 282
#define SQUAD 283
#define LONG 284
#define SHORT 285
#define BYTE 286
#define SECTIONS 287
#define PHDRS 288
#define INSERT_K 289
#define AFTER 290
#define BEFORE 291
#define DATA_SEGMENT_ALIGN 292
#define DATA_SEGMENT_RELRO_END 293
#define DATA_SEGMENT_END 294
#define SORT_BY_NAME 295
#define SORT_BY_ALIGNMENT 296
#define SORT_NONE 297
#define SORT_BY_INIT_PRIORITY 298
#define SIZEOF_HEADERS 299
#define OUTPUT_FORMAT 300
#define FORCE_COMMON_ALLOCATION 301
#define OUTPUT_ARCH 302
#define INHIBIT_COMMON_ALLOCATION 303
#define SEGMENT_START 304
#define INCLUDE 305
#define MEMORY 306
#define REGION_ALIAS 307
#define LD_FEATURE 308
#define NOLOAD 309
#define DSECT 310
#define COPY 311
#define INFO 312
#define OVERLAY 313
#define DEFINED 314
#define TARGET_K 315
#define SEARCH_DIR 316
#define MAP 317
#define ENTRY 318
#define NEXT 319
#define SIZEOF 320
#define ALIGNOF 321
#define ADDR 322
#define LOADADDR 323
#define MAX_K 324
#define MIN_K 325
#define STARTUP 326
#define HLL 327
#define SYSLIB 328
#define FLOAT 329
#define NOFLOAT 330
#define NOCROSSREFS 331
#define ORIGIN 332
#define FILL 333
#define LENGTH 334
#define CREATE_OBJECT_SYMBOLS 335
#define INPUT 336
#define GROUP 337
#define OUTPUT 338
#define CONSTRUCTORS 339
#define ALIGNMOD 340
#define AT 341
#define SUBALIGN 342
#define PROVIDE 343
#define PROVIDE_HIDDEN 344
#define AS_NEEDED 345
#define CHIP 346
#define LIST 347
#define SECT 348
#define ABSOLUTE 349
#define LOAD 350
#define NEWLINE 351
#define ENDWORD 352
#define ORDER 353
#define NAMEWORD 354
#define ASSERT_K 355
#define FORMAT 356
#define PUBLIC 357
#define DEFSYMEND 358
#define BASE 359
#define ALIAS 360
#define TRUNCATE 361
#define REL 362
#define INPUT_SCRIPT 363
#define INPUT_MRI_SCRIPT 364
#define INPUT_DEFSYM 365
#define CASE 366
#define EXTERN 367
#define START 368
#define VERS_TAG 369
#define VERS_IDENTIFIER 370
#define GLOBAL 371
#define LOCAL 372
#define VERSIONK 373
#define INPUT_VERSION_SCRIPT 374
#define KEEP 375
#define ONLY_IF_RO 376
#define ONLY_IF_RW 377
#define SPECIAL 378
#define INPUT_SECTION_FLAGS 379
#define EXCLUDE_FILE 380
#define CONSTANT 381
#define INPUT_DYNAMIC_LIST 382




/* Copy the first part of user declarations.  */
#line 24 "ldgram.y"

/*

 */

#define DONTDECLARE_MALLOC

#include "sysdep.h"
#include "bfd.h"
#include "bfdlink.h"
#include "ld.h"
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldfile.h"
#include "ldemul.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldctor.h"
#include "ldlex.h"

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

static enum section_type sectype;
static lang_memory_region_type *region;

bfd_boolean ldgram_had_keep = FALSE;
char *ldgram_vers_current_lang = NULL;

#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 62 "ldgram.y"
{
  bfd_vma integer;
  struct big_int
    {
      bfd_vma integer;
      char *str;
    } bigint;
  fill_type *fill;
  char *name;
  const char *cname;
  struct wildcard_spec wildcard;
  struct wildcard_list *wildcard_list;
  struct name_list *name_list;
  struct flag_info_list *flag_info_list;
  struct flag_info *flag_info;
  int token;
  union etree_union *etree;
  struct phdr_info
    {
      bfd_boolean filehdr;
      bfd_boolean phdrs;
      union etree_union *at;
      union etree_union *flags;
    } phdr;
  struct lang_nocrossref *nocrossref;
  struct lang_output_section_phdr_list *section_phdr;
  struct bfd_elf_version_deps *deflist;
  struct bfd_elf_version_expr *versyms;
  struct bfd_elf_version_tree *versnode;
}
/* Line 193 of yacc.c.  */
#line 420 "ldgram.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 433 "ldgram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1979

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  151
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  365
/* YYNRULES -- Number of states.  */
#define YYNSTATES  791

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   382

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,     2,     2,     2,    34,    21,     2,
      37,   146,    32,    30,   144,    31,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,   145,
      24,     6,    25,    15,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   147,     2,   148,    20,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,    19,    59,   150,     2,     2,     2,
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
       5,     7,     8,     9,    10,    11,    12,    13,    14,    17,
      18,    22,    23,    26,    27,    28,    29,    35,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    20,    21,
      26,    27,    30,    34,    35,    38,    43,    45,    47,    50,
      52,    57,    62,    66,    69,    74,    78,    83,    88,    93,
      98,   103,   106,   109,   112,   117,   122,   125,   128,   131,
     134,   135,   141,   144,   145,   149,   152,   153,   155,   159,
     161,   165,   166,   168,   172,   173,   176,   178,   181,   185,
     186,   189,   192,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   218,   223,   228,   233,   242,   247,
     249,   251,   256,   257,   263,   268,   269,   275,   280,   285,
     289,   293,   300,   305,   307,   311,   314,   316,   320,   323,
     324,   330,   331,   339,   340,   347,   352,   355,   358,   359,
     364,   367,   368,   376,   378,   380,   382,   384,   390,   395,
     400,   405,   413,   421,   429,   437,   446,   451,   453,   457,
     462,   465,   467,   471,   473,   475,   478,   482,   487,   492,
     498,   500,   501,   507,   510,   512,   514,   516,   521,   523,
     528,   533,   534,   543,   544,   550,   553,   555,   556,   558,
     560,   562,   564,   566,   568,   570,   573,   574,   576,   578,
     580,   582,   584,   586,   588,   590,   592,   594,   598,   602,
     609,   616,   618,   619,   624,   626,   627,   631,   633,   634,
     642,   643,   649,   653,   657,   658,   662,   664,   667,   669,
     672,   677,   682,   686,   690,   692,   697,   701,   702,   704,
     706,   707,   710,   714,   715,   718,   721,   725,   730,   733,
     736,   739,   743,   747,   751,   755,   759,   763,   767,   771,
     775,   779,   783,   787,   791,   795,   799,   803,   809,   813,
     817,   822,   824,   826,   831,   836,   841,   846,   851,   856,
     861,   868,   875,   882,   887,   894,   899,   901,   908,   915,
     922,   927,   932,   936,   937,   942,   943,   948,   949,   954,
     955,   957,   959,   961,   962,   963,   964,   965,   966,   967,
     987,   988,   989,   990,   991,   992,  1011,  1012,  1013,  1021,
    1022,  1028,  1030,  1032,  1034,  1036,  1038,  1042,  1043,  1046,
    1050,  1053,  1060,  1071,  1074,  1076,  1077,  1079,  1082,  1083,
    1084,  1088,  1089,  1090,  1091,  1092,  1104,  1109,  1110,  1113,
    1114,  1115,  1122,  1124,  1125,  1129,  1135,  1136,  1140,  1141,
    1144,  1146,  1149,  1154,  1157,  1158,  1161,  1162,  1168,  1170,
    1173,  1178,  1184,  1191,  1193,  1196,  1197,  1200,  1205,  1210,
    1219,  1221,  1223,  1227,  1231,  1232,  1242,  1243,  1251,  1253,
    1257,  1259,  1263,  1265,  1269,  1270
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     152,     0,    -1,   124,   168,    -1,   125,   156,    -1,   135,
     267,    -1,   143,   262,    -1,   126,   154,    -1,     4,    -1,
      -1,   155,     4,     6,   223,    -1,    -1,   157,   158,    -1,
     158,   159,   112,    -1,    -1,   107,   223,    -1,   107,   223,
     144,   223,    -1,     4,    -1,   108,    -1,   114,   161,    -1,
     113,    -1,   118,     4,     6,   223,    -1,   118,     4,   144,
     223,    -1,   118,     4,   223,    -1,   117,     4,    -1,   109,
       4,   144,   223,    -1,   109,     4,   223,    -1,   109,     4,
       6,   223,    -1,    38,     4,     6,   223,    -1,    38,     4,
     144,   223,    -1,   101,     4,     6,   223,    -1,   101,     4,
     144,   223,    -1,   110,   163,    -1,   111,   162,    -1,   115,
       4,    -1,   121,     4,   144,     4,    -1,   121,     4,   144,
       3,    -1,   120,   223,    -1,   122,     3,    -1,   127,   164,
      -1,   128,   165,    -1,    -1,    66,   153,   160,   158,    36,
      -1,   129,     4,    -1,    -1,   161,   144,     4,    -1,   161,
       4,    -1,    -1,     4,    -1,   162,   144,     4,    -1,     4,
      -1,   163,   144,     4,    -1,    -1,     4,    -1,   164,   144,
       4,    -1,    -1,   166,   167,    -1,     4,    -1,   167,     4,
      -1,   167,   144,     4,    -1,    -1,   169,   170,    -1,   170,
     171,    -1,    -1,   203,    -1,   178,    -1,   254,    -1,   214,
      -1,   215,    -1,   217,    -1,   219,    -1,   180,    -1,   269,
      -1,   145,    -1,    76,    37,     4,   146,    -1,    77,    37,
     153,   146,    -1,    99,    37,   153,   146,    -1,    61,    37,
       4,   146,    -1,    61,    37,     4,   144,     4,   144,     4,
     146,    -1,    63,    37,     4,   146,    -1,    62,    -1,    64,
      -1,    97,    37,   174,   146,    -1,    -1,    98,   172,    37,
     174,   146,    -1,    78,    37,   153,   146,    -1,    -1,    66,
     153,   173,   170,    36,    -1,    92,    37,   220,   146,    -1,
     128,    37,   165,   146,    -1,    48,    49,     4,    -1,    48,
      50,     4,    -1,    68,    37,     4,   144,     4,   146,    -1,
      69,    37,     4,   146,    -1,     4,    -1,   174,   144,     4,
      -1,   174,     4,    -1,     5,    -1,   174,   144,     5,    -1,
     174,     5,    -1,    -1,   106,    37,   175,   174,   146,    -1,
      -1,   174,   144,   106,    37,   176,   174,   146,    -1,    -1,
     174,   106,    37,   177,   174,   146,    -1,    46,    58,   179,
      59,    -1,   179,   229,    -1,   179,   180,    -1,    -1,    79,
      37,     4,   146,    -1,   201,   200,    -1,    -1,   116,   181,
      37,   223,   144,     4,   146,    -1,     4,    -1,    32,    -1,
      15,    -1,   182,    -1,   141,    37,   186,   146,   182,    -1,
      54,    37,   182,   146,    -1,    55,    37,   182,   146,    -1,
      56,    37,   182,   146,    -1,    54,    37,    55,    37,   182,
     146,   146,    -1,    54,    37,    54,    37,   182,   146,   146,
      -1,    55,    37,    54,    37,   182,   146,   146,    -1,    55,
      37,    55,    37,   182,   146,   146,    -1,    54,    37,   141,
      37,   186,   146,   182,   146,    -1,    57,    37,   182,   146,
      -1,     4,    -1,   184,    21,     4,    -1,   140,    37,   184,
     146,    -1,   186,   182,    -1,   182,    -1,   187,   202,   183,
      -1,   183,    -1,     4,    -1,   185,     4,    -1,   147,   187,
     148,    -1,   185,   147,   187,   148,    -1,   183,    37,   187,
     146,    -1,   185,   183,    37,   187,   146,    -1,   188,    -1,
      -1,   136,    37,   190,   188,   146,    -1,   201,   200,    -1,
      96,    -1,   145,    -1,   100,    -1,    54,    37,   100,   146,
      -1,   189,    -1,   196,    37,   221,   146,    -1,    94,    37,
     197,   146,    -1,    -1,   116,   192,    37,   223,   144,     4,
     146,   200,    -1,    -1,    66,   153,   193,   195,    36,    -1,
     194,   191,    -1,   191,    -1,    -1,   194,    -1,    41,    -1,
      42,    -1,    43,    -1,    44,    -1,    45,    -1,   221,    -1,
       6,   197,    -1,    -1,    14,    -1,    13,    -1,    12,    -1,
      11,    -1,    10,    -1,     9,    -1,     8,    -1,     7,    -1,
     145,    -1,   144,    -1,     4,     6,   221,    -1,     4,   199,
     221,    -1,   104,    37,     4,     6,   221,   146,    -1,   105,
      37,     4,     6,   221,   146,    -1,   144,    -1,    -1,    67,
      58,   204,    59,    -1,   205,    -1,    -1,   205,   202,   206,
      -1,   206,    -1,    -1,     4,   207,   211,    16,   209,   202,
     210,    -1,    -1,    66,   153,   208,   204,    36,    -1,    93,
       6,   221,    -1,    95,     6,   221,    -1,    -1,    37,   212,
     146,    -1,   213,    -1,   212,   213,    -1,     4,    -1,   149,
       4,    -1,    87,    37,   153,   146,    -1,    88,    37,   216,
     146,    -1,    88,    37,   146,    -1,   216,   202,   153,    -1,
     153,    -1,    89,    37,   218,   146,    -1,   218,   202,   153,
      -1,    -1,    90,    -1,    91,    -1,    -1,     4,   220,    -1,
       4,   144,   220,    -1,    -1,   222,   223,    -1,    31,   223,
      -1,    37,   223,   146,    -1,    80,    37,   223,   146,    -1,
     149,   223,    -1,    30,   223,    -1,   150,   223,    -1,   223,
      32,   223,    -1,   223,    33,   223,    -1,   223,    34,   223,
      -1,   223,    30,   223,    -1,   223,    31,   223,    -1,   223,
      29,   223,    -1,   223,    28,   223,    -1,   223,    23,   223,
      -1,   223,    22,   223,    -1,   223,    27,   223,    -1,   223,
      26,   223,    -1,   223,    24,   223,    -1,   223,    25,   223,
      -1,   223,    21,   223,    -1,   223,    20,   223,    -1,   223,
      19,   223,    -1,   223,    15,   223,    16,   223,    -1,   223,
      18,   223,    -1,   223,    17,   223,    -1,    75,    37,     4,
     146,    -1,     3,    -1,    60,    -1,    82,    37,     4,   146,
      -1,    81,    37,     4,   146,    -1,    83,    37,     4,   146,
      -1,    84,    37,     4,   146,    -1,   142,    37,     4,   146,
      -1,   110,    37,   223,   146,    -1,    38,    37,   223,   146,
      -1,    38,    37,   223,   144,   223,   146,    -1,    51,    37,
     223,   144,   223,   146,    -1,    52,    37,   223,   144,   223,
     146,    -1,    53,    37,   223,   146,    -1,    65,    37,     4,
     144,   223,   146,    -1,    39,    37,   223,   146,    -1,     4,
      -1,    85,    37,   223,   144,   223,   146,    -1,    86,    37,
     223,   144,   223,   146,    -1,   116,    37,   223,   144,     4,
     146,    -1,    93,    37,     4,   146,    -1,    95,    37,     4,
     146,    -1,   102,    25,     4,    -1,    -1,   102,    37,   223,
     146,    -1,    -1,    38,    37,   223,   146,    -1,    -1,   103,
      37,   223,   146,    -1,    -1,   137,    -1,   138,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,   230,   245,
     225,   226,   227,   231,   228,    58,   232,   195,    59,   233,
     248,   224,   249,   198,   234,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    74,   235,   246,   247,   225,   227,   236,    58,
     237,   250,    59,   238,   248,   224,   249,   198,   239,   202,
      -1,    -1,    -1,    98,   240,   245,   241,    58,   179,    59,
      -1,    -1,    66,   153,   242,   179,    36,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    37,   243,
     146,    -1,    -1,    37,   146,    -1,   223,   244,    16,    -1,
     244,    16,    -1,    40,    37,   223,   146,   244,    16,    -1,
      40,    37,   223,   146,    39,    37,   223,   146,   244,    16,
      -1,   223,    16,    -1,    16,    -1,    -1,    92,    -1,    25,
       4,    -1,    -1,    -1,   249,    16,     4,    -1,    -1,    -1,
      -1,    -1,   250,     4,   251,    58,   195,    59,   252,   249,
     198,   253,   202,    -1,    47,    58,   255,    59,    -1,    -1,
     255,   256,    -1,    -1,    -1,     4,   257,   259,   260,   258,
     145,    -1,   223,    -1,    -1,     4,   261,   260,    -1,   102,
      37,   223,   146,   260,    -1,    -1,    37,   223,   146,    -1,
      -1,   263,   264,    -1,   265,    -1,   264,   265,    -1,    58,
     266,    59,   145,    -1,   275,   145,    -1,    -1,   268,   271,
      -1,    -1,   270,   134,    58,   271,    59,    -1,   272,    -1,
     271,   272,    -1,    58,   274,    59,   145,    -1,   130,    58,
     274,    59,   145,    -1,   130,    58,   274,    59,   273,   145,
      -1,   130,    -1,   273,   130,    -1,    -1,   275,   145,    -1,
     132,    16,   275,   145,    -1,   133,    16,   275,   145,    -1,
     132,    16,   275,   145,   133,    16,   275,   145,    -1,   131,
      -1,     4,    -1,   275,   145,   131,    -1,   275,   145,     4,
      -1,    -1,   275,   145,   128,     4,    58,   276,   275,   278,
      59,    -1,    -1,   128,     4,    58,   277,   275,   278,    59,
      -1,   132,    -1,   275,   145,   132,    -1,   133,    -1,   275,
     145,   133,    -1,   128,    -1,   275,   145,   128,    -1,    -1,
     145,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   169,   170,   171,   172,   176,   180,   180,
     190,   190,   203,   204,   208,   209,   210,   213,   216,   217,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   241,   242,   244,   246,   248,   250,   252,   253,
     255,   254,   258,   260,   264,   265,   266,   270,   272,   276,
     278,   283,   284,   285,   290,   290,   295,   297,   299,   304,
     304,   310,   311,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   328,   330,   332,   335,   337,   339,
     341,   343,   345,   344,   348,   351,   350,   354,   358,   359,
     361,   363,   365,   370,   373,   376,   379,   382,   385,   389,
     388,   394,   393,   399,   398,   406,   410,   411,   412,   416,
     418,   419,   419,   427,   431,   435,   442,   449,   456,   463,
     470,   477,   484,   491,   498,   505,   512,   521,   539,   560,
     573,   582,   593,   602,   613,   622,   631,   635,   644,   648,
     656,   658,   657,   664,   665,   669,   670,   675,   680,   681,
     686,   690,   690,   694,   693,   700,   701,   704,   706,   710,
     712,   714,   716,   718,   723,   730,   732,   736,   738,   740,
     742,   744,   746,   748,   750,   755,   755,   760,   764,   772,
     776,   784,   784,   788,   791,   791,   794,   795,   800,   799,
     805,   804,   811,   819,   827,   828,   832,   833,   837,   839,
     844,   849,   850,   855,   857,   863,   865,   867,   871,   873,
     879,   882,   891,   902,   902,   908,   910,   912,   914,   916,
     918,   921,   923,   925,   927,   929,   931,   933,   935,   937,
     939,   941,   943,   945,   947,   949,   951,   953,   955,   957,
     959,   961,   963,   966,   968,   970,   972,   974,   976,   978,
     980,   982,   984,   986,   988,   997,   999,  1001,  1003,  1005,
    1007,  1009,  1015,  1016,  1020,  1021,  1025,  1026,  1030,  1031,
    1035,  1036,  1037,  1038,  1041,  1045,  1048,  1054,  1056,  1041,
    1063,  1065,  1067,  1072,  1074,  1062,  1084,  1086,  1084,  1092,
    1091,  1098,  1099,  1100,  1101,  1102,  1106,  1107,  1108,  1112,
    1113,  1118,  1119,  1124,  1125,  1130,  1131,  1136,  1138,  1143,
    1146,  1159,  1163,  1168,  1170,  1161,  1178,  1181,  1183,  1187,
    1188,  1187,  1197,  1242,  1245,  1258,  1267,  1270,  1277,  1277,
    1289,  1290,  1294,  1298,  1307,  1307,  1321,  1321,  1331,  1332,
    1336,  1340,  1344,  1351,  1355,  1363,  1366,  1370,  1374,  1378,
    1385,  1389,  1393,  1397,  1402,  1401,  1415,  1414,  1424,  1428,
    1432,  1436,  1440,  1444,  1450,  1452
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NAME", "LNAME", "'='", "OREQ",
  "ANDEQ", "RSHIFTEQ", "LSHIFTEQ", "DIVEQ", "MULTEQ", "MINUSEQ", "PLUSEQ",
  "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "NE", "EQ", "'<'",
  "'>'", "GE", "LE", "RSHIFT", "LSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "BIND", "QUAD", "SQUAD",
  "LONG", "SHORT", "BYTE", "SECTIONS", "PHDRS", "INSERT_K", "AFTER",
  "BEFORE", "DATA_SEGMENT_ALIGN", "DATA_SEGMENT_RELRO_END",
  "DATA_SEGMENT_END", "SORT_BY_NAME", "SORT_BY_ALIGNMENT", "SORT_NONE",
  "SORT_BY_INIT_PRIORITY", "'{'", "'}'", "SIZEOF_HEADERS", "OUTPUT_FORMAT",
  "FORCE_COMMON_ALLOCATION", "OUTPUT_ARCH", "INHIBIT_COMMON_ALLOCATION",
  "SEGMENT_START", "INCLUDE", "MEMORY", "REGION_ALIAS", "LD_FEATURE",
  "NOLOAD", "DSECT", "COPY", "INFO", "OVERLAY", "DEFINED", "TARGET_K",
  "SEARCH_DIR", "MAP", "ENTRY", "NEXT", "SIZEOF", "ALIGNOF", "ADDR",
  "LOADADDR", "MAX_K", "MIN_K", "STARTUP", "HLL", "SYSLIB", "FLOAT",
  "NOFLOAT", "NOCROSSREFS", "ORIGIN", "FILL", "LENGTH",
  "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT", "CONSTRUCTORS",
  "ALIGNMOD", "AT", "SUBALIGN", "PROVIDE", "PROVIDE_HIDDEN", "AS_NEEDED",
  "CHIP", "LIST", "SECT", "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD",
  "ORDER", "NAMEWORD", "ASSERT_K", "FORMAT", "PUBLIC", "DEFSYMEND", "BASE",
  "ALIAS", "TRUNCATE", "REL", "INPUT_SCRIPT", "INPUT_MRI_SCRIPT",
  "INPUT_DEFSYM", "CASE", "EXTERN", "START", "VERS_TAG", "VERS_IDENTIFIER",
  "GLOBAL", "LOCAL", "VERSIONK", "INPUT_VERSION_SCRIPT", "KEEP",
  "ONLY_IF_RO", "ONLY_IF_RW", "SPECIAL", "INPUT_SECTION_FLAGS",
  "EXCLUDE_FILE", "CONSTANT", "INPUT_DYNAMIC_LIST", "','", "';'", "')'",
  "'['", "']'", "'!'", "'~'", "$accept", "file", "filename", "defsym_expr",
  "@1", "mri_script_file", "@2", "mri_script_lines", "mri_script_command",
  "@3", "ordernamelist", "mri_load_name_list", "mri_abs_name_list",
  "casesymlist", "extern_name_list", "@4", "extern_name_list_body",
  "script_file", "@5", "ifile_list", "ifile_p1", "@6", "@7", "input_list",
  "@8", "@9", "@10", "sections", "sec_or_group_p1", "statement_anywhere",
  "@11", "wildcard_name", "wildcard_spec", "sect_flag_list", "sect_flags",
  "exclude_name_list", "file_NAME_list", "input_section_spec_no_keep",
  "input_section_spec", "@12", "statement", "@13", "@14", "statement_list",
  "statement_list_opt", "length", "fill_exp", "fill_opt", "assign_op",
  "end", "assignment", "opt_comma", "memory", "memory_spec_list_opt",
  "memory_spec_list", "memory_spec", "@15", "@16", "origin_spec",
  "length_spec", "attributes_opt", "attributes_list", "attributes_string",
  "startup", "high_level_library", "high_level_library_NAME_list",
  "low_level_library", "low_level_library_NAME_list",
  "floating_point_support", "nocrossref_list", "mustbe_exp", "@17", "exp",
  "memspec_at_opt", "opt_at", "opt_align", "opt_subalign",
  "sect_constraint", "section", "@18", "@19", "@20", "@21", "@22", "@23",
  "@24", "@25", "@26", "@27", "@28", "@29", "@30", "type", "atype",
  "opt_exp_with_type", "opt_exp_without_type", "opt_nocrossrefs",
  "memspec_opt", "phdr_opt", "overlay_section", "@31", "@32", "@33",
  "phdrs", "phdr_list", "phdr", "@34", "@35", "phdr_type",
  "phdr_qualifiers", "phdr_val", "dynamic_list_file", "@36",
  "dynamic_list_nodes", "dynamic_list_node", "dynamic_list_tag",
  "version_script_file", "@37", "version", "@38", "vers_nodes",
  "vers_node", "verdep", "vers_tag", "vers_defns", "@39", "@40",
  "opt_semicolon", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    61,   261,   262,   263,
     264,   265,   266,   267,   268,    63,    58,   269,   270,   124,
      94,    38,   271,   272,    60,    62,   273,   274,   275,   276,
      43,    45,    42,    47,    37,   277,   278,    40,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   123,   125,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,    44,    59,    41,    91,    93,    33,
     126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   151,   152,   152,   152,   152,   152,   153,   155,   154,
     157,   156,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     160,   159,   159,   159,   161,   161,   161,   162,   162,   163,
     163,   164,   164,   164,   166,   165,   167,   167,   167,   169,
     168,   170,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   172,   171,   171,   173,   171,   171,   171,   171,
     171,   171,   171,   174,   174,   174,   174,   174,   174,   175,
     174,   176,   174,   177,   174,   178,   179,   179,   179,   180,
     180,   181,   180,   182,   182,   182,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   184,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     189,   190,   189,   191,   191,   191,   191,   191,   191,   191,
     191,   192,   191,   193,   191,   194,   194,   195,   195,   196,
     196,   196,   196,   196,   197,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   200,   200,   201,   201,   201,
     201,   202,   202,   203,   204,   204,   205,   205,   207,   206,
     208,   206,   209,   210,   211,   211,   212,   212,   213,   213,
     214,   215,   215,   216,   216,   217,   218,   218,   219,   219,
     220,   220,   220,   222,   221,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   224,   224,   225,   225,   226,   226,   227,   227,
     228,   228,   228,   228,   230,   231,   232,   233,   234,   229,
     235,   236,   237,   238,   239,   229,   240,   241,   229,   242,
     229,   243,   243,   243,   243,   243,   244,   244,   244,   245,
     245,   245,   245,   246,   246,   247,   247,   248,   248,   249,
     249,   250,   251,   252,   253,   250,   254,   255,   255,   257,
     258,   256,   259,   260,   260,   260,   261,   261,   263,   262,
     264,   264,   265,   266,   268,   267,   270,   269,   271,   271,
     272,   272,   272,   273,   273,   274,   274,   274,   274,   274,
     275,   275,   275,   275,   276,   275,   277,   275,   275,   275,
     275,   275,   275,   275,   278,   278
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     1,     0,     4,
       0,     2,     3,     0,     2,     4,     1,     1,     2,     1,
       4,     4,     3,     2,     4,     3,     4,     4,     4,     4,
       4,     2,     2,     2,     4,     4,     2,     2,     2,     2,
       0,     5,     2,     0,     3,     2,     0,     1,     3,     1,
       3,     0,     1,     3,     0,     2,     1,     2,     3,     0,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     8,     4,     1,
       1,     4,     0,     5,     4,     0,     5,     4,     4,     3,
       3,     6,     4,     1,     3,     2,     1,     3,     2,     0,
       5,     0,     7,     0,     6,     4,     2,     2,     0,     4,
       2,     0,     7,     1,     1,     1,     1,     5,     4,     4,
       4,     7,     7,     7,     7,     8,     4,     1,     3,     4,
       2,     1,     3,     1,     1,     2,     3,     4,     4,     5,
       1,     0,     5,     2,     1,     1,     1,     4,     1,     4,
       4,     0,     8,     0,     5,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       6,     1,     0,     4,     1,     0,     3,     1,     0,     7,
       0,     5,     3,     3,     0,     3,     1,     2,     1,     2,
       4,     4,     3,     3,     1,     4,     3,     0,     1,     1,
       0,     2,     3,     0,     2,     2,     3,     4,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     4,     6,     4,     1,     6,     6,     6,
       4,     4,     3,     0,     4,     0,     4,     0,     4,     0,
       1,     1,     1,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,    18,     0,     0,     7,     0,
       5,     1,     1,     1,     1,     1,     3,     0,     2,     3,
       2,     6,    10,     2,     1,     0,     1,     2,     0,     0,
       3,     0,     0,     0,     0,    11,     4,     0,     2,     0,
       0,     6,     1,     0,     3,     5,     0,     3,     0,     2,
       1,     2,     4,     2,     0,     2,     0,     5,     1,     2,
       4,     5,     6,     1,     2,     0,     2,     4,     4,     8,
       1,     1,     3,     3,     0,     9,     0,     7,     1,     3,
       1,     3,     1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    59,    10,     8,   334,   328,     0,     2,    62,     3,
      13,     6,     0,     4,     0,     5,     0,     1,    60,    11,
       0,   345,     0,   335,   338,     0,   329,   330,     0,     0,
       0,     0,     0,    79,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,   209,     0,
       0,    82,     0,     0,     0,   111,     0,    72,    61,    64,
      70,     0,    63,    66,    67,    68,    69,    65,    71,     0,
      16,     0,     0,     0,     0,    17,     0,     0,     0,    19,
      46,     0,     0,     0,     0,     0,     0,    51,    54,     0,
       0,     0,   351,   362,   350,   358,   360,     0,     0,   345,
     339,   358,   360,     0,     0,   331,   213,   174,   173,   172,
     171,   170,   169,   168,   167,   213,   108,   317,     0,     0,
       0,     0,     7,    85,   185,     0,     0,     0,     0,     0,
       0,     0,     0,   207,   210,     0,     0,     0,     0,     0,
       0,    54,   176,   175,   110,     0,     0,    40,     0,   241,
     256,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    49,    31,
      47,    32,    18,    33,    23,     0,    36,     0,    37,    52,
      38,    39,     0,    42,    12,     9,     0,     0,     0,     0,
     346,     0,     0,   333,   177,     0,   178,     0,     0,    89,
      90,     0,     0,    62,   188,     0,     0,   182,   187,     0,
       0,     0,     0,     0,     0,     0,   202,   204,   182,   182,
     210,     0,    93,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,   219,   215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    45,     0,     0,
       0,    22,     0,     0,    56,    55,   356,     0,     0,   340,
     353,   363,   352,   359,   361,     0,   332,   214,   274,   105,
       0,   280,   286,   107,   106,   319,   316,   318,     0,    76,
      78,   336,   194,   190,   183,   181,     0,     0,    92,    73,
      74,    84,   109,   200,   201,     0,   205,     0,   210,   211,
      87,    99,    95,    98,     0,     0,    81,     0,    75,   213,
     213,     0,    88,     0,    27,    28,    43,    29,    30,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     239,   238,   236,   235,   234,   229,   228,   232,   233,   231,
     230,   227,   226,   224,   225,   221,   222,   223,    15,    26,
      24,    50,    48,    44,    20,    21,    35,    34,    53,    57,
       0,     0,   347,   348,     0,   343,   341,     0,   297,   289,
       0,   297,     0,     0,    86,     0,     0,   185,   186,     0,
     203,   206,   212,     0,   103,    94,    97,     0,    83,     0,
       0,     0,   337,    41,     0,   249,   255,     0,     0,   253,
       0,   240,   217,   244,   243,   245,   246,     0,     0,   260,
     261,   248,     0,   247,     0,    58,   364,   361,   354,   344,
     342,     0,     0,   297,     0,   265,   108,   304,     0,   305,
     287,   322,   323,     0,   198,     0,     0,   196,     0,     0,
      91,     0,     0,   101,   179,   180,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   365,     0,     0,     0,   291,
     292,   293,   294,   295,   298,     0,     0,     0,     0,   300,
       0,   267,     0,   303,   306,   265,     0,   326,     0,   320,
       0,   199,   195,   197,     0,   182,   191,   100,     0,     0,
     112,   250,   251,   252,   254,   257,   258,   259,   357,     0,
     364,   296,     0,   299,     0,     0,   269,   290,   269,   108,
       0,   323,     0,     0,    77,   213,     0,   104,     0,   349,
       0,   297,     0,     0,     0,   275,   281,     0,     0,   324,
       0,   321,   192,     0,   189,   102,   355,     0,     0,   264,
       0,     0,   273,     0,   288,   327,   323,   213,     0,   301,
     266,     0,   270,   271,   272,     0,   282,   325,   193,     0,
     268,   276,   311,   297,   157,     0,     0,   134,   115,   114,
     159,   160,   161,   162,   163,     0,     0,     0,     0,     0,
       0,   144,   146,   151,     0,     0,     0,   145,     0,   116,
       0,     0,   140,   148,   156,   158,     0,     0,     0,   312,
     283,   302,     0,     0,     0,     0,   153,   213,     0,   141,
       0,     0,   113,     0,   133,   182,     0,   135,     0,     0,
     155,   277,   213,   143,     0,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   164,     0,
       0,   127,     0,   131,     0,     0,   136,     0,   182,   182,
       0,   308,     0,   157,     0,   263,     0,     0,   147,     0,
     118,     0,     0,   119,   120,   126,     0,   150,     0,   113,
       0,     0,   129,     0,   130,   132,   138,   137,   182,   263,
     149,     0,   307,     0,   309,     0,     0,     0,     0,     0,
     154,     0,   142,   128,   117,   139,   309,   313,     0,   166,
       0,     0,     0,     0,     0,     0,   166,   309,   262,   213,
       0,   284,   122,   121,     0,   123,   124,     0,   278,   166,
     165,   310,   182,   125,   152,   182,   314,   285,   279,   182,
     315
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,   123,    11,    12,     9,    10,    19,    90,   245,
     182,   181,   179,   190,   191,   192,   305,     7,     8,    18,
      58,   136,   213,   235,   443,   549,   502,    59,   207,   323,
     140,   649,   650,   702,   651,   704,   675,   652,   653,   700,
     654,   668,   696,   655,   656,   657,   697,   771,   115,   144,
      61,   707,    62,   216,   217,   218,   332,   437,   545,   594,
     436,   496,   497,    63,    64,   228,    65,   229,    66,   231,
     698,   205,   250,   744,   531,   566,   585,   615,   324,   428,
     602,   624,   711,   785,   430,   603,   622,   685,   782,   431,
     536,   486,   525,   484,   485,   489,   535,   715,   759,   625,
     684,   767,   789,    67,   208,   327,   432,   573,   492,   539,
     571,    15,    16,    26,    27,   103,    13,    14,    68,    69,
      23,    24,   427,    97,    98,   518,   421,   516
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -727
static const yytype_int16 yypact[] =
{
     182,  -727,  -727,  -727,  -727,  -727,    49,  -727,  -727,  -727,
    -727,  -727,    38,  -727,   -17,  -727,    18,  -727,   929,  1764,
      77,   104,    28,   -17,  -727,   110,    18,  -727,   602,    59,
     130,    79,   122,  -727,   187,  -727,   134,   175,   203,   213,
     216,   228,   229,   233,   245,   246,   267,  -727,  -727,   268,
     278,  -727,   279,   282,   300,  -727,   301,  -727,  -727,  -727,
    -727,   -12,  -727,  -727,  -727,  -727,  -727,  -727,  -727,    13,
    -727,   328,   134,   338,   862,  -727,   341,   343,   349,  -727,
    -727,   361,   364,   365,   862,   370,   373,   377,  -727,   378,
     273,   862,  -727,   383,  -727,   376,   379,   337,   254,   104,
    -727,  -727,  -727,   342,   258,  -727,  -727,  -727,  -727,  -727,
    -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,   398,   400,
     403,   404,  -727,  -727,    31,   407,   411,   412,   134,   134,
     413,   134,     4,  -727,   414,    47,   384,   134,   416,   419,
     387,  -727,  -727,  -727,  -727,   367,    10,  -727,    30,  -727,
    -727,   862,   862,   862,   397,   401,   402,   405,   406,  -727,
     417,   425,   426,   427,   428,   429,   430,   432,   435,   445,
     446,   447,   449,   450,   862,   862,  1557,   507,  -727,   292,
    -727,   297,    20,  -727,  -727,   601,  1945,   307,  -727,  -727,
     309,  -727,   433,  -727,  -727,  1945,   386,   110,   110,   344,
     116,   434,   347,   116,  -727,   862,  -727,   235,    57,  -727,
    -727,   -20,   348,  -727,  -727,   134,   436,    -2,  -727,   353,
     354,   355,   356,   359,   362,   366,  -727,  -727,   113,   133,
      24,   368,  -727,  -727,   451,    17,    47,   369,   493,   510,
     862,   372,   -17,   862,   862,  -727,   862,   862,  -727,  -727,
    1167,   862,   862,   862,   862,   862,   515,   516,   862,   518,
     519,   522,   524,   862,   862,   525,   526,   862,   862,   527,
    -727,  -727,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,   862,   862,   862,   862,   862,   862,
     862,   862,   862,   862,  1945,   528,   529,  -727,   531,   862,
     862,  1945,   188,   532,  -727,    27,  -727,   394,   395,  -727,
    -727,   537,  -727,  -727,  -727,   -43,  -727,  1945,   602,  -727,
     134,  -727,  -727,  -727,  -727,  -727,  -727,  -727,   538,  -727,
    -727,  1018,   506,  -727,  -727,  -727,    31,   557,  -727,  -727,
    -727,  -727,  -727,  -727,  -727,   134,  -727,   134,   414,  -727,
    -727,  -727,  -727,  -727,   534,    69,  -727,    21,  -727,  -727,
    -727,  1577,  -727,   -21,  1945,  1945,  1787,  1945,  1945,  -727,
    1147,  1187,  1597,  1617,  1207,   418,   422,  1227,   431,   437,
     438,   439,  1637,  1685,   440,   448,  1247,  1705,   452,  1788,
    1813,  1665,  1127,   676,   849,   523,   523,   613,   613,   613,
     613,   399,   399,   195,   195,  -727,  -727,  -727,  1945,  1945,
    1945,  -727,  -727,  -727,  1945,  1945,  -727,  -727,  -727,  -727,
     559,   110,   136,   116,   517,  -727,  -727,   101,   688,  -727,
     775,   688,   862,   420,  -727,     3,   549,    31,  -727,   453,
    -727,  -727,  -727,    47,  -727,  -727,  -727,   539,  -727,   455,
     457,   570,  -727,  -727,   862,  -727,  -727,   862,   862,  -727,
     862,  -727,  -727,  -727,  -727,  -727,  -727,   862,   862,  -727,
    -727,  -727,   575,  -727,   862,  -727,   461,   564,  -727,  -727,
    -727,   375,   544,  1902,   579,   494,  -727,  -727,  1925,   505,
    -727,  1945,    23,   614,  -727,   615,     2,  -727,   533,   584,
    -727,    39,    47,  -727,  -727,  -727,   475,  1277,  1297,  1317,
    1337,  1357,  1377,   476,  1945,   116,   565,   110,   110,  -727,
    -727,  -727,  -727,  -727,  -727,   481,   862,   218,   612,  -727,
     592,   595,   257,  -727,  -727,   494,   572,   597,   598,  -727,
     490,  -727,  -727,  -727,   631,   504,  -727,  -727,    51,    47,
    -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,   513,
     461,  -727,  1407,  -727,   862,   618,   547,  -727,   547,  -727,
     862,    23,   862,   514,  -727,  -727,   567,  -727,   114,   116,
     604,   261,  1427,   862,   623,  -727,  -727,   293,  1447,  -727,
    1467,  -727,  -727,   658,  -727,  -727,  -727,   628,   651,  -727,
    1487,   862,   183,   610,  -727,  -727,    23,  -727,   862,  -727,
    -727,  1507,  -727,  -727,  -727,   611,  -727,  -727,  -727,  1537,
    -727,  -727,  -727,   633,   230,    71,   655,   467,  -727,  -727,
    -727,  -727,  -727,  -727,  -727,   635,   636,   637,   638,   134,
     640,  -727,  -727,  -727,   641,   642,   643,  -727,    80,  -727,
     652,    35,  -727,  -727,  -727,   230,   629,   653,   -12,  -727,
    -727,  -727,   248,   295,    90,    90,  -727,  -727,   656,  -727,
     691,    90,  -727,   675,  -727,   -63,    80,   677,    80,   678,
    -727,  -727,  -727,  -727,   662,   696,   679,   685,   577,   687,
     583,   693,   694,   586,   587,   588,   230,   589,  -727,   862,
      15,  -727,    12,  -727,    14,    89,  -727,    80,   167,   -38,
      80,   696,   590,   230,   709,   644,    90,    90,  -727,    90,
    -727,    90,    90,  -727,  -727,  -727,   701,  -727,  1725,   596,
     603,   734,  -727,    90,  -727,  -727,  -727,  -727,   197,   644,
    -727,   695,  -727,   719,  -727,   606,   609,    50,   616,   619,
    -727,   743,  -727,  -727,  -727,  -727,  -727,  -727,   752,    42,
     620,   621,    90,   630,   634,   639,    42,  -727,  -727,  -727,
     753,  -727,  -727,  -727,   646,  -727,  -727,   -12,  -727,    42,
    -727,  -727,   504,  -727,  -727,   504,  -727,  -727,  -727,   504,
    -727
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -727,  -727,   -69,  -727,  -727,  -727,  -727,   530,  -727,  -727,
    -727,  -727,  -727,  -727,   617,  -727,  -727,  -727,  -727,   546,
    -727,  -727,  -727,  -221,  -727,  -727,  -727,  -727,  -454,   -13,
    -727,   247,  -288,  -727,  -727,    41,  -612,    61,  -727,  -727,
     109,  -727,  -727,  -727,  -617,  -727,     8,  -726,  -727,  -638,
    -401,  -216,  -727,   345,  -727,   454,  -727,  -727,  -727,  -727,
    -727,  -727,   288,  -727,  -727,  -727,  -727,  -727,  -727,  -207,
    -104,  -727,   -74,    48,   251,  -727,   220,  -727,  -727,  -727,
    -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,
    -727,  -727,  -727,  -474,   358,  -727,  -727,    82,  -668,  -727,
    -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,  -727,  -526,
    -727,  -727,  -727,  -727,   768,  -727,  -727,  -727,  -727,  -727,
     553,   -19,  -727,   697,   -11,  -727,  -727,   237
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -337
static const yytype_int16 yytable[] =
{
     176,   336,   204,   147,   100,    60,   494,   494,   122,   528,
     186,   206,   345,   347,   104,   357,   243,   195,   672,   729,
     683,   352,   353,   349,   297,   352,   353,   537,   230,   628,
     628,   419,   532,   731,  -184,   214,   246,    21,   452,   677,
     778,    21,    20,   352,   353,   589,   629,   629,   769,    17,
     628,   232,   233,   786,   672,   352,   353,  -184,   770,   222,
     223,   325,   225,   227,   708,   628,   709,   629,   237,   673,
     636,   637,   638,   445,   446,   659,    25,   248,   249,   726,
     617,   335,   629,    91,   672,   706,    99,   425,   766,   673,
     636,   637,   638,   672,   672,   628,   741,   215,   738,   779,
     270,   271,   426,   294,   628,   628,   335,   598,    92,    22,
     737,   301,   629,    22,    92,   587,   326,   116,   352,   353,
     310,   629,   629,   354,   328,   538,   329,   354,   118,   119,
     660,   317,   142,   143,   673,   636,   637,   638,   122,   784,
     310,   442,   335,   686,   687,   354,   333,   145,   542,   626,
     226,   495,   495,   234,   244,   645,   646,   354,   732,   120,
     733,   355,   648,   356,   298,   355,   361,   448,   348,   364,
     365,   420,   367,   368,   247,   447,   646,   370,   371,   372,
     373,   374,   678,   355,   377,   547,   307,   308,   117,   382,
     383,   416,   417,   386,   387,   355,   762,   577,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     354,   646,   501,   658,   121,   414,   415,   288,   289,   290,
     689,   479,    93,   124,   627,    94,    95,    96,    93,   318,
     125,    94,   101,   102,   311,   628,   480,   312,   313,   314,
     126,   429,   672,   127,   658,   449,   450,   335,   355,   344,
     595,   318,   629,   628,   311,   128,   129,   312,   313,   477,
     130,   630,   631,   632,   633,   634,   440,   335,   441,   346,
     629,   548,   131,   132,   635,   636,   637,   638,   519,   520,
     521,   522,   523,   567,   319,   658,   639,   318,   527,   672,
     597,   320,   686,   687,   133,   134,     1,     2,     3,   321,
     628,   335,   658,   736,    43,   135,   137,     4,    60,   138,
     612,   613,   614,   320,   640,     5,   641,   629,   578,   576,
     642,   321,   146,   322,    53,    54,    43,   139,   141,    53,
      54,   335,   148,   755,   100,   177,   643,   178,   688,   691,
     692,    55,   604,   180,   483,   322,   488,   483,   491,   320,
     674,    53,    54,   679,   524,   183,   644,   321,   184,   185,
     645,   646,    43,    55,   187,   647,   188,   648,   149,   150,
     507,   189,   193,   508,   509,   194,   510,   196,   674,   689,
     674,   322,   197,   511,   512,   198,   199,    53,    54,   200,
     514,   202,   209,   203,   210,   151,   152,   211,   212,    55,
     476,   219,   153,   154,   155,   220,   221,   224,   230,   735,
     238,   236,   674,   239,   240,   242,   156,   157,   158,   286,
     287,   288,   289,   290,   251,   159,   295,   304,   252,   253,
     160,   296,   254,   255,   306,   519,   520,   521,   522,   523,
     161,   302,   562,   303,   256,   162,   163,   164,   165,   166,
     167,   168,   257,   258,   259,   260,   261,   262,   169,   263,
     170,   592,   264,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   265,   266,   267,   171,   268,   269,   351,   309,
     582,   172,   316,   315,   330,   334,   588,   337,   590,   359,
     338,   339,   340,   618,  -113,   341,   559,   560,   342,   600,
     149,   150,   343,   292,   350,   358,   360,   173,   362,   375,
     376,   524,   378,   379,   174,   175,   380,   611,   381,   384,
     385,   388,   411,   412,   619,   413,   418,   151,   152,   422,
     423,   424,   433,   435,   153,   154,   155,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   156,   157,
     158,   439,   460,   475,   493,   498,   787,   159,   461,   788,
     666,   444,   160,   790,   506,   478,   503,   463,   712,   513,
     517,   526,   161,   464,   465,   466,   469,   162,   163,   164,
     165,   166,   167,   168,   470,   529,   530,   534,   473,   500,
     169,   504,   170,   505,   149,   150,   515,   299,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   171,   540,   541,
     546,   550,   557,   172,   558,   728,   544,   561,   563,   564,
     569,   151,   152,   565,   570,   572,   574,   575,   153,   154,
     155,   284,   285,   286,   287,   288,   289,   290,   335,   173,
     584,   293,   156,   157,   158,   583,   174,   175,   579,   591,
     601,   159,   593,   596,   607,   608,   160,   609,   616,   621,
     527,   661,   662,   663,   664,   665,   161,   667,   669,   670,
     671,   162,   163,   164,   165,   166,   167,   168,   681,   676,
     682,   149,   150,   699,   169,   701,   170,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   171,   705,   742,  -113,   710,   716,   172,   151,   152,
     713,   714,   717,   718,   719,   481,   154,   155,   482,   720,
     721,   722,   723,   724,   725,   727,   740,   750,   753,   156,
     157,   158,  -134,   173,   758,   300,   743,   765,   159,   752,
     174,   175,   760,   160,   757,   761,   768,   781,   241,   331,
     747,   730,   763,   161,   680,   764,   772,   773,   162,   163,
     164,   165,   166,   167,   168,   366,   775,   780,   149,   150,
     776,   169,   499,   170,   543,   777,   568,   756,   586,   490,
     438,   487,   783,   739,   105,   363,   201,   580,   171,     0,
       0,     0,     0,     0,   172,   151,   152,     0,     0,     0,
       0,     0,   153,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   157,   158,     0,
     173,     0,     0,     0,     0,   159,     0,   174,   175,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,     0,     0,     0,     0,   162,   163,   164,   165,   166,
     167,   168,     0,     0,     0,   149,   150,     0,   169,     0,
     170,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,     0,   171,     0,     0,     0,     0,
       0,   172,   151,   152,     0,     0,     0,     0,     0,   153,
     154,   155,     0,     0,     0,     0,     0,     0,     0,   690,
     693,   694,   695,   156,   157,   158,     0,   173,   703,     0,
       0,     0,   159,     0,   174,   175,     0,   160,     0,     0,
       0,     0,     0,    28,     0,     0,     0,   161,     0,     0,
       0,     0,   162,   163,   164,   165,   166,   167,   168,     0,
       0,   734,   690,     0,     0,   169,     0,   170,     0,     0,
       0,     0,     0,   745,   746,     0,   703,     0,   748,   749,
       0,     0,   171,     0,     0,    29,    30,    31,   172,     0,
     754,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,   734,    36,    37,    38,    39,     0,
       0,     0,     0,     0,   173,    40,    41,    42,    43,   774,
       0,   174,   175,     0,     0,     0,    44,    45,    46,    47,
      48,    49,    28,     0,     0,     0,    50,    51,    52,     0,
       0,     0,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,   434,     0,     0,    56,     0,     0,
       0,     0,     0,  -336,    29,    30,    31,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    32,
      33,    34,    35,     0,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,    40,    41,    42,    43,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     0,    50,    51,    52,     0,     0,
       0,     0,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,    57,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   454,   272,   455,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   369,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   456,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   459,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   462,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   471,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   272,   551,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   552,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   553,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   554,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   555,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   556,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   272,   581,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   599,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   605,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   606,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   610,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   272,   620,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   623,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,   291,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,   451,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,   457,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
       0,   458,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,   272,   474,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   453,     0,    71,     0,     0,     0,   468,
      72,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,     0,   472,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,   751,
       0,    74,    75,    76,    77,    78,   -43,    79,    80,    81,
       0,    82,    83,     0,    84,    85,    86,     0,    73,     0,
       0,    87,    88,    89,    74,    75,    76,    77,    78,     0,
      79,    80,    81,     0,    82,    83,     0,    84,    85,    86,
       0,     0,     0,     0,    87,    88,    89,   272,     0,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,     0,     0,   527,
     272,   533,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290
};

static const yytype_int16 yycheck[] =
{
      74,   217,   106,    72,    23,    18,     4,     4,     4,   483,
      84,   115,   228,   229,    25,   236,     6,    91,     4,     4,
     658,     4,     5,   230,     4,     4,     5,     4,     4,    15,
      15,     4,   486,    21,    36,     4,     6,    58,    59,     4,
     766,    58,     4,     4,     5,   571,    32,    32,     6,     0,
      15,     4,     5,   779,     4,     4,     5,    59,    16,   128,
     129,     4,   131,   132,   676,    15,   678,    32,   137,    54,
      55,    56,    57,     4,     5,     4,    58,   151,   152,   696,
     606,   144,    32,     6,     4,   148,    58,   130,   756,    54,
      55,    56,    57,     4,     4,    15,   713,    66,   710,   767,
     174,   175,   145,   177,    15,    15,   144,   581,     4,   130,
     148,   185,    32,   130,     4,   569,    59,    58,     4,     5,
       4,    32,    32,   106,   144,   102,   146,   106,    49,    50,
      59,   205,   144,   145,    54,    55,    56,    57,     4,   777,
       4,   348,   144,    54,    55,   106,   215,   134,   146,   623,
     146,   149,   149,   106,   144,   140,   141,   106,   146,    37,
     146,   144,   147,   146,   144,   144,   240,   146,   144,   243,
     244,   144,   246,   247,   144,   106,   141,   251,   252,   253,
     254,   255,   147,   144,   258,   146,   197,   198,    58,   263,
     264,     3,     4,   267,   268,   144,   146,   146,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     106,   141,   443,   624,    37,   299,   300,    32,    33,    34,
     141,   130,   128,    58,     4,   131,   132,   133,   128,     4,
      37,   131,   132,   133,   128,    15,   145,   131,   132,   133,
      37,   320,     4,    37,   655,   359,   360,   144,   144,   146,
     146,     4,    32,    15,   128,    37,    37,   131,   132,   133,
      37,    41,    42,    43,    44,    45,   345,   144,   347,   146,
      32,   502,    37,    37,    54,    55,    56,    57,    70,    71,
      72,    73,    74,    36,    59,   696,    66,     4,    37,     4,
      39,    66,    54,    55,    37,    37,   124,   125,   126,    74,
      15,   144,   713,   146,    79,    37,    37,   135,   331,    37,
     137,   138,   139,    66,    94,   143,    96,    32,   549,   545,
     100,    74,     4,    98,   104,   105,    79,    37,    37,   104,
     105,   144,     4,   146,   363,     4,   116,     4,   100,    54,
      55,   116,    59,     4,   428,    98,   430,   431,   432,    66,
     648,   104,   105,   651,   146,     4,   136,    74,     4,     4,
     140,   141,    79,   116,     4,   145,     3,   147,     3,     4,
     454,     4,     4,   457,   458,   112,   460,     4,   676,   141,
     678,    98,    16,   467,   468,    16,    59,   104,   105,   145,
     474,    59,     4,   145,     4,    30,    31,     4,     4,   116,
     421,     4,    37,    38,    39,     4,     4,     4,     4,   707,
       4,    37,   710,     4,    37,    58,    51,    52,    53,    30,
      31,    32,    33,    34,    37,    60,   144,     4,    37,    37,
      65,   144,    37,    37,    58,    70,    71,    72,    73,    74,
      75,   144,   526,   144,    37,    80,    81,    82,    83,    84,
      85,    86,    37,    37,    37,    37,    37,    37,    93,    37,
      95,   575,    37,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    37,    37,    37,   110,    37,    37,    37,   145,
     564,   116,   145,    59,   146,    59,   570,   144,   572,     6,
     146,   146,   146,   607,    37,   146,   517,   518,   146,   583,
       3,     4,   146,     6,   146,   146,     6,   142,   146,     4,
       4,   146,     4,     4,   149,   150,     4,   601,     4,     4,
       4,     4,     4,     4,   608,     4,     4,    30,    31,   145,
     145,     4,     4,    37,    37,    38,    39,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    51,    52,
      53,     4,   144,     4,   144,    16,   782,    60,   146,   785,
     639,    37,    65,   789,     4,    58,    37,   146,   682,     4,
      16,    37,    75,   146,   146,   146,   146,    80,    81,    82,
      83,    84,    85,    86,   146,    16,   102,    92,   146,   146,
      93,   146,    95,   146,     3,     4,   145,     6,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   110,     4,     4,
      36,   146,   146,   116,    59,   699,    93,   146,    16,    37,
      58,    30,    31,    38,    37,    37,   146,     6,    37,    38,
      39,    28,    29,    30,    31,    32,    33,    34,   144,   142,
     103,   144,    51,    52,    53,    37,   149,   150,   145,   145,
      37,    60,    95,    59,     6,    37,    65,    16,    58,    58,
      37,    16,    37,    37,    37,    37,    75,    37,    37,    37,
      37,    80,    81,    82,    83,    84,    85,    86,    59,    37,
      37,     3,     4,    37,    93,     4,    95,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   110,    37,     4,    37,    37,    37,   116,    30,    31,
      58,    25,    37,   146,    37,    37,    38,    39,    40,   146,
      37,    37,   146,   146,   146,   146,   146,    36,     4,    51,
      52,    53,   146,   142,    25,   144,   102,     4,    60,   146,
     149,   150,   146,    65,    59,   146,     4,     4,   141,   213,
     719,   700,   146,    75,   655,   146,   146,   146,    80,    81,
      82,    83,    84,    85,    86,   245,   146,   769,     3,     4,
     146,    93,   437,    95,   496,   146,   535,   739,   568,   431,
     336,    16,   146,   711,    26,   242,    99,   560,   110,    -1,
      -1,    -1,    -1,    -1,   116,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
     142,    -1,    -1,    -1,    -1,    60,    -1,   149,   150,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    -1,     3,     4,    -1,    93,    -1,
      95,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,   110,    -1,    -1,    -1,    -1,
      -1,   116,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   662,
     663,   664,   665,    51,    52,    53,    -1,   142,   671,    -1,
      -1,    -1,    60,    -1,   149,   150,    -1,    65,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      -1,   704,   705,    -1,    -1,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,   716,   717,    -1,   719,    -1,   721,   722,
      -1,    -1,   110,    -1,    -1,    46,    47,    48,   116,    -1,
     733,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,   747,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,   142,    76,    77,    78,    79,   762,
      -1,   149,   150,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,     4,    -1,    -1,    -1,    97,    98,    99,    -1,
      -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,   128,    -1,    -1,
      -1,    -1,    -1,   134,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    -1,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    97,    98,    99,    -1,    -1,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   145,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    15,   146,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   146,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   144,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   144,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,   144,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    36,    -1,    38,    -1,    -1,    -1,   144,
      66,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,   144,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,   144,
      -1,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,   118,    -1,   120,   121,   122,    -1,   101,    -1,
      -1,   127,   128,   129,   107,   108,   109,   110,   111,    -1,
     113,   114,   115,    -1,   117,   118,    -1,   120,   121,   122,
      -1,    -1,    -1,    -1,   127,   128,   129,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   124,   125,   126,   135,   143,   152,   168,   169,   156,
     157,   154,   155,   267,   268,   262,   263,     0,   170,   158,
       4,    58,   130,   271,   272,    58,   264,   265,     4,    46,
      47,    48,    61,    62,    63,    64,    66,    67,    68,    69,
      76,    77,    78,    79,    87,    88,    89,    90,    91,    92,
      97,    98,    99,   104,   105,   116,   128,   145,   171,   178,
     180,   201,   203,   214,   215,   217,   219,   254,   269,   270,
       4,    38,    66,   101,   107,   108,   109,   110,   111,   113,
     114,   115,   117,   118,   120,   121,   122,   127,   128,   129,
     159,     6,     4,   128,   131,   132,   133,   274,   275,    58,
     272,   132,   133,   266,   275,   265,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   199,    58,    58,    49,    50,
      37,    37,     4,   153,    58,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,   172,    37,    37,    37,
     181,    37,   144,   145,   200,   134,     4,   153,     4,     3,
       4,    30,    31,    37,    38,    39,    51,    52,    53,    60,
      65,    75,    80,    81,    82,    83,    84,    85,    86,    93,
      95,   110,   116,   142,   149,   150,   223,     4,     4,   163,
       4,   162,   161,     4,     4,     4,   223,     4,     3,     4,
     164,   165,   166,     4,   112,   223,     4,    16,    16,    59,
     145,   274,    59,   145,   221,   222,   221,   179,   255,     4,
       4,     4,     4,   173,     4,    66,   204,   205,   206,     4,
       4,     4,   153,   153,     4,   153,   146,   153,   216,   218,
       4,   220,     4,     5,   106,   174,    37,   153,     4,     4,
      37,   165,    58,     6,   144,   160,     6,   144,   223,   223,
     223,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
     223,   223,    15,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   144,     6,   144,   223,   144,   144,     4,   144,     6,
     144,   223,   144,   144,     4,   167,    58,   275,   275,   145,
       4,   128,   131,   132,   133,    59,   145,   223,     4,    59,
      66,    74,    98,   180,   229,     4,    59,   256,   144,   146,
     146,   170,   207,   153,    59,   144,   202,   144,   146,   146,
     146,   146,   146,   146,   146,   202,   146,   202,   144,   220,
     146,    37,     4,     5,   106,   144,   146,   174,   146,     6,
       6,   223,   146,   271,   223,   223,   158,   223,   223,   146,
     223,   223,   223,   223,   223,     4,     4,   223,     4,     4,
       4,     4,   223,   223,     4,     4,   223,   223,     4,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,     4,     4,     4,   223,   223,     3,     4,     4,     4,
     144,   277,   145,   145,     4,   130,   145,   273,   230,   153,
     235,   240,   257,     4,    36,    37,   211,   208,   206,     4,
     153,   153,   220,   175,    37,     4,     5,   106,   146,   221,
     221,   144,    59,    36,   144,   146,   146,   144,   144,   146,
     144,   146,   146,   146,   146,   146,   146,   144,   144,   146,
     146,   146,   144,   146,    16,     4,   275,   133,    58,   130,
     145,    37,    40,   223,   244,   245,   242,    16,   223,   246,
     245,   223,   259,   144,     4,   149,   212,   213,    16,   204,
     146,   174,   177,    37,   146,   146,     4,   223,   223,   223,
     223,   223,   223,     4,   223,   145,   278,    16,   276,    70,
      71,    72,    73,    74,   146,   243,    37,    37,   244,    16,
     102,   225,   179,    16,    92,   247,   241,     4,   102,   260,
       4,     4,   146,   213,    93,   209,    36,   146,   174,   176,
     146,   146,   146,   146,   146,   146,   146,   146,    59,   275,
     275,   146,   223,    16,    37,    38,   226,    36,   225,    58,
      37,   261,    37,   258,   146,     6,   202,   146,   174,   145,
     278,   146,   223,    37,   103,   227,   227,   179,   223,   260,
     223,   145,   221,    95,   210,   146,    59,    39,   244,   146,
     223,    37,   231,   236,    59,   146,   146,     6,    37,    16,
     146,   223,   137,   138,   139,   228,    58,   260,   221,   223,
     146,    58,   237,   146,   232,   250,   244,     4,    15,    32,
      41,    42,    43,    44,    45,    54,    55,    56,    57,    66,
      94,    96,   100,   116,   136,   140,   141,   145,   147,   182,
     183,   185,   188,   189,   191,   194,   195,   196,   201,     4,
      59,    16,    37,    37,    37,    37,   153,    37,   192,    37,
      37,    37,     4,    54,   183,   187,    37,     4,   147,   183,
     191,    59,    37,   200,   251,   238,    54,    55,   100,   141,
     182,    54,    55,   182,   182,   182,   193,   197,   221,    37,
     190,     4,   184,   182,   186,    37,   148,   202,   187,   187,
      37,   233,   221,    58,    25,   248,    37,    37,   146,    37,
     146,    37,    37,   146,   146,   146,   195,   146,   223,     4,
     188,    21,   146,   146,   182,   183,   146,   148,   187,   248,
     146,   195,     4,   102,   224,   182,   182,   186,   182,   182,
      36,   144,   146,     4,   182,   146,   224,    59,    25,   249,
     146,   146,   146,   146,   146,     4,   249,   252,     4,     6,
      16,   198,   146,   146,   182,   146,   146,   146,   198,   249,
     197,     4,   239,   146,   200,   234,   198,   202,   202,   253,
     202
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 180 "ldgram.y"
    { ldlex_defsym(); }
    break;

  case 9:
#line 182 "ldgram.y"
    {
		  ldlex_popstate();
		  lang_add_assignment (exp_defsym ((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)));
		}
    break;

  case 10:
#line 190 "ldgram.y"
    {
		  ldlex_mri_script ();
		  PUSH_ERROR (_("MRI style script"));
		}
    break;

  case 11:
#line 195 "ldgram.y"
    {
		  ldlex_popstate ();
		  mri_draw_tree ();
		  POP_ERROR ();
		}
    break;

  case 16:
#line 210 "ldgram.y"
    {
			einfo(_("%P%F: unrecognised keyword in MRI style script '%s'\n"),(yyvsp[(1) - (1)].name));
			}
    break;

  case 17:
#line 213 "ldgram.y"
    {
			config.map_filename = "-";
			}
    break;

  case 20:
#line 219 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 21:
#line 221 "ldgram.y"
    { mri_public((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree)); }
    break;

  case 22:
#line 223 "ldgram.y"
    { mri_public((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree)); }
    break;

  case 23:
#line 225 "ldgram.y"
    { mri_format((yyvsp[(2) - (2)].name)); }
    break;

  case 24:
#line 227 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 25:
#line 229 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].etree));}
    break;

  case 26:
#line 231 "ldgram.y"
    { mri_output_section((yyvsp[(2) - (4)].name), (yyvsp[(4) - (4)].etree));}
    break;

  case 27:
#line 233 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 28:
#line 235 "ldgram.y"
    { mri_align((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 29:
#line 237 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 30:
#line 239 "ldgram.y"
    { mri_alignmod((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].etree)); }
    break;

  case 33:
#line 243 "ldgram.y"
    { mri_name((yyvsp[(2) - (2)].name)); }
    break;

  case 34:
#line 245 "ldgram.y"
    { mri_alias((yyvsp[(2) - (4)].name),(yyvsp[(4) - (4)].name),0);}
    break;

  case 35:
#line 247 "ldgram.y"
    { mri_alias ((yyvsp[(2) - (4)].name), 0, (int) (yyvsp[(4) - (4)].bigint).integer); }
    break;

  case 36:
#line 249 "ldgram.y"
    { mri_base((yyvsp[(2) - (2)].etree)); }
    break;

  case 37:
#line 251 "ldgram.y"
    { mri_truncate ((unsigned int) (yyvsp[(2) - (2)].bigint).integer); }
    break;

  case 40:
#line 255 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 41:
#line 257 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 42:
#line 259 "ldgram.y"
    { lang_add_entry ((yyvsp[(2) - (2)].name), FALSE); }
    break;

  case 44:
#line 264 "ldgram.y"
    { mri_order((yyvsp[(3) - (3)].name)); }
    break;

  case 45:
#line 265 "ldgram.y"
    { mri_order((yyvsp[(2) - (2)].name)); }
    break;

  case 47:
#line 271 "ldgram.y"
    { mri_load((yyvsp[(1) - (1)].name)); }
    break;

  case 48:
#line 272 "ldgram.y"
    { mri_load((yyvsp[(3) - (3)].name)); }
    break;

  case 49:
#line 277 "ldgram.y"
    { mri_only_load((yyvsp[(1) - (1)].name)); }
    break;

  case 50:
#line 279 "ldgram.y"
    { mri_only_load((yyvsp[(3) - (3)].name)); }
    break;

  case 51:
#line 283 "ldgram.y"
    { (yyval.name) = NULL; }
    break;

  case 54:
#line 290 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 55:
#line 292 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 56:
#line 296 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(1) - (1)].name), FALSE); }
    break;

  case 57:
#line 298 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(2) - (2)].name), FALSE); }
    break;

  case 58:
#line 300 "ldgram.y"
    { ldlang_add_undef ((yyvsp[(3) - (3)].name), FALSE); }
    break;

  case 59:
#line 304 "ldgram.y"
    { ldlex_both(); }
    break;

  case 60:
#line 306 "ldgram.y"
    { ldlex_popstate(); }
    break;

  case 73:
#line 327 "ldgram.y"
    { lang_add_target((yyvsp[(3) - (4)].name)); }
    break;

  case 74:
#line 329 "ldgram.y"
    { ldfile_add_library_path ((yyvsp[(3) - (4)].name), FALSE); }
    break;

  case 75:
#line 331 "ldgram.y"
    { lang_add_output((yyvsp[(3) - (4)].name), 1); }
    break;

  case 76:
#line 333 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (4)].name), (char *) NULL,
					    (char *) NULL, 1); }
    break;

  case 77:
#line 336 "ldgram.y"
    { lang_add_output_format ((yyvsp[(3) - (8)].name), (yyvsp[(5) - (8)].name), (yyvsp[(7) - (8)].name), 1); }
    break;

  case 78:
#line 338 "ldgram.y"
    { ldfile_set_output_arch ((yyvsp[(3) - (4)].name), bfd_arch_unknown); }
    break;

  case 79:
#line 340 "ldgram.y"
    { command_line.force_common_definition = TRUE ; }
    break;

  case 80:
#line 342 "ldgram.y"
    { command_line.inhibit_common_definition = TRUE ; }
    break;

  case 82:
#line 345 "ldgram.y"
    { lang_enter_group (); }
    break;

  case 83:
#line 347 "ldgram.y"
    { lang_leave_group (); }
    break;

  case 84:
#line 349 "ldgram.y"
    { lang_add_map((yyvsp[(3) - (4)].name)); }
    break;

  case 85:
#line 351 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 86:
#line 353 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 87:
#line 355 "ldgram.y"
    {
		  lang_add_nocrossref ((yyvsp[(3) - (4)].nocrossref));
		}
    break;

  case 89:
#line 360 "ldgram.y"
    { lang_add_insert ((yyvsp[(3) - (3)].name), 0); }
    break;

  case 90:
#line 362 "ldgram.y"
    { lang_add_insert ((yyvsp[(3) - (3)].name), 1); }
    break;

  case 91:
#line 364 "ldgram.y"
    { lang_memory_region_alias ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].name)); }
    break;

  case 92:
#line 366 "ldgram.y"
    { lang_ld_feature ((yyvsp[(3) - (4)].name)); }
    break;

  case 93:
#line 371 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 94:
#line 374 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 95:
#line 377 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
    break;

  case 96:
#line 380 "ldgram.y"
    { lang_add_input_file((yyvsp[(1) - (1)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 97:
#line 383 "ldgram.y"
    { lang_add_input_file((yyvsp[(3) - (3)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 98:
#line 386 "ldgram.y"
    { lang_add_input_file((yyvsp[(2) - (2)].name),lang_input_file_is_l_enum,
				 (char *)NULL); }
    break;

  case 99:
#line 389 "ldgram.y"
    { (yyval.integer) = input_flags.add_DT_NEEDED_for_regular;
		    input_flags.add_DT_NEEDED_for_regular = TRUE; }
    break;

  case 100:
#line 392 "ldgram.y"
    { input_flags.add_DT_NEEDED_for_regular = (yyvsp[(3) - (5)].integer); }
    break;

  case 101:
#line 394 "ldgram.y"
    { (yyval.integer) = input_flags.add_DT_NEEDED_for_regular;
		    input_flags.add_DT_NEEDED_for_regular = TRUE; }
    break;

  case 102:
#line 397 "ldgram.y"
    { input_flags.add_DT_NEEDED_for_regular = (yyvsp[(5) - (7)].integer); }
    break;

  case 103:
#line 399 "ldgram.y"
    { (yyval.integer) = input_flags.add_DT_NEEDED_for_regular;
		    input_flags.add_DT_NEEDED_for_regular = TRUE; }
    break;

  case 104:
#line 402 "ldgram.y"
    { input_flags.add_DT_NEEDED_for_regular = (yyvsp[(4) - (6)].integer); }
    break;

  case 109:
#line 417 "ldgram.y"
    { lang_add_entry ((yyvsp[(3) - (4)].name), FALSE); }
    break;

  case 111:
#line 419 "ldgram.y"
    {ldlex_expression ();}
    break;

  case 112:
#line 420 "ldgram.y"
    { ldlex_popstate ();
		  lang_add_assignment (exp_assert ((yyvsp[(4) - (7)].etree), (yyvsp[(6) - (7)].name))); }
    break;

  case 113:
#line 428 "ldgram.y"
    {
			  (yyval.cname) = (yyvsp[(1) - (1)].name);
			}
    break;

  case 114:
#line 432 "ldgram.y"
    {
			  (yyval.cname) = "*";
			}
    break;

  case 115:
#line 436 "ldgram.y"
    {
			  (yyval.cname) = "?";
			}
    break;

  case 116:
#line 443 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(1) - (1)].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 117:
#line 450 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (5)].cname);
			  (yyval.wildcard).sorted = none;
			  (yyval.wildcard).exclude_name_list = (yyvsp[(3) - (5)].name_list);
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 118:
#line 457 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 119:
#line 464 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 120:
#line 471 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_none;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 121:
#line 478 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_name_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 122:
#line 485 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 123:
#line 492 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_alignment_name;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 124:
#line 499 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(5) - (7)].cname);
			  (yyval.wildcard).sorted = by_alignment;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 125:
#line 506 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(7) - (8)].cname);
			  (yyval.wildcard).sorted = by_name;
			  (yyval.wildcard).exclude_name_list = (yyvsp[(5) - (8)].name_list);
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 126:
#line 513 "ldgram.y"
    {
			  (yyval.wildcard).name = (yyvsp[(3) - (4)].cname);
			  (yyval.wildcard).sorted = by_init_priority;
			  (yyval.wildcard).exclude_name_list = NULL;
			  (yyval.wildcard).section_flag_list = NULL;
			}
    break;

  case 127:
#line 522 "ldgram.y"
    {
			  struct flag_info_list *n;
			  n = ((struct flag_info_list *) xmalloc (sizeof *n));
			  if ((yyvsp[(1) - (1)].name)[0] == '!')
			    {
			      n->with = without_flags;
			      n->name = &(yyvsp[(1) - (1)].name)[1];
			    }
			  else
			    {
			      n->with = with_flags;
			      n->name = (yyvsp[(1) - (1)].name);
			    }
			  n->valid = FALSE;
			  n->next = NULL;
			  (yyval.flag_info_list) = n;
			}
    break;

  case 128:
#line 540 "ldgram.y"
    {
			  struct flag_info_list *n;
			  n = ((struct flag_info_list *) xmalloc (sizeof *n));
			  if ((yyvsp[(3) - (3)].name)[0] == '!')
			    {
			      n->with = without_flags;
			      n->name = &(yyvsp[(3) - (3)].name)[1];
			    }
			  else
			    {
			      n->with = with_flags;
			      n->name = (yyvsp[(3) - (3)].name);
			    }
			  n->valid = FALSE;
			  n->next = (yyvsp[(1) - (3)].flag_info_list);
			  (yyval.flag_info_list) = n;
			}
    break;

  case 129:
#line 561 "ldgram.y"
    {
			  struct flag_info *n;
			  n = ((struct flag_info *) xmalloc (sizeof *n));
			  n->flag_list = (yyvsp[(3) - (4)].flag_info_list);
			  n->flags_initialized = FALSE;
			  n->not_with_flags = 0;
			  n->only_with_flags = 0;
			  (yyval.flag_info) = n;
			}
    break;

  case 130:
#line 574 "ldgram.y"
    {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[(2) - (2)].cname);
			  tmp->next = (yyvsp[(1) - (2)].name_list);
			  (yyval.name_list) = tmp;
			}
    break;

  case 131:
#line 583 "ldgram.y"
    {
			  struct name_list *tmp;
			  tmp = (struct name_list *) xmalloc (sizeof *tmp);
			  tmp->name = (yyvsp[(1) - (1)].cname);
			  tmp->next = NULL;
			  (yyval.name_list) = tmp;
			}
    break;

  case 132:
#line 594 "ldgram.y"
    {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = (yyvsp[(1) - (3)].wildcard_list);
			  tmp->spec = (yyvsp[(3) - (3)].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
    break;

  case 133:
#line 603 "ldgram.y"
    {
			  struct wildcard_list *tmp;
			  tmp = (struct wildcard_list *) xmalloc (sizeof *tmp);
			  tmp->next = NULL;
			  tmp->spec = (yyvsp[(1) - (1)].wildcard);
			  (yyval.wildcard_list) = tmp;
			}
    break;

  case 134:
#line 614 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[(1) - (1)].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = NULL;
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
    break;

  case 135:
#line 623 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = (yyvsp[(2) - (2)].name);
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = (yyvsp[(1) - (2)].flag_info);
			  lang_add_wild (&tmp, NULL, ldgram_had_keep);
			}
    break;

  case 136:
#line 632 "ldgram.y"
    {
			  lang_add_wild (NULL, (yyvsp[(2) - (3)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 137:
#line 636 "ldgram.y"
    {
			  struct wildcard_spec tmp;
			  tmp.name = NULL;
			  tmp.exclude_name_list = NULL;
			  tmp.sorted = none;
			  tmp.section_flag_list = (yyvsp[(1) - (4)].flag_info);
			  lang_add_wild (&tmp, (yyvsp[(3) - (4)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 138:
#line 645 "ldgram.y"
    {
			  lang_add_wild (&(yyvsp[(1) - (4)].wildcard), (yyvsp[(3) - (4)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 139:
#line 649 "ldgram.y"
    {
			  (yyvsp[(2) - (5)].wildcard).section_flag_list = (yyvsp[(1) - (5)].flag_info);
			  lang_add_wild (&(yyvsp[(2) - (5)].wildcard), (yyvsp[(4) - (5)].wildcard_list), ldgram_had_keep);
			}
    break;

  case 141:
#line 658 "ldgram.y"
    { ldgram_had_keep = TRUE; }
    break;

  case 142:
#line 660 "ldgram.y"
    { ldgram_had_keep = FALSE; }
    break;

  case 144:
#line 666 "ldgram.y"
    {
 		lang_add_attribute(lang_object_symbols_statement_enum);
	      	}
    break;

  case 146:
#line 671 "ldgram.y"
    {

		  lang_add_attribute(lang_constructors_statement_enum);
		}
    break;

  case 147:
#line 676 "ldgram.y"
    {
		  constructors_sorted = TRUE;
		  lang_add_attribute (lang_constructors_statement_enum);
		}
    break;

  case 149:
#line 682 "ldgram.y"
    {
			  lang_add_data ((int) (yyvsp[(1) - (4)].integer), (yyvsp[(3) - (4)].etree));
			}
    break;

  case 150:
#line 687 "ldgram.y"
    {
			  lang_add_fill ((yyvsp[(3) - (4)].fill));
			}
    break;

  case 151:
#line 690 "ldgram.y"
    {ldlex_expression ();}
    break;

  case 152:
#line 691 "ldgram.y"
    { ldlex_popstate ();
			  lang_add_assignment (exp_assert ((yyvsp[(4) - (8)].etree), (yyvsp[(6) - (8)].name))); }
    break;

  case 153:
#line 694 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 154:
#line 696 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 159:
#line 711 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 160:
#line 713 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 161:
#line 715 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 162:
#line 717 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 163:
#line 719 "ldgram.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].token); }
    break;

  case 164:
#line 724 "ldgram.y"
    {
		  (yyval.fill) = exp_get_fill ((yyvsp[(1) - (1)].etree), 0, "fill value");
		}
    break;

  case 165:
#line 731 "ldgram.y"
    { (yyval.fill) = (yyvsp[(2) - (2)].fill); }
    break;

  case 166:
#line 732 "ldgram.y"
    { (yyval.fill) = (fill_type *) 0; }
    break;

  case 167:
#line 737 "ldgram.y"
    { (yyval.token) = '+'; }
    break;

  case 168:
#line 739 "ldgram.y"
    { (yyval.token) = '-'; }
    break;

  case 169:
#line 741 "ldgram.y"
    { (yyval.token) = '*'; }
    break;

  case 170:
#line 743 "ldgram.y"
    { (yyval.token) = '/'; }
    break;

  case 171:
#line 745 "ldgram.y"
    { (yyval.token) = LSHIFT; }
    break;

  case 172:
#line 747 "ldgram.y"
    { (yyval.token) = RSHIFT; }
    break;

  case 173:
#line 749 "ldgram.y"
    { (yyval.token) = '&'; }
    break;

  case 174:
#line 751 "ldgram.y"
    { (yyval.token) = '|'; }
    break;

  case 177:
#line 761 "ldgram.y"
    {
		  lang_add_assignment (exp_assign ((yyvsp[(1) - (3)].name), (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 178:
#line 765 "ldgram.y"
    {
		  lang_add_assignment (exp_assign ((yyvsp[(1) - (3)].name),
						   exp_binop ((yyvsp[(2) - (3)].token),
							      exp_nameop (NAME,
									  (yyvsp[(1) - (3)].name)),
							      (yyvsp[(3) - (3)].etree))));
		}
    break;

  case 179:
#line 773 "ldgram.y"
    {
		  lang_add_assignment (exp_provide ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].etree), FALSE));
		}
    break;

  case 180:
#line 777 "ldgram.y"
    {
		  lang_add_assignment (exp_provide ((yyvsp[(3) - (6)].name), (yyvsp[(5) - (6)].etree), TRUE));
		}
    break;

  case 188:
#line 800 "ldgram.y"
    { region = lang_memory_region_lookup ((yyvsp[(1) - (1)].name), TRUE); }
    break;

  case 189:
#line 803 "ldgram.y"
    {}
    break;

  case 190:
#line 805 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 191:
#line 807 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 192:
#line 812 "ldgram.y"
    {
		  region->origin = exp_get_vma ((yyvsp[(3) - (3)].etree), 0, "origin");
		  region->current = region->origin;
		}
    break;

  case 193:
#line 820 "ldgram.y"
    {
		  region->length = exp_get_vma ((yyvsp[(3) - (3)].etree), -1, "length");
		}
    break;

  case 194:
#line 827 "ldgram.y"
    { /* dummy action to avoid bison 1.25 error message */ }
    break;

  case 198:
#line 838 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(1) - (1)].name), 0); }
    break;

  case 199:
#line 840 "ldgram.y"
    { lang_set_flags (region, (yyvsp[(2) - (2)].name), 1); }
    break;

  case 200:
#line 845 "ldgram.y"
    { lang_startup((yyvsp[(3) - (4)].name)); }
    break;

  case 202:
#line 851 "ldgram.y"
    { ldemul_hll((char *)NULL); }
    break;

  case 203:
#line 856 "ldgram.y"
    { ldemul_hll((yyvsp[(3) - (3)].name)); }
    break;

  case 204:
#line 858 "ldgram.y"
    { ldemul_hll((yyvsp[(1) - (1)].name)); }
    break;

  case 206:
#line 866 "ldgram.y"
    { ldemul_syslib((yyvsp[(3) - (3)].name)); }
    break;

  case 208:
#line 872 "ldgram.y"
    { lang_float(TRUE); }
    break;

  case 209:
#line 874 "ldgram.y"
    { lang_float(FALSE); }
    break;

  case 210:
#line 879 "ldgram.y"
    {
		  (yyval.nocrossref) = NULL;
		}
    break;

  case 211:
#line 883 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (2)].name);
		  n->next = (yyvsp[(2) - (2)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 212:
#line 892 "ldgram.y"
    {
		  struct lang_nocrossref *n;

		  n = (struct lang_nocrossref *) xmalloc (sizeof *n);
		  n->name = (yyvsp[(1) - (3)].name);
		  n->next = (yyvsp[(3) - (3)].nocrossref);
		  (yyval.nocrossref) = n;
		}
    break;

  case 213:
#line 902 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 214:
#line 904 "ldgram.y"
    { ldlex_popstate (); (yyval.etree)=(yyvsp[(2) - (2)].etree);}
    break;

  case 215:
#line 909 "ldgram.y"
    { (yyval.etree) = exp_unop ('-', (yyvsp[(2) - (2)].etree)); }
    break;

  case 216:
#line 911 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (3)].etree); }
    break;

  case 217:
#line 913 "ldgram.y"
    { (yyval.etree) = exp_unop ((int) (yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].etree)); }
    break;

  case 218:
#line 915 "ldgram.y"
    { (yyval.etree) = exp_unop ('!', (yyvsp[(2) - (2)].etree)); }
    break;

  case 219:
#line 917 "ldgram.y"
    { (yyval.etree) = (yyvsp[(2) - (2)].etree); }
    break;

  case 220:
#line 919 "ldgram.y"
    { (yyval.etree) = exp_unop ('~', (yyvsp[(2) - (2)].etree));}
    break;

  case 221:
#line 922 "ldgram.y"
    { (yyval.etree) = exp_binop ('*', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 222:
#line 924 "ldgram.y"
    { (yyval.etree) = exp_binop ('/', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 223:
#line 926 "ldgram.y"
    { (yyval.etree) = exp_binop ('%', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 224:
#line 928 "ldgram.y"
    { (yyval.etree) = exp_binop ('+', (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 225:
#line 930 "ldgram.y"
    { (yyval.etree) = exp_binop ('-' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 226:
#line 932 "ldgram.y"
    { (yyval.etree) = exp_binop (LSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 227:
#line 934 "ldgram.y"
    { (yyval.etree) = exp_binop (RSHIFT , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 228:
#line 936 "ldgram.y"
    { (yyval.etree) = exp_binop (EQ , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 229:
#line 938 "ldgram.y"
    { (yyval.etree) = exp_binop (NE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 230:
#line 940 "ldgram.y"
    { (yyval.etree) = exp_binop (LE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 231:
#line 942 "ldgram.y"
    { (yyval.etree) = exp_binop (GE , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 232:
#line 944 "ldgram.y"
    { (yyval.etree) = exp_binop ('<' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 233:
#line 946 "ldgram.y"
    { (yyval.etree) = exp_binop ('>' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 234:
#line 948 "ldgram.y"
    { (yyval.etree) = exp_binop ('&' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 235:
#line 950 "ldgram.y"
    { (yyval.etree) = exp_binop ('^' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 236:
#line 952 "ldgram.y"
    { (yyval.etree) = exp_binop ('|' , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 237:
#line 954 "ldgram.y"
    { (yyval.etree) = exp_trinop ('?' , (yyvsp[(1) - (5)].etree), (yyvsp[(3) - (5)].etree), (yyvsp[(5) - (5)].etree)); }
    break;

  case 238:
#line 956 "ldgram.y"
    { (yyval.etree) = exp_binop (ANDAND , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 239:
#line 958 "ldgram.y"
    { (yyval.etree) = exp_binop (OROR , (yyvsp[(1) - (3)].etree), (yyvsp[(3) - (3)].etree)); }
    break;

  case 240:
#line 960 "ldgram.y"
    { (yyval.etree) = exp_nameop (DEFINED, (yyvsp[(3) - (4)].name)); }
    break;

  case 241:
#line 962 "ldgram.y"
    { (yyval.etree) = exp_bigintop ((yyvsp[(1) - (1)].bigint).integer, (yyvsp[(1) - (1)].bigint).str); }
    break;

  case 242:
#line 964 "ldgram.y"
    { (yyval.etree) = exp_nameop (SIZEOF_HEADERS,0); }
    break;

  case 243:
#line 967 "ldgram.y"
    { (yyval.etree) = exp_nameop (ALIGNOF,(yyvsp[(3) - (4)].name)); }
    break;

  case 244:
#line 969 "ldgram.y"
    { (yyval.etree) = exp_nameop (SIZEOF,(yyvsp[(3) - (4)].name)); }
    break;

  case 245:
#line 971 "ldgram.y"
    { (yyval.etree) = exp_nameop (ADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 246:
#line 973 "ldgram.y"
    { (yyval.etree) = exp_nameop (LOADADDR,(yyvsp[(3) - (4)].name)); }
    break;

  case 247:
#line 975 "ldgram.y"
    { (yyval.etree) = exp_nameop (CONSTANT,(yyvsp[(3) - (4)].name)); }
    break;

  case 248:
#line 977 "ldgram.y"
    { (yyval.etree) = exp_unop (ABSOLUTE, (yyvsp[(3) - (4)].etree)); }
    break;

  case 249:
#line 979 "ldgram.y"
    { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 250:
#line 981 "ldgram.y"
    { (yyval.etree) = exp_binop (ALIGN_K,(yyvsp[(3) - (6)].etree),(yyvsp[(5) - (6)].etree)); }
    break;

  case 251:
#line 983 "ldgram.y"
    { (yyval.etree) = exp_binop (DATA_SEGMENT_ALIGN, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree)); }
    break;

  case 252:
#line 985 "ldgram.y"
    { (yyval.etree) = exp_binop (DATA_SEGMENT_RELRO_END, (yyvsp[(5) - (6)].etree), (yyvsp[(3) - (6)].etree)); }
    break;

  case 253:
#line 987 "ldgram.y"
    { (yyval.etree) = exp_unop (DATA_SEGMENT_END, (yyvsp[(3) - (4)].etree)); }
    break;

  case 254:
#line 989 "ldgram.y"
    { /* The operands to the expression node are
			     placed in the opposite order from the way
			     in which they appear in the script as
			     that allows us to reuse more code in
			     fold_binary.  */
			  (yyval.etree) = exp_binop (SEGMENT_START,
					  (yyvsp[(5) - (6)].etree),
					  exp_nameop (NAME, (yyvsp[(3) - (6)].name))); }
    break;

  case 255:
#line 998 "ldgram.y"
    { (yyval.etree) = exp_unop (ALIGN_K,(yyvsp[(3) - (4)].etree)); }
    break;

  case 256:
#line 1000 "ldgram.y"
    { (yyval.etree) = exp_nameop (NAME,(yyvsp[(1) - (1)].name)); }
    break;

  case 257:
#line 1002 "ldgram.y"
    { (yyval.etree) = exp_binop (MAX_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 258:
#line 1004 "ldgram.y"
    { (yyval.etree) = exp_binop (MIN_K, (yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].etree) ); }
    break;

  case 259:
#line 1006 "ldgram.y"
    { (yyval.etree) = exp_assert ((yyvsp[(3) - (6)].etree), (yyvsp[(5) - (6)].name)); }
    break;

  case 260:
#line 1008 "ldgram.y"
    { (yyval.etree) = exp_nameop (ORIGIN, (yyvsp[(3) - (4)].name)); }
    break;

  case 261:
#line 1010 "ldgram.y"
    { (yyval.etree) = exp_nameop (LENGTH, (yyvsp[(3) - (4)].name)); }
    break;

  case 262:
#line 1015 "ldgram.y"
    { (yyval.name) = (yyvsp[(3) - (3)].name); }
    break;

  case 263:
#line 1016 "ldgram.y"
    { (yyval.name) = 0; }
    break;

  case 264:
#line 1020 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 265:
#line 1021 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 266:
#line 1025 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 267:
#line 1026 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 268:
#line 1030 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (4)].etree); }
    break;

  case 269:
#line 1031 "ldgram.y"
    { (yyval.etree) = 0; }
    break;

  case 270:
#line 1035 "ldgram.y"
    { (yyval.token) = ONLY_IF_RO; }
    break;

  case 271:
#line 1036 "ldgram.y"
    { (yyval.token) = ONLY_IF_RW; }
    break;

  case 272:
#line 1037 "ldgram.y"
    { (yyval.token) = SPECIAL; }
    break;

  case 273:
#line 1038 "ldgram.y"
    { (yyval.token) = 0; }
    break;

  case 274:
#line 1041 "ldgram.y"
    { ldlex_expression(); }
    break;

  case 275:
#line 1045 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 276:
#line 1048 "ldgram.y"
    {
			  lang_enter_output_section_statement((yyvsp[(1) - (9)].name), (yyvsp[(3) - (9)].etree),
							      sectype,
							      (yyvsp[(5) - (9)].etree), (yyvsp[(6) - (9)].etree), (yyvsp[(4) - (9)].etree), (yyvsp[(8) - (9)].token));
			}
    break;

  case 277:
#line 1054 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 278:
#line 1056 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_leave_output_section_statement ((yyvsp[(17) - (17)].fill), (yyvsp[(14) - (17)].name), (yyvsp[(16) - (17)].section_phdr), (yyvsp[(15) - (17)].name));
		}
    break;

  case 279:
#line 1061 "ldgram.y"
    {}
    break;

  case 280:
#line 1063 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 281:
#line 1065 "ldgram.y"
    { ldlex_popstate (); ldlex_script (); }
    break;

  case 282:
#line 1067 "ldgram.y"
    {
			  lang_enter_overlay ((yyvsp[(3) - (8)].etree), (yyvsp[(6) - (8)].etree));
			}
    break;

  case 283:
#line 1072 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 284:
#line 1074 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay ((yyvsp[(5) - (16)].etree), (int) (yyvsp[(4) - (16)].integer),
					      (yyvsp[(16) - (16)].fill), (yyvsp[(13) - (16)].name), (yyvsp[(15) - (16)].section_phdr), (yyvsp[(14) - (16)].name));
			}
    break;

  case 286:
#line 1084 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 287:
#line 1086 "ldgram.y"
    {
		  ldlex_popstate ();
		  lang_add_assignment (exp_assign (".", (yyvsp[(3) - (3)].etree)));
		}
    break;

  case 289:
#line 1092 "ldgram.y"
    { ldlex_script (); ldfile_open_command_file((yyvsp[(2) - (2)].name)); }
    break;

  case 290:
#line 1094 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 291:
#line 1098 "ldgram.y"
    { sectype = noload_section; }
    break;

  case 292:
#line 1099 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 293:
#line 1100 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 294:
#line 1101 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 295:
#line 1102 "ldgram.y"
    { sectype = noalloc_section; }
    break;

  case 297:
#line 1107 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 298:
#line 1108 "ldgram.y"
    { sectype = normal_section; }
    break;

  case 299:
#line 1112 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (3)].etree); }
    break;

  case 300:
#line 1113 "ldgram.y"
    { (yyval.etree) = (etree_type *)NULL;  }
    break;

  case 301:
#line 1118 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (6)].etree); }
    break;

  case 302:
#line 1120 "ldgram.y"
    { (yyval.etree) = (yyvsp[(3) - (10)].etree); }
    break;

  case 303:
#line 1124 "ldgram.y"
    { (yyval.etree) = (yyvsp[(1) - (2)].etree); }
    break;

  case 304:
#line 1125 "ldgram.y"
    { (yyval.etree) = (etree_type *) NULL;  }
    break;

  case 305:
#line 1130 "ldgram.y"
    { (yyval.integer) = 0; }
    break;

  case 306:
#line 1132 "ldgram.y"
    { (yyval.integer) = 1; }
    break;

  case 307:
#line 1137 "ldgram.y"
    { (yyval.name) = (yyvsp[(2) - (2)].name); }
    break;

  case 308:
#line 1138 "ldgram.y"
    { (yyval.name) = DEFAULT_MEMORY_REGION; }
    break;

  case 309:
#line 1143 "ldgram.y"
    {
		  (yyval.section_phdr) = NULL;
		}
    break;

  case 310:
#line 1147 "ldgram.y"
    {
		  struct lang_output_section_phdr_list *n;

		  n = ((struct lang_output_section_phdr_list *)
		       xmalloc (sizeof *n));
		  n->name = (yyvsp[(3) - (3)].name);
		  n->used = FALSE;
		  n->next = (yyvsp[(1) - (3)].section_phdr);
		  (yyval.section_phdr) = n;
		}
    break;

  case 312:
#line 1163 "ldgram.y"
    {
			  ldlex_script ();
			  lang_enter_overlay_section ((yyvsp[(2) - (2)].name));
			}
    break;

  case 313:
#line 1168 "ldgram.y"
    { ldlex_popstate (); ldlex_expression (); }
    break;

  case 314:
#line 1170 "ldgram.y"
    {
			  ldlex_popstate ();
			  lang_leave_overlay_section ((yyvsp[(9) - (9)].fill), (yyvsp[(8) - (9)].section_phdr));
			}
    break;

  case 319:
#line 1187 "ldgram.y"
    { ldlex_expression (); }
    break;

  case 320:
#line 1188 "ldgram.y"
    { ldlex_popstate (); }
    break;

  case 321:
#line 1190 "ldgram.y"
    {
		  lang_new_phdr ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].etree), (yyvsp[(4) - (6)].phdr).filehdr, (yyvsp[(4) - (6)].phdr).phdrs, (yyvsp[(4) - (6)].phdr).at,
				 (yyvsp[(4) - (6)].phdr).flags);
		}
    break;

  case 322:
#line 1198 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(1) - (1)].etree);

		  if ((yyvsp[(1) - (1)].etree)->type.node_class == etree_name
		      && (yyvsp[(1) - (1)].etree)->type.node_code == NAME)
		    {
		      const char *s;
		      unsigned int i;
		      static const char * const phdr_types[] =
			{
			  "PT_NULL", "PT_LOAD", "PT_DYNAMIC",
			  "PT_INTERP", "PT_NOTE", "PT_SHLIB",
			  "PT_PHDR", "PT_TLS"
			};

		      s = (yyvsp[(1) - (1)].etree)->name.name;
		      for (i = 0;
			   i < sizeof phdr_types / sizeof phdr_types[0];
			   i++)
			if (strcmp (s, phdr_types[i]) == 0)
			  {
			    (yyval.etree) = exp_intop (i);
			    break;
			  }
		      if (i == sizeof phdr_types / sizeof phdr_types[0])
			{
			  if (strcmp (s, "PT_GNU_EH_FRAME") == 0)
			    (yyval.etree) = exp_intop (0x6474e550);
			  else if (strcmp (s, "PT_GNU_STACK") == 0)
			    (yyval.etree) = exp_intop (0x6474e551);
			  else
			    {
			      einfo (_("\
%X%P:%S: unknown phdr type `%s' (try integer literal)\n"),
				     NULL, s);
			      (yyval.etree) = exp_intop (0);
			    }
			}
		    }
		}
    break;

  case 323:
#line 1242 "ldgram.y"
    {
		  memset (&(yyval.phdr), 0, sizeof (struct phdr_info));
		}
    break;

  case 324:
#line 1246 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(3) - (3)].phdr);
		  if (strcmp ((yyvsp[(1) - (3)].name), "FILEHDR") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).filehdr = TRUE;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "PHDRS") == 0 && (yyvsp[(2) - (3)].etree) == NULL)
		    (yyval.phdr).phdrs = TRUE;
		  else if (strcmp ((yyvsp[(1) - (3)].name), "FLAGS") == 0 && (yyvsp[(2) - (3)].etree) != NULL)
		    (yyval.phdr).flags = (yyvsp[(2) - (3)].etree);
		  else
		    einfo (_("%X%P:%S: PHDRS syntax error at `%s'\n"),
			   NULL, (yyvsp[(1) - (3)].name));
		}
    break;

  case 325:
#line 1259 "ldgram.y"
    {
		  (yyval.phdr) = (yyvsp[(5) - (5)].phdr);
		  (yyval.phdr).at = (yyvsp[(3) - (5)].etree);
		}
    break;

  case 326:
#line 1267 "ldgram.y"
    {
		  (yyval.etree) = NULL;
		}
    break;

  case 327:
#line 1271 "ldgram.y"
    {
		  (yyval.etree) = (yyvsp[(2) - (3)].etree);
		}
    break;

  case 328:
#line 1277 "ldgram.y"
    {
		  ldlex_version_file ();
		  PUSH_ERROR (_("dynamic list"));
		}
    break;

  case 329:
#line 1282 "ldgram.y"
    {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
    break;

  case 333:
#line 1299 "ldgram.y"
    {
		  lang_append_dynamic_list ((yyvsp[(1) - (2)].versyms));
		}
    break;

  case 334:
#line 1307 "ldgram.y"
    {
		  ldlex_version_file ();
		  PUSH_ERROR (_("VERSION script"));
		}
    break;

  case 335:
#line 1312 "ldgram.y"
    {
		  ldlex_popstate ();
		  POP_ERROR ();
		}
    break;

  case 336:
#line 1321 "ldgram.y"
    {
		  ldlex_version_script ();
		}
    break;

  case 337:
#line 1325 "ldgram.y"
    {
		  ldlex_popstate ();
		}
    break;

  case 340:
#line 1337 "ldgram.y"
    {
		  lang_register_vers_node (NULL, (yyvsp[(2) - (4)].versnode), NULL);
		}
    break;

  case 341:
#line 1341 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (5)].name), (yyvsp[(3) - (5)].versnode), NULL);
		}
    break;

  case 342:
#line 1345 "ldgram.y"
    {
		  lang_register_vers_node ((yyvsp[(1) - (6)].name), (yyvsp[(3) - (6)].versnode), (yyvsp[(5) - (6)].deflist));
		}
    break;

  case 343:
#line 1352 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend (NULL, (yyvsp[(1) - (1)].name));
		}
    break;

  case 344:
#line 1356 "ldgram.y"
    {
		  (yyval.deflist) = lang_add_vers_depend ((yyvsp[(1) - (2)].deflist), (yyvsp[(2) - (2)].name));
		}
    break;

  case 345:
#line 1363 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, NULL);
		}
    break;

  case 346:
#line 1367 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(1) - (2)].versyms), NULL);
		}
    break;

  case 347:
#line 1371 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (4)].versyms), NULL);
		}
    break;

  case 348:
#line 1375 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node (NULL, (yyvsp[(3) - (4)].versyms));
		}
    break;

  case 349:
#line 1379 "ldgram.y"
    {
		  (yyval.versnode) = lang_new_vers_node ((yyvsp[(3) - (8)].versyms), (yyvsp[(7) - (8)].versyms));
		}
    break;

  case 350:
#line 1386 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[(1) - (1)].name), ldgram_vers_current_lang, FALSE);
		}
    break;

  case 351:
#line 1390 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, (yyvsp[(1) - (1)].name), ldgram_vers_current_lang, TRUE);
		}
    break;

  case 352:
#line 1394 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), (yyvsp[(3) - (3)].name), ldgram_vers_current_lang, FALSE);
		}
    break;

  case 353:
#line 1398 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), (yyvsp[(3) - (3)].name), ldgram_vers_current_lang, TRUE);
		}
    break;

  case 354:
#line 1402 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(4) - (5)].name);
			}
    break;

  case 355:
#line 1407 "ldgram.y"
    {
			  struct bfd_elf_version_expr *pat;
			  for (pat = (yyvsp[(7) - (9)].versyms); pat->next != NULL; pat = pat->next);
			  pat->next = (yyvsp[(1) - (9)].versyms);
			  (yyval.versyms) = (yyvsp[(7) - (9)].versyms);
			  ldgram_vers_current_lang = (yyvsp[(6) - (9)].name);
			}
    break;

  case 356:
#line 1415 "ldgram.y"
    {
			  (yyval.name) = ldgram_vers_current_lang;
			  ldgram_vers_current_lang = (yyvsp[(2) - (3)].name);
			}
    break;

  case 357:
#line 1420 "ldgram.y"
    {
			  (yyval.versyms) = (yyvsp[(5) - (7)].versyms);
			  ldgram_vers_current_lang = (yyvsp[(4) - (7)].name);
			}
    break;

  case 358:
#line 1425 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "global", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 359:
#line 1429 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), "global", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 360:
#line 1433 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "local", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 361:
#line 1437 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), "local", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 362:
#line 1441 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern (NULL, "extern", ldgram_vers_current_lang, FALSE);
		}
    break;

  case 363:
#line 1445 "ldgram.y"
    {
		  (yyval.versyms) = lang_new_vers_pattern ((yyvsp[(1) - (3)].versyms), "extern", ldgram_vers_current_lang, FALSE);
		}
    break;


/* Line 1267 of yacc.c.  */
#line 4453 "ldgram.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1455 "ldgram.y"

void
yyerror(arg)
     const char *arg;
{
  if (ldfile_assumed_script)
    einfo (_("%P:%s: file format not recognized; treating as linker script\n"),
	   ldlex_filename ());
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
    einfo ("%P%F:%S: %s in %s\n", NULL, arg, error_names[error_index - 1]);
  else
    einfo ("%P%F:%S: %s\n", NULL, arg);
}

