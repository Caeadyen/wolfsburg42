echo "Running tests:"
echo "Testing ex00:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex00/ft_print_program_name.c
echo "function check:"
gcc  -Wall -Wextra -Werror ./ex00/ft_print_program_name.c -o main00.o && ./main00.o "test"
echo "done"
echo ""
echo ""
echo "Testing ex01:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex01/ft_print_params.c
echo "function check:"
gcc  -Wall -Wextra -Werror ./ex01/ft_print_params.c -o main01.o && ./main01.o test1 test2 test3
echo "done"
echo ""
echo "Testing ex02:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex02/ft_rev_params.c
echo "function check:"
gcc  -Wall -Wextra -Werror ./ex02/ft_rev_params.c -o main02.o && ./main02.o test1 test2 test3
echo "done"
echo ""
echo ""
echo "Testing ex03:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex03/ft_sort_params.c
echo "function check:"
gcc  -Wall -Wextra -Werror ./ex03/ft_sort_params.c -o main03.o && ./main03.o zzz test3 111 test2 Abbb 12ab2 test1 bbb aaa
echo "done"
echo ""
echo ""
