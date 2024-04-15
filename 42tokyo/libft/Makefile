#基本設定
NAME=libft.a

cc=cc
CFLAGS=-Wall -Wextra -Werror

#ソースファイルとオブジェクトファイル
SRCS= 

SRCS_BONUS= 

OBJS=$(SRCS:.c=.o)

ifdef WITH_BONUS
OBJS+=$(SRCS_BONUS:.c=.o)
endif

OBJS_BONUS=$(SRCS_BONUS:.c=.o)

#ビルドターゲット
all: $(NAME)

$(NAME): $(OBJS)
	ar rc$(NAME)$(OBJS)
	randib $(NAME)

bonus:
	make WITH_BONUS=1 all

#コンパイルルール
%.o:%.c
	$(CC) $(CFLAGS)

#クリーンアップターゲット
clean:
	rm -f $(OBJS) $(OBJS_BONUS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY all fclean re bonus