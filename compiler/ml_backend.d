

ml_backend.optdate ml_backend.trans_opt_date ml_backend.err ml_backend.c_date ml_backend.java_date : ml_backend.m ml_backend.int0 \
	builtin.int \
	private_builtin.int

ml_backend.pic_o ml_backend.$O : \
	builtin.mih \
	private_builtin.mih

ml_backend.mh ml_backend.mih : ml_backend.c


ifeq ($(findstring java,$(GRADE)),java)
ml_backend.module_dep : jmercury/ml_backend.java
else
ml_backend.module_dep : ml_backend.c
endif


ml_backend.date ml_backend.date0 : ml_backend.m \
	builtin.int3 \
	private_builtin.int3

ml_backend.date0 : ml_backend.m \
	builtin.int3 \
	private_builtin.int3


ml_backend.int0 : ml_backend.date0
	@:
ml_backend.int : ml_backend.date
	@:
ml_backend.int2 : ml_backend.date
	@:
ml_backend.int3 : ml_backend.date3
	@:
ml_backend.opt : ml_backend.optdate
	@:
ml_backend.trans_opt : ml_backend.trans_opt_date
	@:
