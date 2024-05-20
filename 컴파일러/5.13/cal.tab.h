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
     TIDENT = 258,
     TNUMBER = 259,
     TCONST = 260,
     TELSE = 261,
     TIF = 262,
     TINT = 263,
     TRETURN = 264,
     TVOID = 265,
     TWHILE = 266,
     TADD_ASSIGN = 267,
     TSUB_ASSIGN = 268,
     TMUL_ASSIGN = 269,
     TDIV_ASSIGN = 270,
     TMOD_ASSIGN = 271,
     TOR = 272,
     TAND = 273,
     TEQUAL = 274,
     TNOTEQUAL = 275,
     TGREATE = 276,
     TLESSE = 277,
     TINC = 278,
     TDEC = 279
   };
#endif
/* Tokens.  */
#define TIDENT 258
#define TNUMBER 259
#define TCONST 260
#define TELSE 261
#define TIF 262
#define TINT 263
#define TRETURN 264
#define TVOID 265
#define TWHILE 266
#define TADD_ASSIGN 267
#define TSUB_ASSIGN 268
#define TMUL_ASSIGN 269
#define TDIV_ASSIGN 270
#define TMOD_ASSIGN 271
#define TOR 272
#define TAND 273
#define TEQUAL 274
#define TNOTEQUAL 275
#define TGREATE 276
#define TLESSE 277
#define TINC 278
#define TDEC 279




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

