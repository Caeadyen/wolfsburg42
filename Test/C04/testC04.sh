echo "Running tests:"
echo "Testing ex00:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex00/ft_strlen.c
echo "function check:"
gcc  -Wall -Wextra -Werror main00.c ./ex00/ft_strlen.c -o main00.o && ./main00.o
echo ""
echo ""
echo "Testing ex01:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex01/ft_putstr.c
echo "function check:"
gcc  -Wall -Wextra -Werror main01.c ./ex01/ft_putstr.c -o main01.o && ./main01.o
echo ""
echo ""
echo "Testing ex02:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex02/ft_putnbr.c
echo "function check:"
gcc  -Wall -Wextra -Werror main02.c ./ex02/ft_putnbr.c -o main02.o && ./main02.o
echo ""
echo ""
echo "Testing ex03:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex03/ft_atoi.c
echo "function check:"
gcc  -Wall -Wextra -Werror main03.c ./ex03/ft_atoi.c -o main03.o && ./main03.o
echo ""
echo ""
echo "Testing ex04:"
echo "Norminette check:"
norminette -R CheckForbiddenSourceHeader ./ex04/ft_putnbr_base.c
echo "function check:"
gcc  -Wall -Wextra -Werror main04.c ./ex04/ft_putnbr_base.c -o main04.o && ./main04.o
echo ""
echo ""