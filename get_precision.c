#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * get_precision - Calculates the precision for printing and returns the
 * result to the stdout
 * @format: Formatted string in which to print the arguments
=======
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments.
>>>>>>> bbbd157c3c7d50114dcd9ab1c830fce2e71064f6
=======
 * get_precision - Calculates the precision for printing and returns the
 * result to the stdout
 * @format: Formatted string in which to print the arguments
>>>>>>> 353eb55bd247b39006481c28b83e246df3504ab2
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);

	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (precision);
}
