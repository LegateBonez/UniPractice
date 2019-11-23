.PHONY: clean All

All:
	@echo "----------Building project:[ Practice100 - Release ]----------"
	@cd "Practice100" && "$(MAKE)" -f  "Practice100.mk"
clean:
	@echo "----------Cleaning project:[ Practice100 - Release ]----------"
	@cd "Practice100" && "$(MAKE)" -f  "Practice100.mk" clean
