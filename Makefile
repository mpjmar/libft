# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maria-j2 <maria-j2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 13:12:25 by maria-j2          #+#    #+#              #
#    Updated: 2025/04/26 13:14:29 by maria-j2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = libft.a 

# Compilador y banderas de compilacion
CC = gcc -c
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente y archivos objeto
SRC =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
# ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.fd.c ft_putnbr_fd.c

# BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRC:%.c = %.o)
BONUS_OBJS = $(SRC:%.c = %.o)

# Archivo de encabezado
INCLUDE = libft.h

# Crear bibliotecs y eliminar archivos
AR = ar rcs
RM = rm -f

# Indica que todo lo que va a la derecha son comandos y no archivos
.PHONY: all clean fclean re bonus

# Regla por defecto que lo compila todo
# objetivo : dependencias
# 	comandos
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

# Pasar archivos .c a .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Regla para eliminar todos los archivos objeto creados
clean:
	$(RM) $(OJB) $(BONUS_OBJS)

# Eliminar todos los archivos .o y .a
fclean: clean
	$(RM) $(NAME)

re: fclean all