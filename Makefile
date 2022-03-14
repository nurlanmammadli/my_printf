NAME	= 	libmyprintf.a
SRCS 	=	my_printf.c my_printnbr.c my_utils.c my_printhex.c my_printptr.c my_printunbr.c 
RM		= 	rm -f
OBJS	= 	$(SRCS:.c=.o)

all:		$(NAME) $(CC) 

$(NAME):	$(OBJS)
			ar rcs ${NAME} ${OBJS}

cc:			
			gcc $(NAME) main.c && ./a.out

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re: 		fclean $(NAME)

.PHONY:		all clean fclean re