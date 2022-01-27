

mer_mdbcomp.optdate mer_mdbcomp.trans_opt_date mer_mdbcomp.err mer_mdbcomp.c_date mer_mdbcomp.s_date mer_mdbcomp.pic_s_date mer_mdbcomp.java_date : mer_mdbcomp.m \
	builtin.int \
	mdbcomp.int \
	private_builtin.int

mer_mdbcomp.pic_o mer_mdbcomp.$O : \
	builtin.mih \
	mdbcomp.mih \
	private_builtin.mih

mer_mdbcomp.mh mer_mdbcomp.mih : mer_mdbcomp.c


ifeq ($(findstring java,$(GRADE)),java)
mer_mdbcomp.module_dep : jmercury/mer_mdbcomp.java
else
mer_mdbcomp.module_dep : mer_mdbcomp.c
endif


mer_mdbcomp.date mer_mdbcomp.date0 : mer_mdbcomp.m \
	builtin.int3 \
	mdbcomp.int3 \
	private_builtin.int3

mer_mdbcomp.date0 : mer_mdbcomp.m \
	builtin.int3 \
	mdbcomp.int3 \
	private_builtin.int3


mer_mdbcomp.int0 : mer_mdbcomp.date0
	@:
mer_mdbcomp.int : mer_mdbcomp.date
	@:
mer_mdbcomp.int2 : mer_mdbcomp.date
	@:
mer_mdbcomp.int3 : mer_mdbcomp.date3
	@:
mer_mdbcomp.opt : mer_mdbcomp.optdate
	@:
mer_mdbcomp.trans_opt : mer_mdbcomp.trans_opt_date
	@:
