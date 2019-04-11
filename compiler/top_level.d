

top_level.optdate top_level.trans_opt_date top_level.err top_level.c_date top_level.java_date : top_level.m top_level.int0 \
	builtin.int \
	private_builtin.int

top_level.pic_o top_level.$O : \
	builtin.mih \
	private_builtin.mih

top_level.mh top_level.mih : top_level.c


ifeq ($(findstring java,$(GRADE)),java)
top_level.module_dep : jmercury/top_level.java
else
top_level.module_dep : top_level.c
endif


top_level.date top_level.date0 : top_level.m \
	builtin.int3 \
	private_builtin.int3

top_level.date0 : top_level.m \
	builtin.int3 \
	private_builtin.int3


top_level.int0 : top_level.date0
	@:
top_level.int : top_level.date
	@:
top_level.int2 : top_level.date
	@:
top_level.int3 : top_level.date3
	@:
top_level.opt : top_level.optdate
	@:
top_level.trans_opt : top_level.trans_opt_date
	@:
