

bytecode_backend.optdate bytecode_backend.trans_opt_date bytecode_backend.err bytecode_backend.c_date bytecode_backend.s_date bytecode_backend.pic_s_date bytecode_backend.il_date bytecode_backend.java_date : bytecode_backend.m bytecode_backend.int0 \
	builtin.int \
	private_builtin.int

bytecode_backend.pic_o bytecode_backend.$O : \
	builtin.mih \
	private_builtin.mih

bytecode_backend.mh bytecode_backend.mih : bytecode_backend.c


ifeq ($(findstring il,$(GRADE)),il)
bytecode_backend.module_dep : bytecode_backend.il
else
 ifeq ($(findstring java,$(GRADE)),java)
bytecode_backend.module_dep : jmercury/bytecode_backend.java
 else
bytecode_backend.module_dep : bytecode_backend.c
 endif
endif


bytecode_backend.date bytecode_backend.date0 : bytecode_backend.m \
	builtin.int3 \
	private_builtin.int3

bytecode_backend.date0 : bytecode_backend.m \
	builtin.int3 \
	private_builtin.int3


bytecode_backend.int0 : bytecode_backend.date0
	@:
bytecode_backend.int : bytecode_backend.date
	@:
bytecode_backend.int2 : bytecode_backend.date
	@:
bytecode_backend.int3 : bytecode_backend.date3
	@:
bytecode_backend.opt : bytecode_backend.optdate
	@:
bytecode_backend.trans_opt : bytecode_backend.trans_opt_date
	@:
