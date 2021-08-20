echo "Running tests:"
echo "Testing ex00:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex00/ft_ft.c
echo "function check:"
gcc  -Wall -Wextra -Werror main00.c ./ex00/ft_ft.c -o main00.o && ./main00.o
echo ""
echo "Testing ex01:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex01/ft_ultimate_ft.c
echo "function check:"
gcc  -Wall -Wextra -Werror main01.c  ./ex01/ft_ultimate_ft.c -o main01.o && ./main01.o
echo ""
echo ""
echo "Testing ex02:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex02/ft_swap.c
echo "function check:"
gcc  -Wall -Wextra -Werror main02.c  ./ex02/ft_swap.c -o main02.o && ./main02.o
echo ""
echo ""
echo "Testing ex03:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex03/ft_div_mod.c
echo "function check:"
gcc  -Wall -Wextra -Werror main03.c ./ex03/ft_div_mod.c -o main03.o && ./main03.o
echo ""
echo ""
echo "Testing ex04:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex04/ft_ultimate_div_mod.c
echo "function check:"
gcc  -Wall -Wextra -Werror main04.c ./ex04/ft_ultimate_div_mod.c -o main04.o && ./main04.o
echo ""
echo ""
echo "Testing ex05:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex05/ft_putstr.c
echo "function check:"
gcc  -Wall -Wextra -Werror main05.c ./ex05/ft_putstr.c -o main05.o && ./main05.o
echo ""
echo ""
echo "Testing ex06:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex06/ft_strlen.c
echo "function check:"
gcc  -Wall -Wextra -Werror main06.c ./ex06/ft_strlen.c -o main06.o && ./main06.o
echo ""
echo ""
echo "Testing ex07:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex07/ft_rev_int_tab.c
echo "function check:"
gcc  -Wall -Wextra -Werror main07.c ./ex07/ft_rev_int_tab.c -o main07.o && ./main07.o
echo ""
echo ""
echo "Testing ex08:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex08/ft_sort_int_tab.c
echo "function check:"
gcc  -Wall -Wextra -Werror main08.c ./ex08/ft_sort_int_tab.c -o main08.o && ./main08.o
echo ""
echo ""