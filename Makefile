# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = ft_putchar_fd.c ft_atoi.c ft_isalnum.c ft_putnbr.c ft_putnbr_fd.c ft_strlen.c \
       ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isprint.c ftmemset.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header files
INCLUDES = libft.h

# Output library name
NAME = libft.a

# Phony targets are not actual files
.PHONY: all clean fclean re

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@echo "Creating library $(NAME)..."
	ar rcs $(NAME) $(OBJS)

# Rule to create object files
%.o: %.c $(INCLUDES)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean object files
clean:
	@echo "Cleaning object files..."
	rm -f $(OBJS)

# Rule to clean everything (object files and library)
fclean: clean
	@echo "Cleaning library..."
	rm -f $(NAME)

# Rule to rebuild everything
re: fclean all
