#include <iostream>
#include <string.h>

int split(char s[], char s1[][30]);
int lenght(char s[]);
void count_char(char s[], int ch[]);
void print_percent_char(char s[], int ch[]);
void word_count(char s1[][30], int wordCount[], int words);
void print_percent_word(char s1[][30], int wordCount[], int words);
int find(char s1[][30], char s[], int start, int words);

int main()
{
   char s[255];
   std::cout << "Enter a string: ";
   std::cin.getline(s, 255);
   char s1[100][30];
   int ch[27] = {0};
   int wordCount[100] = {0};
   int words = split(s, s1);
   word_count(s1, wordCount, words);
   count_char(s, ch);
   std::cout << "\n=====================";
   std::cout << "\npercent of characters";
   std::cout << "\n=====================";
   print_percent_char(s, ch);
   std::cout << "\n=======================";
   std::cout << "\npercent of words       ";
   std::cout << "\n=======================";
   print_percent_word(s1, wordCount, words);
   return 0;
}
int lenght(char s[])
{
   int i;
   for (i = 0; s[i]; i++)
      return i;
}
int split(char s[], char s1[][30])
{
   int i, word = 0, k = 0;
   for (i = 0; s[i]; i++)
      if (s[i] == ' ')
      {
         s1[word][k] = '\0';
         word++;
         k = 0;
      }
      else
         s1[word][k++] = s[i];
   return word;
}
void count_char(char s[], int ch[])
{
   for (int i = 0; s[i]; i++)
   {
      if (s[i] >= 'a' && s[i] <= 'z')
         ch[(int)(s[i] - 32 - 65)]++;
      else if (s[i] >= 'A' && s[i] <= 'Z')
         ch[s[i] - 65]++;
   }
}
void print_percent_char(char s[], int ch[])
{
   int len = lenght(s);
   for (int i = 0; i < 27; i++)
      if (ch[i] > 0)
         std::cout << "\nPercent " << (char)(i + 97) << " is %" << ch[i] * 100 / len;
}
void print_percent_char(char s[], int ch[])
{
   int len = lenght(s);
   for (int i = 0; i < 27; i++)
      if (ch[i] > 0)
         std::cout << "\nPercent " << (char)(i + 97) << " is %" << ch[i] * 100 / len;
}
int find(char s1[][30], char s[], int start, int words)
{
   int count = 0;
   for (int i = start; i < words; i++)
   {
      if (!strcmp(s1[i], s))
      {
         if (i > start)
            s1[i][0] = '\0';
         count++;
      }
   }
   return count;
}
void word_count(char s1[][30], int wordCount[], int words)
{
   int count;
   for (int i = 0; i < words; i++)
      for (int j = i; j < words; j++)
      {
         count = find(s1, s1[i], j, words);
         if (count)
            wordCount[i] = count;
      }
}
void print_percent_word(char s1[][30], int wordCount[], int words)
{
   for (int i = 0; i < words; i++)
      if (wordCount[i] > 0 && s1[i])
         std::cout << "\n percent " << s1[i] << " is %" << wordCount[i] * 100 / words;
}