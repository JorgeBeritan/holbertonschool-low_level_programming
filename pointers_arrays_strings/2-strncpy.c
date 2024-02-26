char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	
	while (*source && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
