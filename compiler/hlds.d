

hlds.optdate hlds.trans_opt_date hlds.err hlds.c_date hlds.java_date : hlds.m hlds.int0 \
	builtin.int \
	check_hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int \
	transform_hlds.int

hlds.pic_o hlds.$O : \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih \
	transform_hlds.mih

hlds.mh hlds.mih : hlds.c


ifeq ($(findstring java,$(GRADE)),java)
hlds.module_dep : jmercury/hlds.java
else
hlds.module_dep : hlds.c
endif


hlds.date hlds.date0 : hlds.m \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3

hlds.date0 : hlds.m \
	builtin.int3 \
	check_hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3 \
	transform_hlds.int3


hlds.int0 : hlds.date0
	@:
hlds.int : hlds.date
	@:
hlds.int2 : hlds.date
	@:
hlds.int3 : hlds.date3
	@:
hlds.opt : hlds.optdate
	@:
hlds.trans_opt : hlds.trans_opt_date
	@:
