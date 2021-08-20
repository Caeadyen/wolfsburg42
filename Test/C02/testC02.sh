echo "Running tests:"
echo "Testing ex00:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex00/ft_strcpy.c
echo "function check:"
gcc  -Wall -Wextra -Werror main00.c ./ex00/ft_strcpy.c -o main00.o && ./main00.o
echo ""
echo ""
echo "Testing ex01:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex01/ft_strncpy.c
echo "function check:"
gcc  -Wall -Wextra -Werror main01.c  ./ex01/ft_strncpy.c -o main01.o && ./main01.o
echo ""
echo ""
echo "Testing ex02:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex02/ft_str_is_alpha.c
echo "function check:"
gcc  -Wall -Wextra -Werror main02.c  ./ex02/ft_str_is_alpha.c -o main02.o && ./main02.o
echo ""
echo ""
echo "Testing ex03:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex03/ft_str_is_numeric.c
echo "function check:"
gcc  -Wall -Wextra -Werror main03.c  ./ex03/ft_str_is_numeric.c -o main03.o && ./main03.o
echo ""
echo ""
echo "Testing ex04:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex04/ft_str_is_lowercase.c
echo "function check:"
gcc  -Wall -Wextra -Werror main04.c  ./ex04/ft_str_is_lowercase.c -o main04.o && ./main04.o
echo ""
echo ""
echo "Testing ex05:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex05/ft_str_is_uppercase.c
echo "function check:"
gcc  -Wall -Wextra -Werror main05.c  ./ex05/ft_str_is_uppercase.c -o main05.o && ./main05.o
echo ""
echo ""
echo "Testing ex06:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex06/ft_str_is_printable.c
echo "function check:"
gcc  -Wall -Wextra -Werror main06.c  ./ex06/ft_str_is_printable.c -o main06.o && ./main06.o
echo ""
echo ""
echo "Testing ex07:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex07/ft_strupcase.c
echo "function check:"
gcc  -Wall -Wextra -Werror main07.c  ./ex07/ft_strupcase.c -o main07.o && ./main07.o
echo ""
echo ""
echo "Testing ex08:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex08/ft_strlowcase.c
echo "function check:"
gcc  -Wall -Wextra -Werror main08.c  ./ex08/ft_strlowcase.c -o main08.o && ./main08.o
echo ""
echo ""
echo "Testing ex09:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex09/ft_strcapitalize.c
echo "function check:"
gcc  -Wall -Wextra -Werror main09.c  ./ex09/ft_strcapitalize.c -o main09.o && ./main09.o
echo ""
echo ""
echo "Testing ex10:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex10/ft_strlcpy.c
echo "function check:"
gcc  -Wall -Wextra -Werror main10.c  ./ex10/ft_strlcpy.c -o main10.o && ./main10.o
echo ""
echo ""
echo "Testing ex11:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex11/ft_putstr_non_printable.c
echo "function check:"
gcc  -Wall -Wextra -Werror main11.c  ./ex11/ft_putstr_non_printable.c -o main11.o && ./main11.o
echo ""
echo ""
echo "Testing ex12:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex12/ft_print_memory.c
echo "function check:"
gcc  -Wall -Wextra -Werror main12.c  ./ex12/ft_print_memory.c -o main12.o && ./main12.o
echo ""
echo ""