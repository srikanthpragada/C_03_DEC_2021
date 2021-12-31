
int count_upper(char st[30])
{
  int i, count = 0;

       for(i = 0; st[i] != '\0'; i++)
       {
           if(isupper(st[i]))
              count ++;
       }
       return count;
}
void main()
{
 int cnt;

    cnt = count_upper("AbcXyzPQR");
    printf("Count = %d", cnt );
}
