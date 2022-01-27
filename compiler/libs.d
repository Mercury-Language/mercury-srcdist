

libs.optdate libs.trans_opt_date libs.err libs.c_date libs.s_date libs.pic_s_date libs.java_date : libs.m libs.int0 \
	builtin.int \
	private_builtin.int

libs.pic_o libs.$O : \
	builtin.mih \
	private_builtin.mih

libs.mh libs.mih : libs.c


ifeq ($(findstring java,$(GRADE)),java)
libs.module_dep : jmercury/libs.java
else
libs.module_dep : libs.c
endif


libs.date libs.date0 : libs.m \
	builtin.int3 \
	private_builtin.int3

libs.date0 : libs.m \
	builtin.int3 \
	private_builtin.int3


libs.int0 : libs.date0
	@:
libs.int : libs.date
	@:
libs.int2 : libs.date
	@:
libs.int3 : libs.date3
	@:
libs.opt : libs.optdate
	@:
libs.trans_opt : libs.trans_opt_date
	@:
