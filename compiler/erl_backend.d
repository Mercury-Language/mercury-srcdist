

erl_backend.optdate erl_backend.trans_opt_date erl_backend.err erl_backend.c_date erl_backend.java_date : erl_backend.m erl_backend.int0 \
	builtin.int \
	private_builtin.int

erl_backend.pic_o erl_backend.$O : \
	builtin.mih \
	private_builtin.mih

erl_backend.mh erl_backend.mih : erl_backend.c


ifeq ($(findstring java,$(GRADE)),java)
erl_backend.module_dep : jmercury/erl_backend.java
else
erl_backend.module_dep : erl_backend.c
endif


erl_backend.date erl_backend.date0 : erl_backend.m \
	builtin.int3 \
	private_builtin.int3

erl_backend.date0 : erl_backend.m \
	builtin.int3 \
	private_builtin.int3


erl_backend.int0 : erl_backend.date0
	@:
erl_backend.int : erl_backend.date
	@:
erl_backend.int2 : erl_backend.date
	@:
erl_backend.int3 : erl_backend.date3
	@:
erl_backend.opt : erl_backend.optdate
	@:
erl_backend.trans_opt : erl_backend.trans_opt_date
	@:
