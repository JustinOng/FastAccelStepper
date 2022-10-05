idf_component_register(
    SRC_DIRS "src"
    INCLUDE_DIRS "src"
    REQUIRES arduino
    PRIV_REQUIRES driver soc 
)

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-ignored-qualifiers)
