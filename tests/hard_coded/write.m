% Test case for io__write
% 
% Author: trd

:- module write.
:- interface.
:- import_module io.

:- pred main(io__state::di, io__state::uo) is det.

:- implementation.

:- import_module list, int, term, map, array, univ.
:- import_module version_array.

:- pred test_ops(io__state::di, io__state::uo) is det.
:- pred test_builtins(io__state::di, io__state::uo) is det.
:- pred test_discriminated(io__state::di, io__state::uo) is det.
:- pred test_polymorphism(io__state::di, io__state::uo) is det.
:- pred test_other(io__state::di, io__state::uo) is det.
:- pred newline(io__state::di, io__state::uo) is det.


:- type enum	--->	one	;	two	;	three.

:- type fruit	--->	apple(list(int))
		;	banana(list(enum)).

:- type thingie	--->	foo ; bar(int) ; bar(int, int) ; qux(int) ;
			quux(int) ; quuux(int, int) ; wombat ; 
			zoom(int) ; zap(int, float) ; zip(int, int) ;
			zop(float, float).

:- type poly(A, B)	--->	poly_one(A) ; poly_two(B) ; 
				poly_three(B, A, poly(B, A)).

:- type no_tag		---> 	qwerty(int).

:- type expr		--->	var(string)
			;	int(int)
			;	expr + expr
			;	expr - expr
			; 	expr * expr
			;	(expr, expr)
			;	{expr; expr}
			;	{{expr}}
			;	(type)
			;	blah
			;	(:-)
			.

main -->
	test_ops,
	test_discriminated,
	test_polymorphism,
	test_builtins, 
	test_other.


test_ops -->
	io__write(var("X") + int(3) * var("X^2") ; (type)), newline,
	io__write(write.{type}), newline,
	io__write(write.{:-}), newline,
	io__write((:-)), newline,
	io__write(write.{blah}), newline,
	io__write((blah ; (type), (type) * blah ; (type))), newline,
	io__write(((blah ; blah), blah) * blah ; blah), newline,
	io__write((type) * blah ; (type)), newline.

test_discriminated -->
	io__write_string("TESTING DISCRIMINATED UNIONS\n"),

		% test enumerations
	io__write(one), newline,
	io__write(two), newline,
	io__write(three), newline,

		% test simple tags
	io__write(apple([9,5,1])), newline,
	io__write(banana([three, one, two])), newline,

		% test complicated tags
	io__write(zop(3.3, 2.03)), newline,
	io__write(zip(3, 2)), newline,
	io__write(zap(3, -2.111)), newline,

		% test complicated constant
	io__write(wombat), newline,
	io__write(foo), newline,
	
	newline.	

test_polymorphism -->
	io__write_string("TESTING POLYMORPHISM\n"),
	io__write(poly_one([2399.3])), newline,
	io__write(poly_two(3)), newline,
	io__write(poly_three(3.33, 4, poly_one(9.11))), newline,

	newline.


test_builtins -->
	io__write_string("TESTING BUILTINS\n"),

		% test strings
 	io__write(""), newline,
 	io__write("Hello, world\n"), newline,
 	io__write("Foo%sFoo"), newline,
 	io__write(""""), newline,	% interesting - prints """ of course

		% test characters
	io__write('a'), newline,
	io__write('&'), newline,

		% test floats
	io__write(3.14159), newline,
	io__write(11.28324983E-22), newline,
	io__write(22.3954899E22), newline,

		% test integers
	io__write(-65), newline,
	io__write(4), newline,

		% test univ.
	{ type_to_univ(["hi! I'm a univ!"], Univ) }, 
	io__write(Univ), newline,
	
		% test predicates	
	io__write(newline), newline,

	newline.



	% Note: testing abstract types is always going to have results
	% that are dependent on the implementation. If someone changes
	% the implementation, the results of this test can change.

test_other -->
	io__write_string("TESTING OTHER TYPES\n"),
	{ term__init_var_supply(VarSupply) },
	{ term__create_var(Var, VarSupply, NewVarSupply) },
	io__write(Var), newline,
	io__write(VarSupply), newline,
	io__write(NewVarSupply), newline,

		% presently, at least, map is an equivalence and
		% an abstract type.
	{ map__init(Map) },
	io__write(Map), newline,

		% a no tag type 
	io__write(qwerty(4)), newline,

	{ array__from_list([1,2,3,4], Array) },
	io__write(Array), newline,

	{ VersionArray = version_array.from_list([1,2,3,4]) },
	io.write(VersionArray), newline,

	newline.

newline -->
	io__write_char('\n').


