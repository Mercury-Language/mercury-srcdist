/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_MERCURY_EVENT_MERCURY_EVENT_PARSER_H_INCLUDED
# define YY_MERCURY_EVENT_MERCURY_EVENT_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int mercury_event_debug;
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
    TOKEN_EVENT = 258,             /* TOKEN_EVENT  */
    TOKEN_SET = 259,               /* TOKEN_SET  */
    TOKEN_IMPURE = 260,            /* TOKEN_IMPURE  */
    TOKEN_FUNCTION = 261,          /* TOKEN_FUNCTION  */
    TOKEN_SYNTHESIZED = 262,       /* TOKEN_SYNTHESIZED  */
    TOKEN_BY = 263,                /* TOKEN_BY  */
    TOKEN_LPAREN = 264,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 265,            /* TOKEN_RPAREN  */
    TOKEN_COLON = 266,             /* TOKEN_COLON  */
    TOKEN_COMMA = 267,             /* TOKEN_COMMA  */
    TOKEN_ID = 268,                /* TOKEN_ID  */
    TOKEN_SYM = 269,               /* TOKEN_SYM  */
    GARBAGE = 270                  /* GARBAGE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "mercury_event_parser.y"

    int                 Uline;
    char                *Uid;
    MR_EventSet         Ufile;
    MR_EventSpecs       Uevents;
    MR_EventSpec        Uevent;
    MR_EventAttrs       Uattrs;
    MR_EventAttr        Uattr;
    MR_CTerm            Uterm;
    MR_CArgs            Uargs;
    MR_FlatTerm         Uflatterm;
    MR_FlatArgs         Uflatargs;
    MR_EventAttrType    Utype;

#line 94 "mercury_event_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE mercury_event_lval;

int mercury_event_parse (void);

#endif /* !YY_MERCURY_EVENT_MERCURY_EVENT_PARSER_H_INCLUDED  */
