:- module xmlable_test.

:- interface.

:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.

:- import_module term_to_xml, map, pair, list, string.

main(!IO) :-
	map.init(Map),
	some [!Map] (
		!:Map = Map,
		map.set(1, "one", !Map),
		map.set(2, "two", !Map),
		map.set(3, "three", !Map),
		map.set(4, "four", !Map),
		map.set(5, "five", !Map),
		map.set(6, "six &<>!@$%^`&*()-+='", !Map),
		write_xml_doc_style_dtd(io.stdout_stream, !.Map, no_stylesheet,
			external_dtd(
			public_system("-//W3C//DTD XHTML 1.0 Strict//EN",
			"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd")),
			!IO),
		io.nl(!IO),
		write_xml_doc(io.stdout_stream, !.Map, !IO),
		io.nl(!IO),
		write_xml_element(io.stdout_stream, 2, !.Map, !IO)
	),
	nl(!IO).

:- instance xmlable(map(K, V)) where [
	func(to_xml/1) is map_to_xhtml
].

:- func map_to_xhtml(map(K, V)::in) = (xml::out(xml_doc)) is det.

map_to_xhtml(Map) = Doc :-
	map.to_assoc_list(Map, AssocList),
	Rows = list.map(make_table_row, AssocList),
	Doc = elem("html", [], [
		elem("head", [], [
			elem("title", [], [
				data("Testing <123>")
			])
		]),
		comment("Hi -- Mom!"),
		elem("body", [], [
			elem("table",
				[
					attr("border", "1"),
					attr("cellspacing", "0"),
					attr("cellpadding", "5")
				],
				Rows),
			raw("<hr />"),
			entity("nbsp"),
			comment("inline comment"),
			elem("script",
				[attr("type", "text/javascript")],
				[cdata("document.write('hello');")]
			)
		])
	]).

:- func make_table_row(pair(K, V)) = xml.

make_table_row(K - V) =
	elem("tr", [], [
		elem("td", [], [data(string.string(K))]),
		elem("td", [], [data(string.string(V))])
	]).
