
int count_words(char st[30])
{
  int i, count = 0;

       for(i = 0; st[i] != '\0'; i++)
       {
           if(isspace(st[i]))
              count ++;
       }
       return count + 1;
}
void main()
{
 int cnt;

    cnt = count_words("How are you?");
    printf("Count = %d", cnt );
}
