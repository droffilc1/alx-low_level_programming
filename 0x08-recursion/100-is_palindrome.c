#include "main.h"

/**
 *check_palindrome - checks string
 *@str: string to be checked
 *@length: string length
 *@i: iterator
 *
 * Retur: 1 if is palindrome. Otherwise 0
 */
int check_palindrome(char *str, int length, int i)
{
	if (i < length && str[i] == str[length])
		return (check_palindrome(str, length -1, i + 1));
	if (str[i] != str[length])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check the length of
 * Return: an integer that displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - checks if string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if a string is a palindrome. Otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s) - 1;

	return (check_palindrome(s, len, i));
}
