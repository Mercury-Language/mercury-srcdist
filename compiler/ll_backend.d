

ll_backend.optdate ll_backend.trans_opt_date ll_backend.err ll_backend.c_date ll_backend.java_date : ll_backend.m ll_backend.int0 \
	builtin.int \
	private_builtin.int

ll_backend.pic_o ll_backend.$O : \
	builtin.mih \
	private_builtin.mih

ll_backend.mh ll_backend.mih : ll_backend.c


ifeq ($(findstring java,$(GRADE)),java)
ll_backend.module_dep : jmercury/ll_backend.java
else
ll_backend.module_dep : ll_backend.c
endif


ll_backend.date ll_backend.date0 : ll_backend.m \
	builtin.int3 \
	private_builtin.int3

ll_backend.date0 : ll_backend.m \
	builtin.int3 \
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
