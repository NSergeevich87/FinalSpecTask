.PHONY: clean All

All:
	@echo "----------Building project:[ C++_part - Debug ]----------"
	@cd "C++_part" && "$(MAKE)" -f  "C++_part.mk"
clean:
	@echo "----------Cleaning project:[ C++_part - Debug ]----------"
	@cd "C++_part" && "$(MAKE)" -f  "C++_part.mk" clean
