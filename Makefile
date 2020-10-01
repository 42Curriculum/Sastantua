FLAGS = -Wall -Wextra -Werror

CSTANTUA = Sastantua cmain Reverse_sas

CSRCS = $(addprefix Cstantua/, $(addsuffix .c, $(CSTANTUA)))
COBJS = $(addprefix objs/, $(addsuffix .o, $(CSTANTUA)))

.SILENT:

objs/%.o: Cstantua/%.c
	/bin/mkdir -p objs
	gcc -c $< -o $@

all:
	@echo "Nothing to see here"


cstantua: $(COBJS)
	gcc $(COBJS) -o c_stantua
