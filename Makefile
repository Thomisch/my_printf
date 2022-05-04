##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-thomas.decaudain
## File description:
## Makefile for ./printf
##

NAME	=	libmy.a

INC_PATH=include

CFLAGS	=	-I. -I$(INC_PATH)

LIBS	=	-L./lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -s -C lib/my
	mv ./lib/my/libmy.a .

clean:
	$(MAKE) -s -C lib/my clean
	rm -f libmy.a

fclean: clean
	$(MAKE) -s -C lib/my fclean
	rm -f libmy.a

re:	fclean all