#include<stdio.h>
#include "sm.h"
#include<string.h>
int searchFirstOccurrence(char*pattern,char*text)
{
int i,j;
int patLen=strlen(pattern);
int textLen=strlen(text);
int valid;
for(i=0;i<=textLen-patLen;i++)
{
valid=1;
for(j=0;j<patLen &&valid;j++)
{
if(text[i+j]!=pattern[j])
{
valid=0;
}
}
if(valid)
{
return i;
}
}
return -1;
}
int searchLastOccurrence(char*pattern,char*text)
{
int i,j;
int patLen;
patLen=strlen(pattern);
int textLen;
textLen=strlen(text);
int valid;
for(i=textLen-patLen;i>=0;i--)
{
valid=1;
for(j=0;j<patLen&&valid;j++)
{
if(text[i+j]!=pattern[j])
{
valid=0;
}
}
if(valid)
{
return i;
}
}
return -1;
}
int longestPrefix(char*pattern,char*text)
{
int i,j;
int patLen;
patLen=strlen(pattern);
int textLen;
textLen=strlen(text);
int longPre=0;
int tempPre=0;
int valid;
for(i=0;i<=textLen-patLen;i++)
{
valid=1;
tempPre=0;
for(j=0;j<patLen&&valid;j++)
{
if(text[i+j]!=pattern[j])
{
valid=0;
}
else
{
tempPre++;
}
}
if(tempPre>longPre)
{
longPre=tempPre;
}
}
return longPre;
}
int numOccurrences(char*pattern,char*text)
{
int patLen;
patLen=strlen(pattern);
int textLen;
textLen=strlen(text);
int count=0;
int valid;
int i,j;
for(i=0;i<textLen-patLen;i++)
{
valid=1;
for(j=0;j<patLen&&valid;j++)
   {
   if(text[i+j]!=pattern[j])
   {
    valid=0;
   }
   }
if(valid)
{
count++;
}
}
return count;
}
int charactersCompared(char*pattern,char*text)
{
int i,j;
int patLen;
patLen=strlen(pattern);
int textLen;
textLen=strlen(text);
int count=0;
int valid;
for(i=0;i<=textLen-patLen;i++)
{
valid=1;
for(j=0;j<patLen&&valid;j++)
{
count++;
if(text[i+j]!=pattern[j])
{
valid=0;
}
}
}
return count;
}


