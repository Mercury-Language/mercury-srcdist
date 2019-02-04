/* A Bison parser, made by GNU Bison 1.875d.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EVENT = 258,
     TOKEN_SET = 259,
     TOKEN_IMPURE = 260,
     TOKEN_FUNCTION = 261,
     TOKEN_SYNTHESIZED = 262,
     TOKEN_BY = 263,
     TOKEN_LPAREN = 264,
     TOKEN_RPAREN = 265,
     TOKEN_COLON = 266,
     TOKEN_COMMA = 267,
     TOKEN_ID = 268,
     TOKEN_SYM = 269,
     GARBAGE = 270
   };
#endif
#define TOKEN_EVENT 258
#define TOKEN_SET 259
#define TOKEN_IMPURE 260
#define TOKEN_FUNCTION 261
#define TOKEN_SYNTHESIZED 262
#define TOKEN_BY 263
#define TOKEN_LPAREN 264
#define TOKEN_RPAREN 265
#define TOKEN_COLON 266
#define TOKEN_COMMA 267
#define TOKEN_ID 268
#define TOKEN_SYM 269
#define GARBAGE 270




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 39 "mercury_event_parser.y"
typedef union YYSTYPE {
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
} YYSTYPE;
/* Line 1285 of yacc.c.  */
#line 82 "mercury_event_parser.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE mercury_event_lval;



