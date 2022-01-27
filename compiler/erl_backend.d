

erl_backend.optdate erl_backend.trans_opt_date erl_backend.err erl_backend.c_date erl_backend.s_date erl_backend.pic_s_date erl_backend.il_date erl_backend.java_date : erl_backend.m erl_backend.int0 \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int

erl_backend.pic_o erl_backend.$O : \
	backend_libs.mih \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih

erl_backend.mh erl_backend.mih : erl_backend.c


ifeq ($(findstring il,$(GRADE)),il)
erl_backend.module_dep : erl_backend.il
else
 ifeq ($(findstring java,$(GRADE)),java)
erl_backend.module_dep : jmercury/erl_backend.java
 else
erl_backend.module_dep : erl_backend.c
 endif
endif


erl_backend.date erl_backend.date0 : erl_backend.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3

erl_backend.date0 : erl_backend.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
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
