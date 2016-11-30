set(SOURCES
    hsocks.cpp
)

set(HEADERS
    Public/hsocks.h
)

_create_library(hsockslib "${SOURCES}" "${HEADERS}" "Sources")

foreach(HEADER ${HEADERS})
    if (${HEADER} MATCHES "^Public/.+\\.h$")
        list(APPEND INSTALL_HEADERS ${HEADER})
    endif()
endforeach()

install(TARGETS hsockslib
        RUNTIME DESTINATION "${OUTPUT_DIR}/bin"
        LIBRARY DESTINATION "${OUTPUT_DIR}/lib}"
        ARCHIVE DESTINATION "${OUTPUT_DIR}/lib"
)

install (FILES ${INSTALL_HEADERS} DESTINATION "${OUTPUT_DIR}/include")