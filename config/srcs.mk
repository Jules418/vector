
SRCS = $(APPROX_SRCS) \
		$(BASIC_OP_SRCS)

APPROX_SRCS = approximation/q_norm.c

BASIC_OP_SRCS = basic_op/addition.c \
				basic_op/multiplication.c \
				basic_op/norme.c