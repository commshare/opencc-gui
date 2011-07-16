PROJECT (opencc)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CMAKE_C_FLAGS "-O2")
SET(LIBRARY_OUTPUT_PATH ../build)
SET(EXECUTABLE_OUTPUT_PATH ../build)

SET(OPENCC_SRC
		config_reader.c
		config_reader.h
		converter.c
		converter.h
		dictionary
		dictionary_group.c
		dictionary_group.h
		dictionary_set.c
		dictionary_set.h
		encoding.c
		encoding.h
		opencc.c
		opencc.h
		opencc_types.h
		tools
		utils.c
		utils.h
		dictionary/abstract.c
		dictionary/abstract.h
		dictionary/datrie.c
		dictionary/datrie.h
		dictionary/text.c
		dictionary/text.h)

INCLUDE_DIRECTORIES (dictionary)
ADD_LIBRARY (opencc SHARED ${OPENCC_SRC})
ADD_EXECUTABLE(opencc_dict ${OPENCC_SRC} tools/opencc_dict.h tools/opencc_dict.c)