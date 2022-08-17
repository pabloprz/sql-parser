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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 2 "bison_parser.y"

  // clang-format on
  /**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
  /*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 108 "bison_parser.cpp"

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

#include "bison_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_INTEGER = 24,                   /* INTEGER  */
  YYSYMBOL_NATURAL = 25,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 26,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 27,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 28,                   /* SCHEMAS  */
  YYSYMBOL_CHARACTER_VARYING = 29,         /* CHARACTER_VARYING  */
  YYSYMBOL_REAL = 30,                      /* REAL  */
  YYSYMBOL_DECIMAL = 31,                   /* DECIMAL  */
  YYSYMBOL_SMALLINT = 32,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 33,                    /* BIGINT  */
  YYSYMBOL_SPATIAL = 34,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 35,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 36,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 37,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 38,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 39,                    /* COLUMN  */
  YYSYMBOL_CREATE = 40,                    /* CREATE  */
  YYSYMBOL_DELETE = 41,                    /* DELETE  */
  YYSYMBOL_DIRECT = 42,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 43,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 44,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 45,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 46,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 47,                   /* EXTRACT  */
  YYSYMBOL_CAST = 48,                      /* CAST  */
  YYSYMBOL_FORMAT = 49,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 50,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 51,                    /* HAVING  */
  YYSYMBOL_IMPORT = 52,                    /* IMPORT  */
  YYSYMBOL_INSERT = 53,                    /* INSERT  */
  YYSYMBOL_ISNULL = 54,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 55,                    /* OFFSET  */
  YYSYMBOL_RENAME = 56,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 57,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 58,                    /* SELECT  */
  YYSYMBOL_SORTED = 59,                    /* SORTED  */
  YYSYMBOL_TABLES = 60,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 61,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 62,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 63,                    /* UPDATE  */
  YYSYMBOL_VALUES = 64,                    /* VALUES  */
  YYSYMBOL_AFTER = 65,                     /* AFTER  */
  YYSYMBOL_ALTER = 66,                     /* ALTER  */
  YYSYMBOL_CROSS = 67,                     /* CROSS  */
  YYSYMBOL_DELTA = 68,                     /* DELTA  */
  YYSYMBOL_FLOAT = 69,                     /* FLOAT  */
  YYSYMBOL_GROUP = 70,                     /* GROUP  */
  YYSYMBOL_INDEX = 71,                     /* INDEX  */
  YYSYMBOL_INNER = 72,                     /* INNER  */
  YYSYMBOL_LIMIT = 73,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 74,                     /* LOCAL  */
  YYSYMBOL_MERGE = 75,                     /* MERGE  */
  YYSYMBOL_MINUS = 76,                     /* MINUS  */
  YYSYMBOL_ORDER = 77,                     /* ORDER  */
  YYSYMBOL_OUTER = 78,                     /* OUTER  */
  YYSYMBOL_RIGHT = 79,                     /* RIGHT  */
  YYSYMBOL_TABLE = 80,                     /* TABLE  */
  YYSYMBOL_UNION = 81,                     /* UNION  */
  YYSYMBOL_USING = 82,                     /* USING  */
  YYSYMBOL_WHERE = 83,                     /* WHERE  */
  YYSYMBOL_CALL = 84,                      /* CALL  */
  YYSYMBOL_CASE = 85,                      /* CASE  */
  YYSYMBOL_CHAR = 86,                      /* CHAR  */
  YYSYMBOL_COPY = 87,                      /* COPY  */
  YYSYMBOL_DATE = 88,                      /* DATE  */
  YYSYMBOL_DATETIME = 89,                  /* DATETIME  */
  YYSYMBOL_DESC = 90,                      /* DESC  */
  YYSYMBOL_DROP = 91,                      /* DROP  */
  YYSYMBOL_ELSE = 92,                      /* ELSE  */
  YYSYMBOL_FILE = 93,                      /* FILE  */
  YYSYMBOL_FROM = 94,                      /* FROM  */
  YYSYMBOL_FULL = 95,                      /* FULL  */
  YYSYMBOL_HASH = 96,                      /* HASH  */
  YYSYMBOL_HINT = 97,                      /* HINT  */
  YYSYMBOL_INTO = 98,                      /* INTO  */
  YYSYMBOL_JOIN = 99,                      /* JOIN  */
  YYSYMBOL_LEFT = 100,                     /* LEFT  */
  YYSYMBOL_LIKE = 101,                     /* LIKE  */
  YYSYMBOL_LOAD = 102,                     /* LOAD  */
  YYSYMBOL_LONG = 103,                     /* LONG  */
  YYSYMBOL_NULL = 104,                     /* NULL  */
  YYSYMBOL_PLAN = 105,                     /* PLAN  */
  YYSYMBOL_SHOW = 106,                     /* SHOW  */
  YYSYMBOL_TEXT = 107,                     /* TEXT  */
  YYSYMBOL_THEN = 108,                     /* THEN  */
  YYSYMBOL_TIME = 109,                     /* TIME  */
  YYSYMBOL_VIEW = 110,                     /* VIEW  */
  YYSYMBOL_WHEN = 111,                     /* WHEN  */
  YYSYMBOL_WITH = 112,                     /* WITH  */
  YYSYMBOL_ADD = 113,                      /* ADD  */
  YYSYMBOL_ALL = 114,                      /* ALL  */
  YYSYMBOL_AND = 115,                      /* AND  */
  YYSYMBOL_ASC = 116,                      /* ASC  */
  YYSYMBOL_END = 117,                      /* END  */
  YYSYMBOL_FOR = 118,                      /* FOR  */
  YYSYMBOL_INT = 119,                      /* INT  */
  YYSYMBOL_KEY = 120,                      /* KEY  */
  YYSYMBOL_NOT = 121,                      /* NOT  */
  YYSYMBOL_OFF = 122,                      /* OFF  */
  YYSYMBOL_SET = 123,                      /* SET  */
  YYSYMBOL_TOP = 124,                      /* TOP  */
  YYSYMBOL_AS = 125,                       /* AS  */
  YYSYMBOL_BY = 126,                       /* BY  */
  YYSYMBOL_IF = 127,                       /* IF  */
  YYSYMBOL_IN = 128,                       /* IN  */
  YYSYMBOL_IS = 129,                       /* IS  */
  YYSYMBOL_OF = 130,                       /* OF  */
  YYSYMBOL_ON = 131,                       /* ON  */
  YYSYMBOL_OR = 132,                       /* OR  */
  YYSYMBOL_TO = 133,                       /* TO  */
  YYSYMBOL_NO = 134,                       /* NO  */
  YYSYMBOL_ARRAY = 135,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 136,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 137,                    /* ILIKE  */
  YYSYMBOL_SECOND = 138,                   /* SECOND  */
  YYSYMBOL_MINUTE = 139,                   /* MINUTE  */
  YYSYMBOL_HOUR = 140,                     /* HOUR  */
  YYSYMBOL_DAY = 141,                      /* DAY  */
  YYSYMBOL_MONTH = 142,                    /* MONTH  */
  YYSYMBOL_YEAR = 143,                     /* YEAR  */
  YYSYMBOL_SECONDS = 144,                  /* SECONDS  */
  YYSYMBOL_MINUTES = 145,                  /* MINUTES  */
  YYSYMBOL_HOURS = 146,                    /* HOURS  */
  YYSYMBOL_DAYS = 147,                     /* DAYS  */
  YYSYMBOL_MONTHS = 148,                   /* MONTHS  */
  YYSYMBOL_YEARS = 149,                    /* YEARS  */
  YYSYMBOL_INTERVAL = 150,                 /* INTERVAL  */
  YYSYMBOL_SUNDAY = 151,                   /* SUNDAY  */
  YYSYMBOL_MONDAY = 152,                   /* MONDAY  */
  YYSYMBOL_TUESDAY = 153,                  /* TUESDAY  */
  YYSYMBOL_WEDNESDAY = 154,                /* WEDNESDAY  */
  YYSYMBOL_THURSDAY = 155,                 /* THURSDAY  */
  YYSYMBOL_FRIDAY = 156,                   /* FRIDAY  */
  YYSYMBOL_SATURDAY = 157,                 /* SATURDAY  */
  YYSYMBOL_TRUE = 158,                     /* TRUE  */
  YYSYMBOL_FALSE = 159,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 160,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 161,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 162,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 163,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 164,                 /* ROLLBACK  */
  YYSYMBOL_NOWAIT = 165,                   /* NOWAIT  */
  YYSYMBOL_SKIP = 166,                     /* SKIP  */
  YYSYMBOL_LOCKED = 167,                   /* LOCKED  */
  YYSYMBOL_SHARE = 168,                    /* SHARE  */
  YYSYMBOL_169_ = 169,                     /* '='  */
  YYSYMBOL_EQUALS = 170,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 171,                /* NOTEQUALS  */
  YYSYMBOL_172_ = 172,                     /* '<'  */
  YYSYMBOL_173_ = 173,                     /* '>'  */
  YYSYMBOL_LESS = 174,                     /* LESS  */
  YYSYMBOL_GREATER = 175,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 176,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 177,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 178,                  /* NOTNULL  */
  YYSYMBOL_179_ = 179,                     /* '+'  */
  YYSYMBOL_180_ = 180,                     /* '-'  */
  YYSYMBOL_181_ = 181,                     /* '*'  */
  YYSYMBOL_182_ = 182,                     /* '/'  */
  YYSYMBOL_183_ = 183,                     /* '%'  */
  YYSYMBOL_184_ = 184,                     /* '^'  */
  YYSYMBOL_UMINUS = 185,                   /* UMINUS  */
  YYSYMBOL_186_ = 186,                     /* '['  */
  YYSYMBOL_187_ = 187,                     /* ']'  */
  YYSYMBOL_188_ = 188,                     /* '('  */
  YYSYMBOL_189_ = 189,                     /* ')'  */
  YYSYMBOL_190_ = 190,                     /* '.'  */
  YYSYMBOL_191_ = 191,                     /* ';'  */
  YYSYMBOL_192_ = 192,                     /* ','  */
  YYSYMBOL_193_ = 193,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 194,                 /* $accept  */
  YYSYMBOL_input = 195,                    /* input  */
  YYSYMBOL_statement_list = 196,           /* statement_list  */
  YYSYMBOL_statement = 197,                /* statement  */
  YYSYMBOL_preparable_statement = 198,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 199,                /* opt_hints  */
  YYSYMBOL_hint_list = 200,                /* hint_list  */
  YYSYMBOL_hint = 201,                     /* hint  */
  YYSYMBOL_transaction_statement = 202,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 203,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 204,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 205,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 206,        /* execute_statement  */
  YYSYMBOL_import_statement = 207,         /* import_statement  */
  YYSYMBOL_file_type = 208,                /* file_type  */
  YYSYMBOL_file_path = 209,                /* file_path  */
  YYSYMBOL_opt_file_type = 210,            /* opt_file_type  */
  YYSYMBOL_export_statement = 211,         /* export_statement  */
  YYSYMBOL_show_statement = 212,           /* show_statement  */
  YYSYMBOL_create_statement = 213,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 214,           /* opt_not_exists  */
  YYSYMBOL_table_elem_commalist = 215,     /* table_elem_commalist  */
  YYSYMBOL_table_elem = 216,               /* table_elem  */
  YYSYMBOL_column_def = 217,               /* column_def  */
  YYSYMBOL_column_type = 218,              /* column_type  */
  YYSYMBOL_opt_time_precision = 219,       /* opt_time_precision  */
  YYSYMBOL_opt_decimal_specification = 220, /* opt_decimal_specification  */
  YYSYMBOL_opt_column_constraints = 221,   /* opt_column_constraints  */
  YYSYMBOL_column_constraint_list = 222,   /* column_constraint_list  */
  YYSYMBOL_column_constraint = 223,        /* column_constraint  */
  YYSYMBOL_table_constraint = 224,         /* table_constraint  */
  YYSYMBOL_drop_statement = 225,           /* drop_statement  */
  YYSYMBOL_opt_exists = 226,               /* opt_exists  */
  YYSYMBOL_alter_statement = 227,          /* alter_statement  */
  YYSYMBOL_alter_action = 228,             /* alter_action  */
  YYSYMBOL_drop_action = 229,              /* drop_action  */
  YYSYMBOL_delete_statement = 230,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 231,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 232,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 233,          /* opt_column_list  */
  YYSYMBOL_update_statement = 234,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 235,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 236,            /* update_clause  */
  YYSYMBOL_select_statement = 237,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 238, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 239, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 240,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 241,          /* select_no_paren  */
  YYSYMBOL_set_operator = 242,             /* set_operator  */
  YYSYMBOL_set_type = 243,                 /* set_type  */
  YYSYMBOL_opt_all = 244,                  /* opt_all  */
  YYSYMBOL_select_clause = 245,            /* select_clause  */
  YYSYMBOL_opt_distinct = 246,             /* opt_distinct  */
  YYSYMBOL_select_list = 247,              /* select_list  */
  YYSYMBOL_opt_from_clause = 248,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 249,              /* from_clause  */
  YYSYMBOL_opt_where = 250,                /* opt_where  */
  YYSYMBOL_opt_group = 251,                /* opt_group  */
  YYSYMBOL_opt_having = 252,               /* opt_having  */
  YYSYMBOL_opt_order = 253,                /* opt_order  */
  YYSYMBOL_order_list = 254,               /* order_list  */
  YYSYMBOL_order_desc = 255,               /* order_desc  */
  YYSYMBOL_opt_order_type = 256,           /* opt_order_type  */
  YYSYMBOL_opt_top = 257,                  /* opt_top  */
  YYSYMBOL_opt_limit = 258,                /* opt_limit  */
  YYSYMBOL_expr_list = 259,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 260,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 261,             /* literal_list  */
  YYSYMBOL_expr_alias = 262,               /* expr_alias  */
  YYSYMBOL_expr = 263,                     /* expr  */
  YYSYMBOL_operand = 264,                  /* operand  */
  YYSYMBOL_scalar_expr = 265,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 266,               /* unary_expr  */
  YYSYMBOL_binary_expr = 267,              /* binary_expr  */
  YYSYMBOL_logic_expr = 268,               /* logic_expr  */
  YYSYMBOL_in_expr = 269,                  /* in_expr  */
  YYSYMBOL_case_expr = 270,                /* case_expr  */
  YYSYMBOL_case_list = 271,                /* case_list  */
  YYSYMBOL_exists_expr = 272,              /* exists_expr  */
  YYSYMBOL_comp_expr = 273,                /* comp_expr  */
  YYSYMBOL_function_expr = 274,            /* function_expr  */
  YYSYMBOL_extract_expr = 275,             /* extract_expr  */
  YYSYMBOL_cast_expr = 276,                /* cast_expr  */
  YYSYMBOL_datetime_field = 277,           /* datetime_field  */
  YYSYMBOL_datetime_field_plural = 278,    /* datetime_field_plural  */
  YYSYMBOL_day_of_the_week_field = 279,    /* day_of_the_week_field  */
  YYSYMBOL_duration_field = 280,           /* duration_field  */
  YYSYMBOL_array_expr = 281,               /* array_expr  */
  YYSYMBOL_array_index = 282,              /* array_index  */
  YYSYMBOL_between_expr = 283,             /* between_expr  */
  YYSYMBOL_column_name = 284,              /* column_name  */
  YYSYMBOL_literal = 285,                  /* literal  */
  YYSYMBOL_string_literal = 286,           /* string_literal  */
  YYSYMBOL_bool_literal = 287,             /* bool_literal  */
  YYSYMBOL_num_literal = 288,              /* num_literal  */
  YYSYMBOL_int_literal = 289,              /* int_literal  */
  YYSYMBOL_null_literal = 290,             /* null_literal  */
  YYSYMBOL_date_literal = 291,             /* date_literal  */
  YYSYMBOL_interval_literal = 292,         /* interval_literal  */
  YYSYMBOL_param_expr = 293,               /* param_expr  */
  YYSYMBOL_table_ref = 294,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 295,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 296, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 297,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 298,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 299,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 300,               /* table_name  */
  YYSYMBOL_opt_index_name = 301,           /* opt_index_name  */
  YYSYMBOL_table_alias = 302,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 303,          /* opt_table_alias  */
  YYSYMBOL_alias = 304,                    /* alias  */
  YYSYMBOL_opt_alias = 305,                /* opt_alias  */
  YYSYMBOL_opt_locking_clause = 306,       /* opt_locking_clause  */
  YYSYMBOL_opt_locking_clause_list = 307,  /* opt_locking_clause_list  */
  YYSYMBOL_locking_clause = 308,           /* locking_clause  */
  YYSYMBOL_row_lock_mode = 309,            /* row_lock_mode  */
  YYSYMBOL_opt_row_lock_policy = 310,      /* opt_row_lock_policy  */
  YYSYMBOL_opt_with_clause = 311,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 312,              /* with_clause  */
  YYSYMBOL_with_description_list = 313,    /* with_description_list  */
  YYSYMBOL_with_description = 314,         /* with_description  */
  YYSYMBOL_join_clause = 315,              /* join_clause  */
  YYSYMBOL_opt_join_type = 316,            /* opt_join_type  */
  YYSYMBOL_join_condition = 317,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 318,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 319           /* ident_commalist  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   884

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  194
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  329
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  586

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   431


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   183,     2,     2,
     188,   189,   181,   179,   192,   180,   190,   182,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   191,
     172,   169,   173,   193,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   186,     2,   187,   184,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   170,   171,   174,   175,   176,   177,
     178,   185
};

#if HSQL_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   307,   307,   326,   332,   339,   343,   347,   348,   349,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     366,   367,   369,   373,   378,   382,   392,   393,   394,   396,
     396,   402,   408,   410,   414,   425,   431,   438,   453,   458,
     459,   465,   477,   478,   483,   494,   507,   515,   522,   529,
     538,   539,   541,   545,   550,   551,   553,   558,   559,   560,
     561,   562,   563,   564,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   580,   581,   583,   584,   585,
     587,   588,   590,   594,   599,   600,   601,   602,   604,   605,
     613,   619,   625,   631,   637,   638,   645,   651,   653,   663,
     670,   681,   688,   696,   697,   704,   711,   715,   720,   730,
     734,   738,   750,   750,   752,   753,   762,   763,   765,   779,
     791,   796,   800,   804,   809,   810,   812,   822,   823,   825,
     827,   828,   830,   832,   833,   835,   840,   842,   843,   845,
     846,   848,   852,   857,   859,   860,   861,   865,   866,   868,
     869,   870,   871,   872,   873,   878,   882,   887,   888,   890,
     894,   899,   907,   907,   907,   907,   907,   909,   910,   910,
     910,   910,   910,   910,   910,   910,   911,   911,   915,   915,
     917,   918,   919,   920,   921,   923,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   934,   935,   937,   938,
     939,   940,   944,   945,   946,   947,   949,   950,   952,   953,
     955,   956,   957,   958,   959,   960,   961,   962,   964,   965,
     966,   967,   969,   971,   973,   974,   975,   976,   977,   978,
     980,   981,   982,   983,   984,   985,   987,   988,   989,   990,
     991,   992,   993,   995,   995,   997,   999,  1001,  1003,  1004,
    1005,  1006,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1010,
    1012,  1013,  1015,  1016,  1018,  1020,  1022,  1033,  1037,  1048,
    1080,  1089,  1089,  1096,  1096,  1098,  1098,  1105,  1109,  1114,
    1122,  1128,  1132,  1137,  1138,  1140,  1140,  1142,  1142,  1144,
    1145,  1147,  1147,  1153,  1154,  1156,  1160,  1165,  1171,  1178,
    1179,  1180,  1181,  1183,  1184,  1185,  1191,  1191,  1193,  1195,
    1199,  1204,  1214,  1221,  1229,  1245,  1246,  1247,  1248,  1249,
    1250,  1251,  1252,  1253,  1254,  1256,  1262,  1262,  1265,  1269
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS",
  "MONTHS", "YEARS", "INTERVAL", "SUNDAY", "MONDAY", "TUESDAY",
  "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "TRUE", "FALSE",
  "BOOLEAN", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "NOWAIT",
  "SKIP", "LOCKED", "SHARE", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'",
  "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'",
  "','", "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_list", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "day_of_the_week_field", "duration_field",
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "interval_literal", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "opt_index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_locking_clause", "opt_locking_clause_list",
  "locking_clause", "row_lock_mode", "opt_row_lock_policy",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-462)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-327)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     605,    18,    45,    49,    58,    45,   -29,     0,    33,    68,
      45,    67,    45,   -21,    22,   122,   -25,   -25,   -25,   156,
     -16,  -462,    82,  -462,    82,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,   -24,  -462,   217,
      36,  -462,    34,   114,  -462,    94,    94,    94,    45,   243,
      45,   127,  -462,   132,   -36,   132,   132,   132,    45,  -462,
     149,    62,  -462,  -462,  -462,  -462,  -462,  -462,   542,  -462,
     182,  -462,  -462,   171,   -24,    53,  -462,   129,  -462,   291,
      73,   319,   207,   300,    45,    45,   250,  -462,   247,   178,
     374,   336,    45,   380,   380,   387,    45,    45,  -462,   204,
     122,  -462,   206,   393,   388,   213,   227,  -462,  -462,  -462,
     -24,   303,   294,   -24,    31,  -462,  -462,  -462,  -462,   417,
    -462,   418,  -462,  -462,  -462,   236,   234,  -462,  -462,  -462,
    -462,   735,  -462,  -462,  -462,  -462,  -462,  -462,   382,  -462,
     298,   -55,   178,   366,  -462,   380,   428,     2,   275,   -46,
    -462,  -462,   354,   334,  -462,   334,  -462,  -462,  -462,  -462,
    -462,   444,  -462,  -462,   366,  -462,  -462,   371,  -462,  -462,
      53,  -462,  -462,   366,   371,   366,   167,   331,  -462,   299,
    -462,    73,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,    45,   447,
     340,    40,   328,   -23,   267,   268,   270,   230,   430,   273,
     505,  -462,   339,    20,   128,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,   363,  -462,    38,   276,  -462,   366,   374,  -462,   424,
    -462,  -462,   416,  -462,  -462,   278,    59,  -462,   373,   279,
    -462,    28,    31,   -24,   281,  -462,    64,    31,    20,   420,
      17,     8,  -462,   331,  -462,  -462,  -462,   292,   386,  -462,
     645,   361,   295,   135,  -462,  -462,  -462,   340,    14,    21,
     426,   299,   366,   366,   181,   101,   304,   505,   637,   366,
      56,   293,   -59,   366,   366,   505,  -462,   505,   -63,   305,
     252,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   393,    45,  -462,   483,
      73,    20,  -462,   132,   243,    73,  -462,   444,    11,   250,
    -462,   366,  -462,   488,  -462,  -462,  -462,  -462,   366,  -462,
    -462,  -462,   331,   366,   366,  -462,   326,   375,  -462,    25,
    -462,   428,   380,  -462,  -462,   308,  -462,   311,  -462,  -462,
     312,  -462,  -462,   314,  -462,  -462,  -462,  -462,   315,  -462,
    -462,    27,   316,   428,  -462,    40,  -462,  -462,   366,   735,
    -462,  -462,   317,   411,    92,   153,   136,   366,   366,  -462,
     426,   406,    -9,  -462,  -462,  -462,   397,   606,   662,   505,
     325,   339,  -462,   410,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,   337,   662,   662,   662,   662,   686,   686,   686,
     686,    56,    56,   -81,   -81,   -81,   -96,   330,  -462,  -462,
     143,   519,  -462,   160,  -462,   340,  -462,   191,  -462,   338,
    -462,    32,  -462,   456,  -462,  -462,  -462,  -462,    20,    20,
    -462,   465,   428,  -462,   362,  -462,   161,  -462,   525,   527,
    -462,   529,   530,   531,  -462,   419,  -462,  -462,   434,  -462,
      27,  -462,   428,   165,  -462,   169,   351,   352,  -462,   366,
     645,   366,   366,  -462,   205,   174,   355,  -462,   505,   662,
     339,   356,   170,  -462,  -462,  -462,  -462,  -462,   359,   451,
    -462,  -462,  -462,   477,   478,   480,   461,    11,   540,  -462,
    -462,  -462,   435,  -462,  -462,    -7,  -462,  -462,   377,   175,
     378,   381,   383,  -462,  -462,  -462,   187,  -462,  -462,  -462,
    -462,   -52,   384,    20,   214,  -462,   366,  -462,   637,   385,
     189,  -462,  -462,    32,    11,  -462,  -462,  -462,    11,   296,
     389,   366,  -462,  -462,  -462,   556,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,    20,  -462,  -462,  -462,  -462,   390,   428,
     -30,   392,   396,   366,   209,   366,  -462,  -462,    24,    20,
    -462,  -462,    20,   379,   398,  -462
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     327,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   306,     0,
     281,   100,    33,     0,    44,    51,    51,    51,     0,     0,
       0,     0,   280,    95,     0,    95,    95,    95,     0,    42,
       0,   308,   309,    29,    26,    28,    27,     1,   307,     2,
       0,     6,     5,   148,     0,   109,   110,   140,    92,     0,
     158,     0,     0,   284,     0,     0,   134,    37,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     4,     0,     0,   128,     0,     0,   122,   123,   121,
       0,   125,     0,     0,   154,   282,   259,   262,   264,     0,
     265,     0,   260,   261,   270,     0,   157,   159,   252,   253,
     254,   263,   255,   256,   257,   258,    32,    31,     0,   283,
       0,     0,   104,     0,    99,     0,     0,     0,     0,   134,
     106,    94,     0,    40,    38,    40,    93,    90,    91,   311,
     310,     0,   147,   127,     0,   117,   116,   140,   113,   112,
     114,   124,   120,     0,   140,     0,     0,   294,   266,   269,
      34,     0,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   243,   244,   267,    50,     0,     0,
     307,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   133,   162,   169,   170,   171,   164,   166,
     172,   165,   185,   173,   174,   175,   176,   168,   163,   178,
     179,     0,   328,     0,     0,   102,     0,     0,   105,     0,
      96,    97,     0,    36,    41,    24,     0,    22,   131,   129,
     155,   292,   154,     0,   139,   141,   146,   154,   150,   152,
     149,     0,   118,   293,   295,   268,   160,     0,     0,    47,
       0,     0,     0,     0,    52,    54,    55,   307,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,     0,
     180,     0,     0,     0,     0,     0,   182,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,     0,
       0,   108,   107,    95,     0,     0,    20,     0,     0,   134,
     130,     0,   290,     0,   291,   161,   111,   115,     0,   145,
     144,   143,   294,     0,     0,   299,     0,     0,   301,   305,
     296,     0,     0,    73,    67,     0,    69,    79,    70,    57,
       0,    64,    65,     0,    61,    62,    68,    71,    76,    66,
      58,    81,     0,     0,    46,     0,    49,   218,     0,     0,
     249,   251,     0,     0,     0,     0,     0,     0,     0,   204,
       0,     0,     0,   177,   167,   196,   197,     0,   192,     0,
       0,     0,   183,     0,   236,   237,   238,   239,   240,   241,
     242,   217,   195,   194,   210,   211,   212,   213,   214,   215,
     216,   187,   186,   189,   188,   190,   191,     0,    35,   329,
       0,     0,    39,     0,    23,   307,   132,   271,   273,     0,
     275,   288,   274,   136,   156,   289,   142,   119,   153,   151,
     302,     0,     0,   304,     0,   297,     0,    45,     0,     0,
      63,     0,     0,     0,    72,     0,    85,    86,     0,    56,
      80,    82,     0,     0,    53,     0,     0,     0,   208,     0,
       0,     0,     0,   202,     0,     0,     0,   245,     0,   193,
       0,     0,     0,   184,   246,   101,    98,    25,     0,     0,
     323,   315,   321,   319,   322,   317,     0,     0,     0,   287,
     279,   285,     0,   126,   300,   305,   303,    48,     0,     0,
       0,     0,     0,    84,    87,    83,     0,    89,   221,   220,
     219,     0,     0,   206,     0,   205,     0,   209,   247,     0,
       0,   200,   198,   288,     0,   318,   320,   316,     0,   272,
     289,     0,   298,    60,    78,     0,    74,    59,    75,    88,
     222,   223,   203,   207,   201,   199,   276,   312,   324,     0,
     138,     0,     0,     0,     0,     0,   135,    77,     0,   325,
     313,   286,   137,   248,     0,   314
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -462,  -462,  -462,   495,  -462,   547,  -462,   248,  -462,    57,
    -462,  -462,  -462,  -462,   254,   -92,   421,  -462,  -462,  -462,
     237,  -462,   210,  -462,   106,  -462,  -462,  -462,  -462,   121,
    -462,  -462,   -50,  -462,  -462,  -462,  -462,  -462,  -462,   450,
    -462,  -462,   360,  -192,   -84,  -462,    89,   -71,   -41,  -462,
    -462,   -85,   318,  -462,  -462,  -462,  -131,  -462,  -462,   113,
    -462,   260,  -462,  -462,   -68,  -279,  -462,  -139,   269,  -143,
    -195,  -462,  -462,  -462,  -462,  -462,  -462,   320,  -462,  -462,
    -462,  -462,  -462,  -160,   220,  -462,  -462,  -462,  -462,  -462,
      23,   -58,   -77,  -462,  -462,   -91,  -462,  -462,  -462,  -462,
    -462,  -461,    63,  -462,  -462,  -462,    -1,  -462,  -462,    60,
     364,  -462,   264,  -462,   350,  -462,    87,  -462,  -462,  -462,
     514,  -462,  -462,  -462,  -462,  -328
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    19,    20,    21,    22,    71,   246,   247,    23,    64,
      24,   137,    25,    26,    88,   153,   243,    27,    28,    29,
      83,   273,   274,   275,   371,   464,   460,   469,   470,   471,
     276,    30,    92,    31,   240,   241,    32,    33,    34,   147,
      35,   149,   150,    36,   167,   168,   169,    76,   110,   111,
     172,    77,   164,   248,   329,   330,   144,   513,   576,   114,
     254,   255,   341,   104,   177,   249,   125,   126,   250,   251,
     214,   215,   216,   217,   218,   219,   220,   285,   221,   222,
     223,   224,   225,   194,   195,   411,   196,   226,   227,   228,
     229,   230,   128,   129,   130,   131,   132,   133,   134,   135,
     436,   437,   438,   439,   440,    51,   441,   140,   509,   510,
     511,   335,   262,   263,   264,   349,   455,    37,    38,    61,
      62,   442,   506,   580,    69,   233
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     213,    41,   155,   106,    44,    95,    96,    97,   269,    52,
     392,    54,   162,   288,    40,   290,   154,   154,   238,   265,
     118,   575,   127,   456,   380,   170,   163,   583,   170,   174,
     256,   332,   258,   260,    73,   332,   113,   143,   399,   199,
     301,    58,    45,   270,    39,   473,   549,    86,    40,    89,
      55,    46,    42,   231,   465,   301,   293,    98,    93,    56,
      73,    43,   107,   293,   284,   400,   234,   271,   154,   292,
     200,   345,   344,   294,    65,    66,   235,   116,   117,   118,
     294,    47,    59,   141,   142,   376,   175,   568,   466,    57,
     316,   152,   288,   321,    48,   157,   158,    94,   108,   475,
     397,   272,   398,   315,   176,   316,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   383,   492,   266,   515,    60,    75,    49,   346,   253,
     394,   467,   293,   201,   109,   293,    63,   560,   107,   384,
     385,   291,   347,   293,   526,   295,   237,    53,   468,   294,
     395,   396,   294,   333,   339,   452,    67,   508,   453,   454,
     294,   119,   331,   105,    74,   278,    50,   279,   170,   337,
     203,   116,   117,   118,   108,    68,   348,   120,   487,   293,
     340,   430,   296,   331,   336,   319,   433,   379,   159,   342,
     453,   454,   301,   387,    70,   256,   294,   267,   443,   435,
     448,   449,   381,   377,   489,   211,   112,   293,    81,   382,
     109,   540,   388,   204,   205,   206,   499,   480,   389,   476,
      78,    82,    80,   121,   294,   427,    79,   318,   482,   297,
     319,   122,   123,   203,   116,   117,   118,   312,   313,   314,
     315,   574,   316,   498,   484,   485,    87,   388,   326,   298,
      90,   327,   207,   483,   100,   119,   299,   300,   500,    91,
     457,   481,   127,   501,   301,   302,   124,   127,   293,   502,
     503,   120,   570,   431,    99,   154,   204,   205,   206,   102,
     252,   259,   536,    84,    85,   294,   504,   257,   208,   293,
    -324,   505,   283,   538,   115,   103,   293,   303,   304,   305,
     306,   307,   209,   139,   308,   309,   294,   310,   311,   312,
     313,   314,   315,   294,   316,   207,   428,   121,   119,   486,
     293,   499,   535,   136,   374,   122,   123,   375,   138,   293,
     491,   562,   495,   143,   120,   181,   531,   294,   533,   534,
     145,   283,   203,   116,   117,   118,   294,   210,   211,   497,
     517,   208,   181,   319,   527,   212,   402,   319,   528,   542,
     124,   331,   331,   500,   554,   209,   146,   555,   501,   203,
     116,   117,   118,   403,   502,   503,   559,   148,   565,   319,
     121,   331,   151,  -277,   116,   204,   205,   206,   122,   123,
     156,   504,    74,   563,   161,  -324,   505,    73,   581,   118,
     163,   319,   165,   404,   405,   406,   407,   408,   409,   410,
     210,   211,   204,   205,   206,   499,   166,   171,   212,   539,
     173,   178,   179,   124,   207,   180,   181,   119,   197,   198,
     579,   232,   582,   203,   116,   117,   118,   182,   183,   184,
     185,   186,   187,   120,   236,   239,   242,   245,   112,   261,
     268,   207,    15,   277,   119,   280,   281,   500,   282,   289,
     208,   317,   501,   323,   320,   324,   325,   328,   502,   503,
     120,   331,   572,   338,   209,   343,   286,   205,   206,   352,
     351,   372,   393,   373,    73,   504,   429,   208,  -278,   121,
     505,   445,   390,   401,   450,   451,   458,   122,   123,   459,
     461,   209,   462,   463,   472,   479,   478,   399,   203,   116,
     117,   118,   293,   490,   493,   207,   121,   494,   119,   210,
     211,   573,   496,   316,   122,   123,   512,   212,   514,   516,
     507,   518,   124,   519,   120,   520,   521,   522,   524,   523,
     529,   530,  -326,   550,   537,   541,   210,   211,   543,     1,
     544,   287,   205,   206,   212,   545,   546,     2,   547,   124,
     548,   551,   571,   101,     3,   209,   553,   556,     4,   279,
     557,    72,   558,   561,   564,   434,   244,   569,   432,     5,
     121,   577,     6,     7,   578,   474,   532,   585,   122,   123,
     207,   525,   202,   119,     8,     9,   378,   322,   446,   477,
     444,   584,   552,   566,   386,    10,   447,   567,    11,   120,
     210,   211,     1,   350,   160,   334,     0,     0,   212,     0,
       2,     0,     0,   124,     0,     0,   287,     3,     0,    12,
       0,     4,     0,    13,     0,     0,     0,     0,     0,     0,
     209,     0,     5,     0,     0,     6,     7,     0,    14,     0,
       0,     0,     0,     0,    15,   121,   353,     8,     9,     0,
     296,     0,     0,   122,   123,     0,     0,     0,    10,   354,
       0,    11,     0,     0,   355,   356,   357,   358,   359,     0,
     360,     0,     0,     0,     0,   210,   211,     0,   361,     0,
       0,   296,    12,   212,     0,     0,    13,     0,   124,     0,
       0,     0,     0,     0,    16,    17,    18,   297,     0,     0,
       0,    14,     0,     0,   362,     0,   296,    15,     0,     0,
       0,   488,     0,     0,     0,     0,     0,   391,     0,     0,
       0,   363,     0,   364,   365,   300,     0,     0,   297,     0,
     296,     0,   301,   302,     0,     0,     0,     0,   366,     0,
       0,     0,   367,     0,   368,     0,     0,     0,   391,     0,
       0,     0,     0,  -327,   369,     0,   300,    16,    17,    18,
       0,     0,     0,   301,   302,   303,   304,   305,   306,   307,
       0,     0,   308,   309,     0,   310,   311,   312,   313,   314,
     315,   300,   316,     0,     0,     0,     0,     0,   301,  -327,
       0,     0,     0,     0,     0,   370,   303,   304,   305,   306,
     307,     0,     0,   308,   309,   300,   310,   311,   312,   313,
     314,   315,   301,   316,     0,     0,     0,     0,     0,     0,
       0,  -327,  -327,  -327,   306,   307,     0,     0,   308,   309,
       0,   310,   311,   312,   313,   314,   315,     0,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -327,  -327,
       0,     0,  -327,  -327,     0,   310,   311,   312,   313,   314,
     315,     0,   316,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193
};

static const yytype_int16 yycheck[] =
{
     143,     2,    94,    74,     5,    55,    56,    57,   200,    10,
     289,    12,   103,   208,     3,   210,    93,    94,   149,   179,
       6,    51,    80,   351,     3,   110,    12,     3,   113,   113,
     173,     3,   175,   176,    58,     3,    77,    83,   101,    94,
     136,    19,    71,     3,    26,   373,   507,    48,     3,    50,
      71,    80,     3,   145,    27,   136,   115,    58,    94,    80,
      58,     3,     9,   115,   207,   128,    64,    27,   145,   212,
     125,    63,    55,   132,    17,    18,   147,     4,     5,     6,
     132,   110,    60,    84,    85,   277,    55,   548,    61,   110,
     186,    92,   287,   236,    94,    96,    97,   133,    45,   378,
     295,    61,   297,   184,    73,   186,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   281,   401,   181,   452,     3,    37,    94,   120,   170,
     189,   104,   115,   188,    81,   115,   161,   189,     9,   282,
     283,   212,   134,   115,   472,    17,   192,    80,   121,   132,
     293,   294,   132,   125,    90,   130,     0,   125,   165,   166,
     132,    88,   192,    74,   188,   188,    98,   190,   253,   253,
       3,     4,     5,     6,    45,   191,   168,   104,   187,   115,
     116,   320,    54,   192,   252,   192,   325,   278,    99,   257,
     165,   166,   136,    92,   112,   338,   132,   198,   329,   188,
     343,   344,   181,   189,   399,   181,    77,   115,    94,   280,
      81,   490,   111,    46,    47,    48,    25,   125,   117,   379,
       3,   127,   188,   150,   132,   316,   190,   189,    92,   101,
     192,   158,   159,     3,     4,     5,     6,   181,   182,   183,
     184,   569,   186,   435,   387,   388,     3,   111,   189,   121,
     123,   192,    85,   117,   192,    88,   128,   129,    67,   127,
     352,   108,   320,    72,   136,   137,   193,   325,   115,    78,
      79,   104,   551,   323,   125,   352,    46,    47,    48,    97,
     167,   114,   108,    46,    47,   132,    95,   174,   121,   115,
      99,   100,   111,   488,     3,   124,   115,   169,   170,   171,
     172,   173,   135,     3,   176,   177,   132,   179,   180,   181,
     182,   183,   184,   132,   186,    85,   317,   150,    88,   390,
     115,    25,   117,     4,   189,   158,   159,   192,   121,   115,
     401,   117,   189,    83,   104,   192,   479,   132,   481,   482,
      93,   111,     3,     4,     5,     6,   132,   180,   181,   189,
     189,   121,   192,   192,   189,   188,   104,   192,   189,   189,
     193,   192,   192,    67,   189,   135,   188,   192,    72,     3,
       4,     5,     6,   121,    78,    79,   189,     3,   189,   192,
     150,   192,    46,   192,     4,    46,    47,    48,   158,   159,
       3,    95,   188,   536,   188,    99,   100,    58,   189,     6,
      12,   192,   189,   151,   152,   153,   154,   155,   156,   157,
     180,   181,    46,    47,    48,    25,   189,   114,   188,   490,
     126,     4,     4,   193,    85,   189,   192,    88,    46,   131,
     573,     3,   575,     3,     4,     5,     6,   138,   139,   140,
     141,   142,   143,   104,   169,    91,   112,     3,    77,   118,
       3,    85,   112,   125,    88,   188,   188,    67,   188,   186,
     121,    98,    72,    39,   188,    49,   188,    94,    78,    79,
     104,   192,    82,   192,   135,    55,    46,    47,    48,    93,
     188,   120,   189,   188,    58,    95,     3,   121,   192,   150,
     100,     3,   188,   188,   168,   120,   188,   158,   159,   188,
     188,   135,   188,   188,   188,    94,   189,   101,     3,     4,
       5,     6,   115,   188,   104,    85,   150,   187,    88,   180,
     181,   131,     3,   186,   158,   159,    70,   188,    63,   167,
     192,     6,   193,     6,   104,     6,     6,     6,   104,   120,
     189,   189,     0,     3,   189,   189,   180,   181,   189,     7,
      99,   121,    47,    48,   188,    78,    78,    15,    78,   193,
      99,   126,     6,    68,    22,   135,   189,   189,    26,   190,
     189,    24,   189,   189,   189,   327,   155,   188,   324,    37,
     150,   189,    40,    41,   188,   375,   480,   189,   158,   159,
      85,   470,   142,    88,    52,    53,   278,   237,   338,   379,
     331,   578,   515,   543,   284,    63,   342,   544,    66,   104,
     180,   181,     7,   263,   100,   251,    -1,    -1,   188,    -1,
      15,    -1,    -1,   193,    -1,    -1,   121,    22,    -1,    87,
      -1,    26,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    37,    -1,    -1,    40,    41,    -1,   106,    -1,
      -1,    -1,    -1,    -1,   112,   150,    11,    52,    53,    -1,
      54,    -1,    -1,   158,   159,    -1,    -1,    -1,    63,    24,
      -1,    66,    -1,    -1,    29,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    -1,    -1,   180,   181,    -1,    43,    -1,
      -1,    54,    87,   188,    -1,    -1,    91,    -1,   193,    -1,
      -1,    -1,    -1,    -1,   162,   163,   164,   101,    -1,    -1,
      -1,   106,    -1,    -1,    69,    -1,    54,   112,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,
      -1,    86,    -1,    88,    89,   129,    -1,    -1,   101,    -1,
      54,    -1,   136,   137,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,   107,    -1,   109,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,   101,   119,    -1,   129,   162,   163,   164,
      -1,    -1,    -1,   136,   137,   169,   170,   171,   172,   173,
      -1,    -1,   176,   177,    -1,   179,   180,   181,   182,   183,
     184,   129,   186,    -1,    -1,    -1,    -1,    -1,   136,   137,
      -1,    -1,    -1,    -1,    -1,   160,   169,   170,   171,   172,
     173,    -1,    -1,   176,   177,   129,   179,   180,   181,   182,
     183,   184,   136,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,   170,   171,   172,   173,    -1,    -1,   176,   177,
      -1,   179,   180,   181,   182,   183,   184,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
      -1,    -1,   176,   177,    -1,   179,   180,   181,   182,   183,
     184,    -1,   186,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    87,    91,   106,   112,   162,   163,   164,   195,
     196,   197,   198,   202,   204,   206,   207,   211,   212,   213,
     225,   227,   230,   231,   232,   234,   237,   311,   312,    26,
       3,   300,     3,     3,   300,    71,    80,   110,    94,    94,
      98,   299,   300,    80,   300,    71,    80,   110,    19,    60,
       3,   313,   314,   161,   203,   203,   203,     0,   191,   318,
     112,   199,   199,    58,   188,   240,   241,   245,     3,   190,
     188,    94,   127,   214,   214,   214,   300,     3,   208,   300,
     123,   127,   226,    94,   133,   226,   226,   226,   300,   125,
     192,   197,    97,   124,   257,   240,   241,     9,    45,    81,
     242,   243,    77,   242,   253,     3,     4,     5,     6,    88,
     104,   150,   158,   159,   193,   260,   261,   285,   286,   287,
     288,   289,   290,   291,   292,   293,     4,   205,   121,     3,
     301,   300,   300,    83,   250,    93,   188,   233,     3,   235,
     236,    46,   300,   209,   286,   209,     3,   300,   300,   240,
     314,   188,   289,    12,   246,   189,   189,   238,   239,   240,
     245,   114,   244,   126,   238,    55,    73,   258,     4,     4,
     189,   192,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   277,   278,   280,    46,   131,    94,
     125,   188,   233,     3,    46,    47,    48,    85,   121,   135,
     180,   181,   188,   263,   264,   265,   266,   267,   268,   269,
     270,   272,   273,   274,   275,   276,   281,   282,   283,   284,
     285,   209,     3,   319,    64,   241,   169,   192,   250,    91,
     228,   229,   112,   210,   210,     3,   200,   201,   247,   259,
     262,   263,   253,   242,   254,   255,   263,   253,   263,   114,
     263,   118,   306,   307,   308,   277,   285,   300,     3,   237,
       3,    27,    61,   215,   216,   217,   224,   125,   188,   190,
     188,   188,   188,   111,   263,   271,    46,   121,   264,   186,
     264,   241,   263,   115,   132,    17,    54,   101,   121,   128,
     129,   136,   137,   169,   170,   171,   172,   173,   176,   177,
     179,   180,   181,   182,   183,   184,   186,    98,   189,   192,
     188,   263,   236,    39,    49,   188,   189,   192,    94,   248,
     249,   192,     3,   125,   304,   305,   258,   238,   192,    90,
     116,   256,   258,    55,    55,    63,   120,   134,   168,   309,
     308,   188,    93,    11,    24,    29,    30,    31,    32,    33,
      35,    43,    69,    86,    88,    89,   103,   107,   109,   119,
     160,   218,   120,   188,   189,   192,   237,   189,   246,   289,
       3,   181,   241,   277,   263,   263,   271,    92,   111,   117,
     188,   121,   259,   189,   189,   263,   263,   264,   264,   101,
     128,   188,   104,   121,   151,   152,   153,   154,   155,   156,
     157,   279,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   289,   300,     3,
     261,   226,   208,   261,   201,   188,   294,   295,   296,   297,
     298,   300,   315,   250,   262,     3,   255,   306,   263,   263,
     168,   120,   130,   165,   166,   310,   319,   209,   188,   188,
     220,   188,   188,   188,   219,    27,    61,   104,   121,   221,
     222,   223,   188,   319,   216,   259,   277,   278,   189,    94,
     125,   108,    92,   117,   263,   263,   241,   187,   115,   264,
     188,   241,   259,   104,   187,   189,     3,   189,   237,    25,
      67,    72,    78,    79,    95,   100,   316,   192,   125,   302,
     303,   304,    70,   251,    63,   319,   167,   189,     6,     6,
       6,     6,     6,   120,   104,   223,   319,   189,   189,   189,
     189,   263,   218,   263,   263,   117,   108,   189,   264,   241,
     259,   189,   189,   189,    99,    78,    78,    78,    99,   295,
       3,   126,   310,   189,   189,   192,   189,   189,   189,   189,
     189,   189,   117,   263,   189,   189,   303,   296,   295,   188,
     259,     6,    82,   131,   319,    51,   252,   189,   188,   263,
     317,   189,   263,     3,   284,   189
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   194,   195,   196,   196,   197,   197,   197,   197,   197,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     199,   199,   200,   200,   201,   201,   202,   202,   202,   203,
     203,   204,   205,   206,   206,   207,   207,   208,   209,   210,
     210,   211,   212,   212,   212,   213,   213,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   219,   219,   220,   220,   220,
     221,   221,   222,   222,   223,   223,   223,   223,   224,   224,
     225,   225,   225,   225,   226,   226,   227,   228,   229,   230,
     231,   232,   232,   233,   233,   234,   235,   235,   236,   237,
     237,   237,   238,   238,   239,   239,   240,   240,   241,   241,
     242,   243,   243,   243,   244,   244,   245,   246,   246,   247,
     248,   248,   249,   250,   250,   251,   251,   252,   252,   253,
     253,   254,   254,   255,   256,   256,   256,   257,   257,   258,
     258,   258,   258,   258,   258,   259,   259,   260,   260,   261,
     261,   262,   263,   263,   263,   263,   263,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   265,   265,
     266,   266,   266,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   268,   268,   269,   269,
     269,   269,   270,   270,   270,   270,   271,   271,   272,   272,
     273,   273,   273,   273,   273,   273,   273,   273,   274,   274,
     274,   274,   275,   276,   277,   277,   277,   277,   277,   277,
     278,   278,   278,   278,   278,   278,   279,   279,   279,   279,
     279,   279,   279,   280,   280,   281,   282,   283,   284,   284,
     284,   284,   285,   285,   285,   285,   285,   285,   285,   286,
     287,   287,   288,   288,   289,   290,   291,   292,   292,   292,
     293,   294,   294,   295,   295,   296,   296,   297,   297,   298,
     299,   300,   300,   301,   301,   302,   302,   303,   303,   304,
     304,   305,   305,   306,   306,   307,   307,   308,   308,   309,
     309,   309,   309,   310,   310,   310,   311,   311,   312,   313,
     313,   314,   315,   315,   315,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   317,   318,   318,   319,   319
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     3,     2,     8,     7,     6,     9,     7,
       3,     0,     1,     3,     1,     1,     3,     1,     1,     4,
       4,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     4,     3,     0,     5,     3,     0,
       1,     0,     1,     2,     2,     1,     1,     2,     5,     4,
       4,     4,     3,     4,     2,     0,     5,     1,     4,     4,
       2,     8,     5,     3,     0,     5,     1,     3,     3,     2,
       2,     6,     1,     1,     1,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     0,     7,     1,     0,     1,
       1,     0,     2,     2,     0,     4,     0,     2,     0,     3,
       0,     1,     3,     2,     1,     1,     0,     2,     0,     2,
       2,     4,     2,     4,     0,     1,     3,     1,     0,     1,
       3,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       5,     5,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       1,     1,     3,     1,     1,     1,     4,     1,     3,     2,
       1,     1,     3,     1,     0,     1,     5,     1,     0,     2,
       1,     1,     0,     1,     0,     1,     2,     3,     5,     1,
       3,     1,     2,     2,     1,     0,     1,     0,     2,     1,
       3,     3,     4,     6,     8,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (result);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 169 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2050 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 169 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2056 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 167 "bison_parser.y"
                { }
#line 2062 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 167 "bison_parser.y"
                { }
#line 2068 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2081 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2087 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).statement)); }
#line 2093 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2106 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2119 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2125 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).transaction_stmt)); }
#line 2131 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).prep_stmt)); }
#line 2137 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 169 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2143 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).exec_stmt)); }
#line 2149 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).import_stmt)); }
#line 2155 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 167 "bison_parser.y"
                { }
#line 2161 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 169 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2167 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 167 "bison_parser.y"
                { }
#line 2173 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).export_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).show_stmt)); }
#line 2185 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).create_stmt)); }
#line 2191 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 167 "bison_parser.y"
                { }
#line 2197 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem_commalist: /* table_elem_commalist  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2210 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_elem: /* table_elem  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table_element_t)); }
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).column_t)); }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 167 "bison_parser.y"
                { }
#line 2228 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_time_precision: /* opt_time_precision  */
#line 167 "bison_parser.y"
                { }
#line 2234 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_decimal_specification: /* opt_decimal_specification  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).ival_pair)); }
#line 2240 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_constraints: /* opt_column_constraints  */
#line 167 "bison_parser.y"
                { }
#line 2246 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint_list: /* column_constraint_list  */
#line 167 "bison_parser.y"
                { }
#line 2252 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_constraint: /* column_constraint  */
#line 167 "bison_parser.y"
                { }
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_constraint: /* table_constraint  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table_constraint_t)); }
#line 2264 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).drop_stmt)); }
#line 2270 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 167 "bison_parser.y"
                { }
#line 2276 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_statement: /* alter_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).alter_stmt)); }
#line 2282 "bison_parser.cpp"
        break;

    case YYSYMBOL_alter_action: /* alter_action  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).alter_action_t)); }
#line 2288 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_action: /* drop_action  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).drop_action_t)); }
#line 2294 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2300 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).delete_stmt)); }
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).insert_stmt)); }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2325 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).update_stmt)); }
#line 2331 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2344 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).update_t)); }
#line 2350 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2356 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2362 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2368 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2374 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2380 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2386 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).set_operator_t)); }
#line 2392 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 167 "bison_parser.y"
                { }
#line 2398 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).select_stmt)); }
#line 2404 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 167 "bison_parser.y"
                { }
#line 2410 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2423 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2429 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2435 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2441 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).group_t)); }
#line 2447 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_having: /* opt_having  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2453 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2466 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2479 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).order)); }
#line 2485 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 167 "bison_parser.y"
                { }
#line 2491 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2497 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).limit)); }
#line 2503 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2529 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2542 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2548 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2554 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2560 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2566 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2572 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2578 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2584 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2590 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2596 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2602 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2608 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2614 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2620 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2626 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2632 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 167 "bison_parser.y"
                { }
#line 2638 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field_plural: /* datetime_field_plural  */
#line 167 "bison_parser.y"
                { }
#line 2644 "bison_parser.cpp"
        break;

    case YYSYMBOL_day_of_the_week_field: /* day_of_the_week_field  */
#line 167 "bison_parser.y"
                { }
#line 2650 "bison_parser.cpp"
        break;

    case YYSYMBOL_duration_field: /* duration_field  */
#line 167 "bison_parser.y"
                { }
#line 2656 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2662 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2668 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2674 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2680 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2686 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2692 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2698 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2704 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2710 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2716 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2722 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2728 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2734 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2740 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2746 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2752 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2765 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2771 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2777 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 168 "bison_parser.y"
                { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2783 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_index_name: /* opt_index_name  */
#line 169 "bison_parser.y"
                { free( (((*yyvaluep).sval)) ); }
#line 2789 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2795 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2801 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2807 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).alias_t)); }
#line 2813 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause: /* opt_locking_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2819 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_locking_clause_list: /* opt_locking_clause_list  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).locking_clause_vec)); }
#line 2825 "bison_parser.cpp"
        break;

    case YYSYMBOL_locking_clause: /* locking_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).locking_t)); }
#line 2831 "bison_parser.cpp"
        break;

    case YYSYMBOL_row_lock_mode: /* row_lock_mode  */
#line 167 "bison_parser.y"
                { }
#line 2837 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_row_lock_policy: /* opt_row_lock_policy  */
#line 167 "bison_parser.y"
                { }
#line 2843 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2849 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2855 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).with_description_vec)); }
#line 2861 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).with_description_t)); }
#line 2867 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).table)); }
#line 2873 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 167 "bison_parser.y"
                { }
#line 2879 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 178 "bison_parser.y"
                { delete (((*yyvaluep).expr)); }
#line 2885 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 170 "bison_parser.y"
                {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2898 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 77 "bison_parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3006 "bison_parser.cpp"

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list opt_semicolon  */
#line 307 "bison_parser.y"
                                     {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3235 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 326 "bison_parser.y"
                           {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3246 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 332 "bison_parser.y"
                               {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3257 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 339 "bison_parser.y"
                                        {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3266 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 343 "bison_parser.y"
                                 {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3275 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 347 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3281 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 348 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3287 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 349 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3293 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 351 "bison_parser.y"
                                        { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3299 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 352 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3305 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 353 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3311 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 354 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3317 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 355 "bison_parser.y"
                     { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3323 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 356 "bison_parser.y"
                   { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3329 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 357 "bison_parser.y"
                 { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3335 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: alter_statement  */
#line 358 "bison_parser.y"
                  { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3341 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: execute_statement  */
#line 359 "bison_parser.y"
                    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3347 "bison_parser.cpp"
    break;

  case 19: /* preparable_statement: transaction_statement  */
#line 360 "bison_parser.y"
                        { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3353 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 366 "bison_parser.y"
                                        { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3359 "bison_parser.cpp"
    break;

  case 21: /* opt_hints: %empty  */
#line 367 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 3365 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint  */
#line 369 "bison_parser.y"
                 {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3374 "bison_parser.cpp"
    break;

  case 23: /* hint_list: hint_list ',' hint  */
#line 373 "bison_parser.y"
                     {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3383 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER  */
#line 378 "bison_parser.y"
                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3392 "bison_parser.cpp"
    break;

  case 25: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 382 "bison_parser.y"
                                  {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3402 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 392 "bison_parser.y"
                                                      { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3408 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 393 "bison_parser.y"
                                   { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3414 "bison_parser.cpp"
    break;

  case 28: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 394 "bison_parser.y"
                                 { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3420 "bison_parser.cpp"
    break;

  case 31: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 402 "bison_parser.y"
                                                                 {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3430 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER  */
#line 410 "bison_parser.y"
                                                                  {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3439 "bison_parser.cpp"
    break;

  case 34: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 414 "bison_parser.y"
                                              {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3449 "bison_parser.cpp"
    break;

  case 35: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 425 "bison_parser.y"
                                                                        {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3460 "bison_parser.cpp"
    break;

  case 36: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 431 "bison_parser.y"
                                               {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3471 "bison_parser.cpp"
    break;

  case 37: /* file_type: IDENTIFIER  */
#line 438 "bison_parser.y"
                       {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3490 "bison_parser.cpp"
    break;

  case 38: /* file_path: string_literal  */
#line 453 "bison_parser.y"
                           {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3499 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: WITH FORMAT file_type  */
#line 458 "bison_parser.y"
                                      { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3505 "bison_parser.cpp"
    break;

  case 40: /* opt_file_type: %empty  */
#line 459 "bison_parser.y"
              { (yyval.import_type_t) = kImportAuto; }
#line 3511 "bison_parser.cpp"
    break;

  case 41: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 465 "bison_parser.y"
                                                              {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3522 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW TABLES  */
#line 477 "bison_parser.y"
                             { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3528 "bison_parser.cpp"
    break;

  case 43: /* show_statement: SHOW COLUMNS table_name  */
#line 478 "bison_parser.y"
                          {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3538 "bison_parser.cpp"
    break;

  case 44: /* show_statement: DESCRIBE table_name  */
#line 483 "bison_parser.y"
                      {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3548 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 494 "bison_parser.y"
                                                                                         {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3566 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name '(' table_elem_commalist ')'  */
#line 507 "bison_parser.y"
                                                                      {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
}
#line 3579 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 515 "bison_parser.y"
                                                             {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3591 "bison_parser.cpp"
    break;

  case 48: /* create_statement: CREATE INDEX opt_not_exists opt_index_name ON table_name '(' ident_commalist ')'  */
#line 522 "bison_parser.y"
                                                                                   {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3603 "bison_parser.cpp"
    break;

  case 49: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 529 "bison_parser.y"
                                                                            {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3616 "bison_parser.cpp"
    break;

  case 50: /* opt_not_exists: IF NOT EXISTS  */
#line 538 "bison_parser.y"
                               { (yyval.bval) = true; }
#line 3622 "bison_parser.cpp"
    break;

  case 51: /* opt_not_exists: %empty  */
#line 539 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3628 "bison_parser.cpp"
    break;

  case 52: /* table_elem_commalist: table_elem  */
#line 541 "bison_parser.y"
                                  {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3637 "bison_parser.cpp"
    break;

  case 53: /* table_elem_commalist: table_elem_commalist ',' table_elem  */
#line 545 "bison_parser.y"
                                      {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3646 "bison_parser.cpp"
    break;

  case 54: /* table_elem: column_def  */
#line 550 "bison_parser.y"
                        { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3652 "bison_parser.cpp"
    break;

  case 55: /* table_elem: table_constraint  */
#line 551 "bison_parser.y"
                   { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3658 "bison_parser.cpp"
    break;

  case 56: /* column_def: IDENTIFIER column_type opt_column_constraints  */
#line 553 "bison_parser.y"
                                                           {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_vec));
  (yyval.column_t)->setNullableExplicit();
}
#line 3667 "bison_parser.cpp"
    break;

  case 57: /* column_type: BIGINT  */
#line 558 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3673 "bison_parser.cpp"
    break;

  case 58: /* column_type: BOOLEAN  */
#line 559 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3679 "bison_parser.cpp"
    break;

  case 59: /* column_type: CHAR '(' INTVAL ')'  */
#line 560 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3685 "bison_parser.cpp"
    break;

  case 60: /* column_type: CHARACTER_VARYING '(' INTVAL ')'  */
#line 561 "bison_parser.y"
                                   { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3691 "bison_parser.cpp"
    break;

  case 61: /* column_type: DATE  */
#line 562 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3697 "bison_parser.cpp"
    break;

  case 62: /* column_type: DATETIME  */
#line 563 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3703 "bison_parser.cpp"
    break;

  case 63: /* column_type: DECIMAL opt_decimal_specification  */
#line 564 "bison_parser.y"
                                    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3712 "bison_parser.cpp"
    break;

  case 64: /* column_type: DOUBLE  */
#line 568 "bison_parser.y"
         { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3718 "bison_parser.cpp"
    break;

  case 65: /* column_type: FLOAT  */
#line 569 "bison_parser.y"
        { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3724 "bison_parser.cpp"
    break;

  case 66: /* column_type: INT  */
#line 570 "bison_parser.y"
      { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3730 "bison_parser.cpp"
    break;

  case 67: /* column_type: INTEGER  */
#line 571 "bison_parser.y"
          { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3736 "bison_parser.cpp"
    break;

  case 68: /* column_type: LONG  */
#line 572 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3742 "bison_parser.cpp"
    break;

  case 69: /* column_type: REAL  */
#line 573 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3748 "bison_parser.cpp"
    break;

  case 70: /* column_type: SMALLINT  */
#line 574 "bison_parser.y"
           { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3754 "bison_parser.cpp"
    break;

  case 71: /* column_type: TEXT  */
#line 575 "bison_parser.y"
       { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3760 "bison_parser.cpp"
    break;

  case 72: /* column_type: TIME opt_time_precision  */
#line 576 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3766 "bison_parser.cpp"
    break;

  case 73: /* column_type: TIMESTAMP  */
#line 577 "bison_parser.y"
            { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3772 "bison_parser.cpp"
    break;

  case 74: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 578 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3778 "bison_parser.cpp"
    break;

  case 75: /* opt_time_precision: '(' INTVAL ')'  */
#line 580 "bison_parser.y"
                                    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3784 "bison_parser.cpp"
    break;

  case 76: /* opt_time_precision: %empty  */
#line 581 "bison_parser.y"
              { (yyval.ival) = 0; }
#line 3790 "bison_parser.cpp"
    break;

  case 77: /* opt_decimal_specification: '(' INTVAL ',' INTVAL ')'  */
#line 583 "bison_parser.y"
                                                      { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3796 "bison_parser.cpp"
    break;

  case 78: /* opt_decimal_specification: '(' INTVAL ')'  */
#line 584 "bison_parser.y"
                 { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3802 "bison_parser.cpp"
    break;

  case 79: /* opt_decimal_specification: %empty  */
#line 585 "bison_parser.y"
              { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3808 "bison_parser.cpp"
    break;

  case 80: /* opt_column_constraints: column_constraint_list  */
#line 587 "bison_parser.y"
                                                { (yyval.column_constraint_vec) = (yyvsp[0].column_constraint_vec); }
#line 3814 "bison_parser.cpp"
    break;

  case 81: /* opt_column_constraints: %empty  */
#line 588 "bison_parser.y"
              { (yyval.column_constraint_vec) = new std::vector<ConstraintType>(); }
#line 3820 "bison_parser.cpp"
    break;

  case 82: /* column_constraint_list: column_constraint  */
#line 590 "bison_parser.y"
                                           {
  (yyval.column_constraint_vec) = new std::vector<ConstraintType>();
  (yyval.column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
}
#line 3829 "bison_parser.cpp"
    break;

  case 83: /* column_constraint_list: column_constraint_list column_constraint  */
#line 594 "bison_parser.y"
                                           {
  (yyvsp[-1].column_constraint_vec)->push_back((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_vec) = (yyvsp[-1].column_constraint_vec);
}
#line 3838 "bison_parser.cpp"
    break;

  case 84: /* column_constraint: PRIMARY KEY  */
#line 599 "bison_parser.y"
                                { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3844 "bison_parser.cpp"
    break;

  case 85: /* column_constraint: UNIQUE  */
#line 600 "bison_parser.y"
         { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3850 "bison_parser.cpp"
    break;

  case 86: /* column_constraint: NULL  */
#line 601 "bison_parser.y"
       { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3856 "bison_parser.cpp"
    break;

  case 87: /* column_constraint: NOT NULL  */
#line 602 "bison_parser.y"
           { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3862 "bison_parser.cpp"
    break;

  case 88: /* table_constraint: PRIMARY KEY '(' ident_commalist ')'  */
#line 604 "bison_parser.y"
                                                       { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3868 "bison_parser.cpp"
    break;

  case 89: /* table_constraint: UNIQUE '(' ident_commalist ')'  */
#line 605 "bison_parser.y"
                                 { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3874 "bison_parser.cpp"
    break;

  case 90: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 613 "bison_parser.y"
                                                  {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3885 "bison_parser.cpp"
    break;

  case 91: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 619 "bison_parser.y"
                                  {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3896 "bison_parser.cpp"
    break;

  case 92: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 625 "bison_parser.y"
                                {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3906 "bison_parser.cpp"
    break;

  case 93: /* drop_statement: DROP INDEX opt_exists IDENTIFIER  */
#line 631 "bison_parser.y"
                                   {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3916 "bison_parser.cpp"
    break;

  case 94: /* opt_exists: IF EXISTS  */
#line 637 "bison_parser.y"
                       { (yyval.bval) = true; }
#line 3922 "bison_parser.cpp"
    break;

  case 95: /* opt_exists: %empty  */
#line 638 "bison_parser.y"
              { (yyval.bval) = false; }
#line 3928 "bison_parser.cpp"
    break;

  case 96: /* alter_statement: ALTER TABLE opt_exists table_name alter_action  */
#line 645 "bison_parser.y"
                                                                 {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3938 "bison_parser.cpp"
    break;

  case 97: /* alter_action: drop_action  */
#line 651 "bison_parser.y"
                           { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3944 "bison_parser.cpp"
    break;

  case 98: /* drop_action: DROP COLUMN opt_exists IDENTIFIER  */
#line 653 "bison_parser.y"
                                                {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3953 "bison_parser.cpp"
    break;

  case 99: /* delete_statement: DELETE FROM table_name opt_where  */
#line 663 "bison_parser.y"
                                                    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3964 "bison_parser.cpp"
    break;

  case 100: /* truncate_statement: TRUNCATE table_name  */
#line 670 "bison_parser.y"
                                         {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3974 "bison_parser.cpp"
    break;

  case 101: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 681 "bison_parser.y"
                                                                                      {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 3986 "bison_parser.cpp"
    break;

  case 102: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 688 "bison_parser.y"
                                                         {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3998 "bison_parser.cpp"
    break;

  case 103: /* opt_column_list: '(' ident_commalist ')'  */
#line 696 "bison_parser.y"
                                          { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4004 "bison_parser.cpp"
    break;

  case 104: /* opt_column_list: %empty  */
#line 697 "bison_parser.y"
              { (yyval.str_vec) = nullptr; }
#line 4010 "bison_parser.cpp"
    break;

  case 105: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 704 "bison_parser.y"
                                                                                        {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4021 "bison_parser.cpp"
    break;

  case 106: /* update_clause_commalist: update_clause  */
#line 711 "bison_parser.y"
                                        {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4030 "bison_parser.cpp"
    break;

  case 107: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 715 "bison_parser.y"
                                            {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4039 "bison_parser.cpp"
    break;

  case 108: /* update_clause: IDENTIFIER '=' expr  */
#line 720 "bison_parser.y"
                                    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4049 "bison_parser.cpp"
    break;

  case 109: /* select_statement: opt_with_clause select_with_paren  */
#line 730 "bison_parser.y"
                                                     {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4058 "bison_parser.cpp"
    break;

  case 110: /* select_statement: opt_with_clause select_no_paren  */
#line 734 "bison_parser.y"
                                  {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4067 "bison_parser.cpp"
    break;

  case 111: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 738 "bison_parser.y"
                                                                                                 {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 4083 "bison_parser.cpp"
    break;

  case 114: /* select_within_set_operation_no_parentheses: select_clause  */
#line 752 "bison_parser.y"
                                                           { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4089 "bison_parser.cpp"
    break;

  case 115: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 753 "bison_parser.y"
                                                         {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4102 "bison_parser.cpp"
    break;

  case 116: /* select_with_paren: '(' select_no_paren ')'  */
#line 762 "bison_parser.y"
                                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4108 "bison_parser.cpp"
    break;

  case 117: /* select_with_paren: '(' select_with_paren ')'  */
#line 763 "bison_parser.y"
                            { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4114 "bison_parser.cpp"
    break;

  case 118: /* select_no_paren: select_clause opt_order opt_limit opt_locking_clause  */
#line 765 "bison_parser.y"
                                                                       {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec) != nullptr) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4133 "bison_parser.cpp"
    break;

  case 119: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit opt_locking_clause  */
#line 779 "bison_parser.y"
                                                                                                {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4149 "bison_parser.cpp"
    break;

  case 120: /* set_operator: set_type opt_all  */
#line 791 "bison_parser.y"
                                {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4158 "bison_parser.cpp"
    break;

  case 121: /* set_type: UNION  */
#line 796 "bison_parser.y"
                 {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4167 "bison_parser.cpp"
    break;

  case 122: /* set_type: INTERSECT  */
#line 800 "bison_parser.y"
            {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4176 "bison_parser.cpp"
    break;

  case 123: /* set_type: EXCEPT  */
#line 804 "bison_parser.y"
         {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4185 "bison_parser.cpp"
    break;

  case 124: /* opt_all: ALL  */
#line 809 "bison_parser.y"
              { (yyval.bval) = true; }
#line 4191 "bison_parser.cpp"
    break;

  case 125: /* opt_all: %empty  */
#line 810 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4197 "bison_parser.cpp"
    break;

  case 126: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 812 "bison_parser.y"
                                                                                            {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4211 "bison_parser.cpp"
    break;

  case 127: /* opt_distinct: DISTINCT  */
#line 822 "bison_parser.y"
                        { (yyval.bval) = true; }
#line 4217 "bison_parser.cpp"
    break;

  case 128: /* opt_distinct: %empty  */
#line 823 "bison_parser.y"
              { (yyval.bval) = false; }
#line 4223 "bison_parser.cpp"
    break;

  case 130: /* opt_from_clause: from_clause  */
#line 827 "bison_parser.y"
                              { (yyval.table) = (yyvsp[0].table); }
#line 4229 "bison_parser.cpp"
    break;

  case 131: /* opt_from_clause: %empty  */
#line 828 "bison_parser.y"
              { (yyval.table) = nullptr; }
#line 4235 "bison_parser.cpp"
    break;

  case 132: /* from_clause: FROM table_ref  */
#line 830 "bison_parser.y"
                             { (yyval.table) = (yyvsp[0].table); }
#line 4241 "bison_parser.cpp"
    break;

  case 133: /* opt_where: WHERE expr  */
#line 832 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[0].expr); }
#line 4247 "bison_parser.cpp"
    break;

  case 134: /* opt_where: %empty  */
#line 833 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4253 "bison_parser.cpp"
    break;

  case 135: /* opt_group: GROUP BY expr_list opt_having  */
#line 835 "bison_parser.y"
                                          {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4263 "bison_parser.cpp"
    break;

  case 136: /* opt_group: %empty  */
#line 840 "bison_parser.y"
              { (yyval.group_t) = nullptr; }
#line 4269 "bison_parser.cpp"
    break;

  case 137: /* opt_having: HAVING expr  */
#line 842 "bison_parser.y"
                         { (yyval.expr) = (yyvsp[0].expr); }
#line 4275 "bison_parser.cpp"
    break;

  case 138: /* opt_having: %empty  */
#line 843 "bison_parser.y"
              { (yyval.expr) = nullptr; }
#line 4281 "bison_parser.cpp"
    break;

  case 139: /* opt_order: ORDER BY order_list  */
#line 845 "bison_parser.y"
                                { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4287 "bison_parser.cpp"
    break;

  case 140: /* opt_order: %empty  */
#line 846 "bison_parser.y"
              { (yyval.order_vec) = nullptr; }
#line 4293 "bison_parser.cpp"
    break;

  case 141: /* order_list: order_desc  */
#line 848 "bison_parser.y"
                        {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4302 "bison_parser.cpp"
    break;

  case 142: /* order_list: order_list ',' order_desc  */
#line 852 "bison_parser.y"
                            {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4311 "bison_parser.cpp"
    break;

  case 143: /* order_desc: expr opt_order_type  */
#line 857 "bison_parser.y"
                                 { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4317 "bison_parser.cpp"
    break;

  case 144: /* opt_order_type: ASC  */
#line 859 "bison_parser.y"
                     { (yyval.order_type) = kOrderAsc; }
#line 4323 "bison_parser.cpp"
    break;

  case 145: /* opt_order_type: DESC  */
#line 860 "bison_parser.y"
       { (yyval.order_type) = kOrderDesc; }
#line 4329 "bison_parser.cpp"
    break;

  case 146: /* opt_order_type: %empty  */
#line 861 "bison_parser.y"
              { (yyval.order_type) = kOrderAsc; }
#line 4335 "bison_parser.cpp"
    break;

  case 147: /* opt_top: TOP int_literal  */
#line 865 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4341 "bison_parser.cpp"
    break;

  case 148: /* opt_top: %empty  */
#line 866 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4347 "bison_parser.cpp"
    break;

  case 149: /* opt_limit: LIMIT expr  */
#line 868 "bison_parser.y"
                       { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4353 "bison_parser.cpp"
    break;

  case 150: /* opt_limit: OFFSET expr  */
#line 869 "bison_parser.y"
              { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4359 "bison_parser.cpp"
    break;

  case 151: /* opt_limit: LIMIT expr OFFSET expr  */
#line 870 "bison_parser.y"
                         { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4365 "bison_parser.cpp"
    break;

  case 152: /* opt_limit: LIMIT ALL  */
#line 871 "bison_parser.y"
            { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4371 "bison_parser.cpp"
    break;

  case 153: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 872 "bison_parser.y"
                        { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4377 "bison_parser.cpp"
    break;

  case 154: /* opt_limit: %empty  */
#line 873 "bison_parser.y"
              { (yyval.limit) = nullptr; }
#line 4383 "bison_parser.cpp"
    break;

  case 155: /* expr_list: expr_alias  */
#line 878 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4392 "bison_parser.cpp"
    break;

  case 156: /* expr_list: expr_list ',' expr_alias  */
#line 882 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4401 "bison_parser.cpp"
    break;

  case 157: /* opt_literal_list: literal_list  */
#line 887 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4407 "bison_parser.cpp"
    break;

  case 158: /* opt_literal_list: %empty  */
#line 888 "bison_parser.y"
              { (yyval.expr_vec) = nullptr; }
#line 4413 "bison_parser.cpp"
    break;

  case 159: /* literal_list: literal  */
#line 890 "bison_parser.y"
                       {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4422 "bison_parser.cpp"
    break;

  case 160: /* literal_list: literal_list ',' literal  */
#line 894 "bison_parser.y"
                           {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4431 "bison_parser.cpp"
    break;

  case 161: /* expr_alias: expr opt_alias  */
#line 899 "bison_parser.y"
                            {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4443 "bison_parser.cpp"
    break;

  case 167: /* operand: '(' expr ')'  */
#line 909 "bison_parser.y"
                       { (yyval.expr) = (yyvsp[-1].expr); }
#line 4449 "bison_parser.cpp"
    break;

  case 177: /* operand: '(' select_no_paren ')'  */
#line 911 "bison_parser.y"
                                         {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4457 "bison_parser.cpp"
    break;

  case 180: /* unary_expr: '-' operand  */
#line 917 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4463 "bison_parser.cpp"
    break;

  case 181: /* unary_expr: NOT operand  */
#line 918 "bison_parser.y"
              { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4469 "bison_parser.cpp"
    break;

  case 182: /* unary_expr: operand ISNULL  */
#line 919 "bison_parser.y"
                 { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4475 "bison_parser.cpp"
    break;

  case 183: /* unary_expr: operand IS NULL  */
#line 920 "bison_parser.y"
                  { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4481 "bison_parser.cpp"
    break;

  case 184: /* unary_expr: operand IS NOT NULL  */
#line 921 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4487 "bison_parser.cpp"
    break;

  case 186: /* binary_expr: operand '-' operand  */
#line 923 "bison_parser.y"
                                              { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4493 "bison_parser.cpp"
    break;

  case 187: /* binary_expr: operand '+' operand  */
#line 924 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4499 "bison_parser.cpp"
    break;

  case 188: /* binary_expr: operand '/' operand  */
#line 925 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4505 "bison_parser.cpp"
    break;

  case 189: /* binary_expr: operand '*' operand  */
#line 926 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4511 "bison_parser.cpp"
    break;

  case 190: /* binary_expr: operand '%' operand  */
#line 927 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4517 "bison_parser.cpp"
    break;

  case 191: /* binary_expr: operand '^' operand  */
#line 928 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4523 "bison_parser.cpp"
    break;

  case 192: /* binary_expr: operand LIKE operand  */
#line 929 "bison_parser.y"
                       { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4529 "bison_parser.cpp"
    break;

  case 193: /* binary_expr: operand NOT LIKE operand  */
#line 930 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4535 "bison_parser.cpp"
    break;

  case 194: /* binary_expr: operand ILIKE operand  */
#line 931 "bison_parser.y"
                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4541 "bison_parser.cpp"
    break;

  case 195: /* binary_expr: operand CONCAT operand  */
#line 932 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4547 "bison_parser.cpp"
    break;

  case 196: /* logic_expr: expr AND expr  */
#line 934 "bison_parser.y"
                           { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4553 "bison_parser.cpp"
    break;

  case 197: /* logic_expr: expr OR expr  */
#line 935 "bison_parser.y"
               { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4559 "bison_parser.cpp"
    break;

  case 198: /* in_expr: operand IN '(' expr_list ')'  */
#line 937 "bison_parser.y"
                                       { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4565 "bison_parser.cpp"
    break;

  case 199: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 938 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4571 "bison_parser.cpp"
    break;

  case 200: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 939 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4577 "bison_parser.cpp"
    break;

  case 201: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 940 "bison_parser.y"
                                         { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4583 "bison_parser.cpp"
    break;

  case 202: /* case_expr: CASE expr case_list END  */
#line 944 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4589 "bison_parser.cpp"
    break;

  case 203: /* case_expr: CASE expr case_list ELSE expr END  */
#line 945 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4595 "bison_parser.cpp"
    break;

  case 204: /* case_expr: CASE case_list END  */
#line 946 "bison_parser.y"
                     { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4601 "bison_parser.cpp"
    break;

  case 205: /* case_expr: CASE case_list ELSE expr END  */
#line 947 "bison_parser.y"
                               { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4607 "bison_parser.cpp"
    break;

  case 206: /* case_list: WHEN expr THEN expr  */
#line 949 "bison_parser.y"
                                { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4613 "bison_parser.cpp"
    break;

  case 207: /* case_list: case_list WHEN expr THEN expr  */
#line 950 "bison_parser.y"
                                { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4619 "bison_parser.cpp"
    break;

  case 208: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 952 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4625 "bison_parser.cpp"
    break;

  case 209: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 953 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4631 "bison_parser.cpp"
    break;

  case 210: /* comp_expr: operand '=' operand  */
#line 955 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4637 "bison_parser.cpp"
    break;

  case 211: /* comp_expr: operand EQUALS operand  */
#line 956 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4643 "bison_parser.cpp"
    break;

  case 212: /* comp_expr: operand NOTEQUALS operand  */
#line 957 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4649 "bison_parser.cpp"
    break;

  case 213: /* comp_expr: operand '<' operand  */
#line 958 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4655 "bison_parser.cpp"
    break;

  case 214: /* comp_expr: operand '>' operand  */
#line 959 "bison_parser.y"
                      { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4661 "bison_parser.cpp"
    break;

  case 215: /* comp_expr: operand LESSEQ operand  */
#line 960 "bison_parser.y"
                         { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4667 "bison_parser.cpp"
    break;

  case 216: /* comp_expr: operand GREATEREQ operand  */
#line 961 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4673 "bison_parser.cpp"
    break;

  case 217: /* comp_expr: operand IS day_of_the_week_field  */
#line 962 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeOpBinaryDOW((yyvsp[-2].expr), (yyvsp[0].day_of_the_week_field)); }
#line 4679 "bison_parser.cpp"
    break;

  case 218: /* function_expr: IDENTIFIER '(' ')'  */
#line 964 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4685 "bison_parser.cpp"
    break;

  case 219: /* function_expr: IDENTIFIER '(' int_literal datetime_field_plural ')'  */
#line 965 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-2].expr), (yyvsp[-1].datetime_field)); }
#line 4691 "bison_parser.cpp"
    break;

  case 220: /* function_expr: IDENTIFIER '(' int_literal datetime_field ')'  */
#line 966 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-2].expr), (yyvsp[-1].datetime_field)); }
#line 4697 "bison_parser.cpp"
    break;

  case 221: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 967 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4703 "bison_parser.cpp"
    break;

  case 222: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 969 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4709 "bison_parser.cpp"
    break;

  case 223: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 971 "bison_parser.y"
                                             { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4715 "bison_parser.cpp"
    break;

  case 224: /* datetime_field: SECOND  */
#line 973 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeSecond; }
#line 4721 "bison_parser.cpp"
    break;

  case 225: /* datetime_field: MINUTE  */
#line 974 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMinute; }
#line 4727 "bison_parser.cpp"
    break;

  case 226: /* datetime_field: HOUR  */
#line 975 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeHour; }
#line 4733 "bison_parser.cpp"
    break;

  case 227: /* datetime_field: DAY  */
#line 976 "bison_parser.y"
      { (yyval.datetime_field) = kDatetimeDay; }
#line 4739 "bison_parser.cpp"
    break;

  case 228: /* datetime_field: MONTH  */
#line 977 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeMonth; }
#line 4745 "bison_parser.cpp"
    break;

  case 229: /* datetime_field: YEAR  */
#line 978 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeYear; }
#line 4751 "bison_parser.cpp"
    break;

  case 230: /* datetime_field_plural: SECONDS  */
#line 980 "bison_parser.y"
                                { (yyval.datetime_field) = kDatetimeSecond; }
#line 4757 "bison_parser.cpp"
    break;

  case 231: /* datetime_field_plural: MINUTES  */
#line 981 "bison_parser.y"
          { (yyval.datetime_field) = kDatetimeMinute; }
#line 4763 "bison_parser.cpp"
    break;

  case 232: /* datetime_field_plural: HOURS  */
#line 982 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeHour; }
#line 4769 "bison_parser.cpp"
    break;

  case 233: /* datetime_field_plural: DAYS  */
#line 983 "bison_parser.y"
       { (yyval.datetime_field) = kDatetimeDay; }
#line 4775 "bison_parser.cpp"
    break;

  case 234: /* datetime_field_plural: MONTHS  */
#line 984 "bison_parser.y"
         { (yyval.datetime_field) = kDatetimeMonth; }
#line 4781 "bison_parser.cpp"
    break;

  case 235: /* datetime_field_plural: YEARS  */
#line 985 "bison_parser.y"
        { (yyval.datetime_field) = kDatetimeYear; }
#line 4787 "bison_parser.cpp"
    break;

  case 236: /* day_of_the_week_field: SUNDAY  */
#line 987 "bison_parser.y"
                              { (yyval.day_of_the_week_field) = kDaySunday; }
#line 4793 "bison_parser.cpp"
    break;

  case 237: /* day_of_the_week_field: MONDAY  */
#line 988 "bison_parser.y"
         { (yyval.day_of_the_week_field) = kDayMonday; }
#line 4799 "bison_parser.cpp"
    break;

  case 238: /* day_of_the_week_field: TUESDAY  */
#line 989 "bison_parser.y"
          { (yyval.day_of_the_week_field) = kDayTuesday; }
#line 4805 "bison_parser.cpp"
    break;

  case 239: /* day_of_the_week_field: WEDNESDAY  */
#line 990 "bison_parser.y"
            { (yyval.day_of_the_week_field) = kDayWednesday; }
#line 4811 "bison_parser.cpp"
    break;

  case 240: /* day_of_the_week_field: THURSDAY  */
#line 991 "bison_parser.y"
           { (yyval.day_of_the_week_field) = kDayThursday; }
#line 4817 "bison_parser.cpp"
    break;

  case 241: /* day_of_the_week_field: FRIDAY  */
#line 992 "bison_parser.y"
         { (yyval.day_of_the_week_field) = kDayFriday; }
#line 4823 "bison_parser.cpp"
    break;

  case 242: /* day_of_the_week_field: SATURDAY  */
#line 993 "bison_parser.y"
           { (yyval.day_of_the_week_field) = kDaySaturday; }
#line 4829 "bison_parser.cpp"
    break;

  case 245: /* array_expr: ARRAY '[' expr_list ']'  */
#line 997 "bison_parser.y"
                                     { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4835 "bison_parser.cpp"
    break;

  case 246: /* array_index: operand '[' int_literal ']'  */
#line 999 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4841 "bison_parser.cpp"
    break;

  case 247: /* between_expr: operand BETWEEN operand AND operand  */
#line 1001 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4847 "bison_parser.cpp"
    break;

  case 248: /* column_name: IDENTIFIER  */
#line 1003 "bison_parser.y"
                         { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4853 "bison_parser.cpp"
    break;

  case 249: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1004 "bison_parser.y"
                            { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4859 "bison_parser.cpp"
    break;

  case 250: /* column_name: '*'  */
#line 1005 "bison_parser.y"
      { (yyval.expr) = Expr::makeStar(); }
#line 4865 "bison_parser.cpp"
    break;

  case 251: /* column_name: IDENTIFIER '.' '*'  */
#line 1006 "bison_parser.y"
                     { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4871 "bison_parser.cpp"
    break;

  case 259: /* string_literal: STRING  */
#line 1010 "bison_parser.y"
                        { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4877 "bison_parser.cpp"
    break;

  case 260: /* bool_literal: TRUE  */
#line 1012 "bison_parser.y"
                    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4883 "bison_parser.cpp"
    break;

  case 261: /* bool_literal: FALSE  */
#line 1013 "bison_parser.y"
        { (yyval.expr) = Expr::makeLiteral(false); }
#line 4889 "bison_parser.cpp"
    break;

  case 262: /* num_literal: FLOATVAL  */
#line 1015 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4895 "bison_parser.cpp"
    break;

  case 264: /* int_literal: INTVAL  */
#line 1018 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4901 "bison_parser.cpp"
    break;

  case 265: /* null_literal: NULL  */
#line 1020 "bison_parser.y"
                    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4907 "bison_parser.cpp"
    break;

  case 266: /* date_literal: DATE STRING  */
#line 1022 "bison_parser.y"
                           {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 4922 "bison_parser.cpp"
    break;

  case 267: /* interval_literal: int_literal duration_field  */
#line 1033 "bison_parser.y"
                                              {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4931 "bison_parser.cpp"
    break;

  case 268: /* interval_literal: INTERVAL STRING datetime_field  */
#line 1037 "bison_parser.y"
                                 {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 4947 "bison_parser.cpp"
    break;

  case 269: /* interval_literal: INTERVAL STRING  */
#line 1048 "bison_parser.y"
                  {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 4983 "bison_parser.cpp"
    break;

  case 270: /* param_expr: '?'  */
#line 1080 "bison_parser.y"
                 {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4993 "bison_parser.cpp"
    break;

  case 272: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1089 "bison_parser.y"
                                                                        {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 5004 "bison_parser.cpp"
    break;

  case 276: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1098 "bison_parser.y"
                                                                                     {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5015 "bison_parser.cpp"
    break;

  case 277: /* table_ref_commalist: table_ref_atomic  */
#line 1105 "bison_parser.y"
                                       {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5024 "bison_parser.cpp"
    break;

  case 278: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1109 "bison_parser.y"
                                           {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5033 "bison_parser.cpp"
    break;

  case 279: /* table_ref_name: table_name opt_table_alias  */
#line 1114 "bison_parser.y"
                                            {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5045 "bison_parser.cpp"
    break;

  case 280: /* table_ref_name_no_alias: table_name  */
#line 1122 "bison_parser.y"
                                     {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5055 "bison_parser.cpp"
    break;

  case 281: /* table_name: IDENTIFIER  */
#line 1128 "bison_parser.y"
                        {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5064 "bison_parser.cpp"
    break;

  case 282: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1132 "bison_parser.y"
                            {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5073 "bison_parser.cpp"
    break;

  case 283: /* opt_index_name: IDENTIFIER  */
#line 1137 "bison_parser.y"
                            { (yyval.sval) = (yyvsp[0].sval); }
#line 5079 "bison_parser.cpp"
    break;

  case 284: /* opt_index_name: %empty  */
#line 1138 "bison_parser.y"
              { (yyval.sval) = nullptr; }
#line 5085 "bison_parser.cpp"
    break;

  case 286: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1140 "bison_parser.y"
                                                            { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5091 "bison_parser.cpp"
    break;

  case 288: /* opt_table_alias: %empty  */
#line 1142 "bison_parser.y"
                                            { (yyval.alias_t) = nullptr; }
#line 5097 "bison_parser.cpp"
    break;

  case 289: /* alias: AS IDENTIFIER  */
#line 1144 "bison_parser.y"
                      { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5103 "bison_parser.cpp"
    break;

  case 290: /* alias: IDENTIFIER  */
#line 1145 "bison_parser.y"
             { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5109 "bison_parser.cpp"
    break;

  case 292: /* opt_alias: %empty  */
#line 1147 "bison_parser.y"
                                { (yyval.alias_t) = nullptr; }
#line 5115 "bison_parser.cpp"
    break;

  case 293: /* opt_locking_clause: opt_locking_clause_list  */
#line 1153 "bison_parser.y"
                                             { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5121 "bison_parser.cpp"
    break;

  case 294: /* opt_locking_clause: %empty  */
#line 1154 "bison_parser.y"
              { (yyval.locking_clause_vec) = nullptr; }
#line 5127 "bison_parser.cpp"
    break;

  case 295: /* opt_locking_clause_list: locking_clause  */
#line 1156 "bison_parser.y"
                                         {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5136 "bison_parser.cpp"
    break;

  case 296: /* opt_locking_clause_list: opt_locking_clause_list locking_clause  */
#line 1160 "bison_parser.y"
                                         {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5145 "bison_parser.cpp"
    break;

  case 297: /* locking_clause: FOR row_lock_mode opt_row_lock_policy  */
#line 1165 "bison_parser.y"
                                                       {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5156 "bison_parser.cpp"
    break;

  case 298: /* locking_clause: FOR row_lock_mode OF ident_commalist opt_row_lock_policy  */
#line 1171 "bison_parser.y"
                                                           {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5167 "bison_parser.cpp"
    break;

  case 299: /* row_lock_mode: UPDATE  */
#line 1178 "bison_parser.y"
                       { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5173 "bison_parser.cpp"
    break;

  case 300: /* row_lock_mode: NO KEY UPDATE  */
#line 1179 "bison_parser.y"
                { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5179 "bison_parser.cpp"
    break;

  case 301: /* row_lock_mode: SHARE  */
#line 1180 "bison_parser.y"
        { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5185 "bison_parser.cpp"
    break;

  case 302: /* row_lock_mode: KEY SHARE  */
#line 1181 "bison_parser.y"
            { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5191 "bison_parser.cpp"
    break;

  case 303: /* opt_row_lock_policy: SKIP LOCKED  */
#line 1183 "bison_parser.y"
                                  { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5197 "bison_parser.cpp"
    break;

  case 304: /* opt_row_lock_policy: NOWAIT  */
#line 1184 "bison_parser.y"
         { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5203 "bison_parser.cpp"
    break;

  case 305: /* opt_row_lock_policy: %empty  */
#line 1185 "bison_parser.y"
              { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5209 "bison_parser.cpp"
    break;

  case 307: /* opt_with_clause: %empty  */
#line 1191 "bison_parser.y"
                                            { (yyval.with_description_vec) = nullptr; }
#line 5215 "bison_parser.cpp"
    break;

  case 308: /* with_clause: WITH with_description_list  */
#line 1193 "bison_parser.y"
                                         { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5221 "bison_parser.cpp"
    break;

  case 309: /* with_description_list: with_description  */
#line 1195 "bison_parser.y"
                                         {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5230 "bison_parser.cpp"
    break;

  case 310: /* with_description_list: with_description_list ',' with_description  */
#line 1199 "bison_parser.y"
                                             {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5239 "bison_parser.cpp"
    break;

  case 311: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1204 "bison_parser.y"
                                                   {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5249 "bison_parser.cpp"
    break;

  case 312: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1214 "bison_parser.y"
                                                                     {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5261 "bison_parser.cpp"
    break;

  case 313: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1221 "bison_parser.y"
                                                                         {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5274 "bison_parser.cpp"
    break;

  case 314: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1229 "bison_parser.y"
                                                                                 {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 5294 "bison_parser.cpp"
    break;

  case 315: /* opt_join_type: INNER  */
#line 1245 "bison_parser.y"
                      { (yyval.join_type) = kJoinInner; }
#line 5300 "bison_parser.cpp"
    break;

  case 316: /* opt_join_type: LEFT OUTER  */
#line 1246 "bison_parser.y"
             { (yyval.join_type) = kJoinLeft; }
#line 5306 "bison_parser.cpp"
    break;

  case 317: /* opt_join_type: LEFT  */
#line 1247 "bison_parser.y"
       { (yyval.join_type) = kJoinLeft; }
#line 5312 "bison_parser.cpp"
    break;

  case 318: /* opt_join_type: RIGHT OUTER  */
#line 1248 "bison_parser.y"
              { (yyval.join_type) = kJoinRight; }
#line 5318 "bison_parser.cpp"
    break;

  case 319: /* opt_join_type: RIGHT  */
#line 1249 "bison_parser.y"
        { (yyval.join_type) = kJoinRight; }
#line 5324 "bison_parser.cpp"
    break;

  case 320: /* opt_join_type: FULL OUTER  */
#line 1250 "bison_parser.y"
             { (yyval.join_type) = kJoinFull; }
#line 5330 "bison_parser.cpp"
    break;

  case 321: /* opt_join_type: OUTER  */
#line 1251 "bison_parser.y"
        { (yyval.join_type) = kJoinFull; }
#line 5336 "bison_parser.cpp"
    break;

  case 322: /* opt_join_type: FULL  */
#line 1252 "bison_parser.y"
       { (yyval.join_type) = kJoinFull; }
#line 5342 "bison_parser.cpp"
    break;

  case 323: /* opt_join_type: CROSS  */
#line 1253 "bison_parser.y"
        { (yyval.join_type) = kJoinCross; }
#line 5348 "bison_parser.cpp"
    break;

  case 324: /* opt_join_type: %empty  */
#line 1254 "bison_parser.y"
                       { (yyval.join_type) = kJoinInner; }
#line 5354 "bison_parser.cpp"
    break;

  case 328: /* ident_commalist: IDENTIFIER  */
#line 1265 "bison_parser.y"
                             {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5363 "bison_parser.cpp"
    break;

  case 329: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1269 "bison_parser.y"
                                 {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5372 "bison_parser.cpp"
    break;


#line 5376 "bison_parser.cpp"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1275 "bison_parser.y"

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
