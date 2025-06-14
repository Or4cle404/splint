char firstchar1 (/*@null@*/ char *s)
{
return *s;
}
char firstchar2 (/*@null@*/ char *s)
{
if (s == NULL) return '\0';
return *s;
}
