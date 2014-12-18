

test: FORCE
	@echo "Compiling..."
	@make clean -C src/ >/dev/null || exit 1
	@make tests -C src/ >/dev/null || exit 1
	@make grammar_test -C src/ >/dev/null || exit 1
	@echo "Running tests:"
	@./bin/grammar_test -f "test/valid_queries.sql"
	@./bin/tests


docs: FORCE
	doxygen docs/doxy.conf


FORCE:
