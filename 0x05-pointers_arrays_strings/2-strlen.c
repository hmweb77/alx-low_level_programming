/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int count 
	count = 0;

	while(s[count])
		count = count + 1;

	return (count);
}
