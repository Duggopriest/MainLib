# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgobbett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 13:07:04 by jgobbett          #+#    #+#              #
#    Updated: 2022/03/15 13:16:50 by jgobbett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Libary	= libft

files	= ft_hex_pf \
		   ft_num_pf \
		   ft_printf \
		   ft_string_pf \
		   ft_unsigned \
		   get_next_line \
		   p1 \
		   p2 \
		   p3 \
		   p4 \
		   p5 \
		   p6 \
		   p7 \
		   p8 \
		   p9 \
		   p10 \
		   p11 \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN		= %(Library).a

CFILES		= $(files:%=%.c)

OFILES		= $(files:%=%.o)

NAME		= %(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./ ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

clo:
	rm -f $(OFILES)

.PHONY: all, clean, fclean, re
