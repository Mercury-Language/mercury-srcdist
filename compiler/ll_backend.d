

ll_backend.optdate ll_backend.trans_opt_date ll_backend.err ll_backend.c_date ll_backend.s_date ll_backend.pic_s_date ll_backend.java_date : ll_backend.m ll_backend.int0 \
	backend_libs.int \
	builtin.int \
	check_hlds.int \
	hlds.int \
	libs.int \
	mdbcomp.int \
	parse_tree.int \
	private_builtin.int

ll_backend.pic_o ll_backend.$O : \
	backend_libs.mih \
	builtin.mih \
	check_hlds.mih \
	hlds.mih \
	libs.mih \
	mdbcomp.mih \
	parse_tree.mih \
	private_builtin.mih

ll_backend.mh ll_backend.mih : ll_backend.c


ifeq ($(findstring java,$(GRADE)),java)
ll_backend.module_dep : jmercury/ll_backend.java
else
ll_backend.module_dep : ll_backend.c
endif


ll_backend.date ll_backend.date0 : ll_backend.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3

ll_backend.date0 : ll_backend.m \
	backend_libs.int3 \
	builtin.int3 \
	check_hlds.int3 \
	hlds.int3 \
	libs.int3 \
	mdbcomp.int3 \
	parse_tree.int3 \
	private_builtin.int3


ll_backend.int0 : ll_backend.date0
	@:
ll_backend.int : ll_backend.date
	@:
ll_backend.int2 : ll_backend.date
	@:
ll_backend.int3 : ll_backend.date3
	@:
ll_backend.opt : ll_backend.optdate
	@:
ll_backend.trans_opt : ll_backend.trans_opt_date
	@:
