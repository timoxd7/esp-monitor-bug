set(SOURCES main.c)

idf_component_register( SRCS ${SOURCES}
                        INCLUDE_DIRS
                        REQUIRES
                        )

target_compile_definitions(${COMPONENT_LIB} PRIVATE LV_CONF_INCLUDE_SIMPLE=1)
