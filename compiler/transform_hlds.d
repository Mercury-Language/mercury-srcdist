

transform_hlds.optdate transform_hlds.trans_opt_date transform_hlds.err transform_hlds.c_date transform_hlds.java_date : transform_hlds.m transform_hlds.int0 \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int

transform_hlds.pic_o transform_hlds.$O : \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih

transform_hlds.mh transform_hlds.mih : transform_hlds.c


ifeq ($(findstring java,$(GRADE)),java)
transform_hlds.module_dep : jmercury/transform_hlds.java
else
transform_hlds.module_dep : transform_hlds.c
endif


transform_hlds.date transform_hlds.date0 : transform_hlds.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3

transform_hlds.date0 : transform_hlds.m \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3


transform_hlds.int0 : transform_hlds.date0
	@:
transform_hlds.int : transform_hlds.date
	@:
transform_hlds.int2 : transform_hlds.date
	@:
transform_hlds.int3 : transform_hlds.date3
	@:
transform_hlds.opt : transform_hlds.optdate
	@:
transform_hlds.trans_opt : transform_hlds.trans_opt_date
	@:
