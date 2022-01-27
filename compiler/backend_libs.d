

backend_libs.optdate backend_libs.trans_opt_date backend_libs.err backend_libs.c_date backend_libs.s_date backend_libs.pic_s_date backend_libs.java_date : backend_libs.m backend_libs.int0 \
	builtin.int \
	private_builtin.int

backend_libs.pic_o backend_libs.$O : \
	builtin.mih \
	private_builtin.mih

backend_libs.mh backend_libs.mih : backend_libs.c


ifeq ($(findstring java,$(GRADE)),java)
backend_libs.module_dep : jmercury/backend_libs.java
else
backend_libs.module_dep : backend_libs.c
endif


backend_libs.date backend_libs.date0 : backend_libs.m \
	builtin.int3 \
	private_builtin.int3

backend_libs.date0 : backend_libs.m \
	builtin.int3 \
	private_builtin.int3


backend_libs.int0 : backend_libs.date0
	@:
backend_libs.int : backend_libs.date
	@:
backend_libs.int2 : backend_libs.date
	@:
backend_libs.int3 : backend_libs.date3
	@:
backend_libs.opt : backend_libs.optdate
	@:
backend_libs.trans_opt : backend_libs.trans_opt_date
	@:
