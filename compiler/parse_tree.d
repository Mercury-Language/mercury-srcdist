

parse_tree.optdate parse_tree.trans_opt_date parse_tree.err parse_tree.c_date parse_tree.s_date parse_tree.pic_s_date parse_tree.il_date parse_tree.java_date : parse_tree.m parse_tree.int0 \
	builtin.int \
	libs.int \
	mdbcomp.int \
	private_builtin.int

parse_tree.pic_o parse_tree.$O : \
	builtin.mih \
	libs.mih \
	mdbcomp.mih \
	private_builtin.mih

parse_tree.mh parse_tree.mih : parse_tree.c


ifeq ($(findstring il,$(GRADE)),il)
parse_tree.module_dep : parse_tree.il
else
 ifeq ($(findstring java,$(GRADE)),java)
parse_tree.module_dep : jmercury/parse_tree.java
 else
parse_tree.module_dep : parse_tree.c
 endif
endif


parse_tree.date parse_tree.date0 : parse_tree.m \
	builtin.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3

parse_tree.date0 : parse_tree.m \
	builtin.int3 \
	libs.int3 \
	mdbcomp.int3 \
	private_builtin.int3


parse_tree.int0 : parse_tree.date0
	@:
parse_tree.int : parse_tree.date
	@:
parse_tree.int2 : parse_tree.date
	@:
parse_tree.int3 : parse_tree.date3
	@:
parse_tree.opt : parse_tree.optdate
	@:
parse_tree.trans_opt : parse_tree.trans_opt_date
	@:
