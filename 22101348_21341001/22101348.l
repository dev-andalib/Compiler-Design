%option noyywrap

%{
#include<bits/stdc++.h>

#include"symbol_info.h"

#define YYSTYPE symbol_info*

#include "y.tab.h"

extern YYSTYPE yylval;

using namespace std;

void yyerror(char *);


string loglist;

extern int lines;

extern ofstream outlog;

%}

/* Regular Definitions */

delim	 [ \t\v\r]

/* write regular expressions for whitespace and newline */
ws	{delim}+
newline [\n] 

letter_	 [A-Za-z_]
digit	 [0-9]

/* write regular expressions for id, float and integers */
id        [a-zA-Z_][a-zA-Z0-9_]*
digit     [0-9]
integer  {digit}+
float     ({digit}*"."{digit}+([Ee][+-]?{digit}+)?|{digit}+"."([Ee][+-]?{digit}+)?|"."{digit}+([Ee][+-]?{digit}+)?|{digit}+[Ee][+-]?{digit}+)



%%

{ws}		{ /* ignore whitespace */ }
{newline}	{ lines += 1 }

{id}       {
                symbol_info *s = new symbol_info((string)yytext,"ID");
                yylval = (YYSTYPE)s;
                loglist="Line no "+to_string(lines)+": Token <ID> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;
                return ID;
            }

if          { 
                loglist="Line no "+to_string(lines)+": Token <IF> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;
                return IF; 
            }

else        {

            loglist="Line no "+to_string(lines)+": Token <ELSE> Lexeme "+yytext+" found"+"\n"+"\n";
			outlog<<loglist;
            return ELSE; 
            
            
            }

while       { 
                loglist="Line no "+to_string(lines)+": Token <WHILE> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist; 
                return WHILE; }

for       {
                loglist = "Line no " + to_string(lines) + ": Token <FOR> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return FOR;
          }

do        {
                loglist = "Line no " + to_string(lines) + ": Token <DO> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return DO;
          }

int       {
                loglist = "Line no " + to_string(lines) + ": Token <INT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return INT;
          }

float     {
                loglist = "Line no " + to_string(lines) + ": Token <FLOAT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return FLOAT;
          }

void      {
                loglist = "Line no " + to_string(lines) + ": Token <VOID> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return VOID;
          }

switch    {
                loglist = "Line no " + to_string(lines) + ": Token <SWITCH> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return SWITCH;
          }

default   {
                loglist = "Line no " + to_string(lines) + ": Token <DEFAULT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return DEFAULT;
          }

goto      {
                loglist = "Line no " + to_string(lines) + ": Token <GOTO> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return GOTO;
          }

break     {
                loglist = "Line no " + to_string(lines) + ": Token <BREAK> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return BREAK;
          }

char      {
                loglist = "Line no " + to_string(lines) + ": Token <CHAR> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CHAR;
          }

double    {
                loglist = "Line no " + to_string(lines) + ": Token <DOUBLE> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return DOUBLE;
          }

return    {
                loglist = "Line no " + to_string(lines) + ": Token <RETURN> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return RETURN;
          }

case      {
                loglist = "Line no " + to_string(lines) + ": Token <CASE> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CASE;
          }

continue  {
                loglist = "Line no " + to_string(lines) + ": Token <CONTINUE> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CONTINUE;
          }

printf    {
                loglist = "Line no " + to_string(lines) + ": Token <PRINTF> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return PRINTF;
          }

"+"|"-"	    {
                symbol_info *s = new symbol_info((string)yytext,"ADDOP");
                yylval = (YYSTYPE)s;
                loglist="Line no "+to_string(lines)+": Token <ADDOP> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;
                return ADDOP;
		    }

","        { 
                loglist="Line no "+to_string(lines)+": Token <COMMA> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;               
                return COMMA; }
                

{float}       {
                symbol_info *s = new symbol_info((string)yytext,"CONST_FLOAT");
                yylval = (YYSTYPE)s;
                loglist = "Line no " + to_string(lines) + ": Token <CONST_FLOAT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CONST_FLOAT;
            }

{integer}       {
                symbol_info *s = new symbol_info((string)yytext,"CONST_INT");
                yylval = (YYSTYPE)s;
                loglist = "Line no " + to_string(lines) + ": Token <CONST_INT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CONST_INT;
            }

%option noyywrap

%{
#include<bits/stdc++.h>

#include"symbol_info.h"

#define YYSTYPE symbol_info*

#include "y.tab.h"

extern YYSTYPE yylval;

using namespace std;

void yyerror(char *);


string loglist;

extern int lines;

extern ofstream outlog;

%}

/* Regular Definitions */

delim	 [ \t\v\r]

/* write regular expressions for whitespace and newline */
ws	{delim}+
newline [\n] 

letter_	 [A-Za-z_]
digit	 [0-9]

/* write regular expressions for id, float and integers */
id        [a-zA-Z_][a-zA-Z0-9_]*
digit     [0-9]
integer  {digit}+
float     ({digit}*"."{digit}+([Ee][+-]?{digit}+)?|{digit}+"."([Ee][+-]?{digit}+)?|"."{digit}+([Ee][+-]?{digit}+)?|{digit}+[Ee][+-]?{digit}+)



%%

{ws}		{ /* ignore whitespace */ }
{newline}	{ lines += 1 }

if          { 
                loglist="Line no "+to_string(lines)+": Token <IF> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;
                return IF; 
            }

else        {

            loglist="Line no "+to_string(lines)+": Token <ELSE> Lexeme "+yytext+" found"+"\n"+"\n";
			outlog<<loglist;
            return ELSE; 
            
            
            }

while       { 
                loglist="Line no "+to_string(lines)+": Token <WHILE> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist; 
                return WHILE; }

for       {
                loglist = "Line no " + to_string(lines) + ": Token <FOR> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return FOR;
          }

do        {
                loglist = "Line no " + to_string(lines) + ": Token <DO> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return DO;
          }

int       {
                loglist = "Line no " + to_string(lines) + ": Token <INT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return INT;
          }

float     {
                loglist = "Line no " + to_string(lines) + ": Token <FLOAT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return FLOAT;
          }

void      {
                loglist = "Line no " + to_string(lines) + ": Token <VOID> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return VOID;
          }

switch    {
                loglist = "Line no " + to_string(lines) + ": Token <SWITCH> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return SWITCH;
          }

default   {
                loglist = "Line no " + to_string(lines) + ": Token <DEFAULT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return DEFAULT;
          }

goto      {
                loglist = "Line no " + to_string(lines) + ": Token <GOTO> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return GOTO;
          }

break     {
                loglist = "Line no " + to_string(lines) + ": Token <BREAK> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return BREAK;
          }

char      {
                loglist = "Line no " + to_string(lines) + ": Token <CHAR> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CHAR;
          }

double    {
                loglist = "Line no " + to_string(lines) + ": Token <DOUBLE> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return DOUBLE;
          }

return    {
                loglist = "Line no " + to_string(lines) + ": Token <RETURN> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return RETURN;
          }

case      {
                loglist = "Line no " + to_string(lines) + ": Token <CASE> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CASE;
          }

continue  {
                loglist = "Line no " + to_string(lines) + ": Token <CONTINUE> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CONTINUE;
          }

printf    {
                loglist = "Line no " + to_string(lines) + ": Token <PRINTF> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return PRINTF;
          }

"+"|"-"	    {
                symbol_info *s = new symbol_info((string)yytext,"ADDOP");
                yylval = (YYSTYPE)s;
                loglist="Line no "+to_string(lines)+": Token <ADDOP> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;
                return ADDOP;
		    }

","        { 
                loglist="Line no "+to_string(lines)+": Token <COMMA> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;               
                return COMMA; }
                

{float}       {
                symbol_info *s = new symbol_info((string)yytext,"CONST_FLOAT");
                yylval = (YYSTYPE)s;
                loglist = "Line no " + to_string(lines) + ": Token <CONST_FLOAT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CONST_FLOAT;
            }

{integer}       {
                symbol_info *s = new symbol_info((string)yytext,"CONST_INT");
                yylval = (YYSTYPE)s;
                loglist = "Line no " + to_string(lines) + ": Token <CONST_INT> Lexeme " + yytext + " found\n\n";
                outlog << loglist;
                return CONST_INT;
            }

{id}       {
                symbol_info *s = new symbol_info((string)yytext,"ID");
                yylval = (YYSTYPE)s;
                loglist="Line no "+to_string(lines)+": Token <ID> Lexeme "+yytext+" found"+"\n"+"\n";
			    outlog<<loglist;
                return ID;
            }
      



%%