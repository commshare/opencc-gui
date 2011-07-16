/*
* Open Chinese Convert
*
* Copyright 2010 Carlos <copperoxide@gmail.com>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __OPENCC_DICT_H_
#define __OPENCC_DICT_H_

#include "../encoding.h"
#include "../utils.h"
#include "../dictionary_group.h"
#include "../dictionary/datrie.h"
#include "../dictionary/text.h"
#include <unistd.h>
#include <locale.h>

#define DATRIE_SIZE 1000000
#define DATRIE_WORD_MAX_COUNT 500000
#define DATRIE_WORD_MAX_LENGTH 32
#define BUFFER_SIZE 1024

#ifndef VERSION
#define VERSION "0.2.0"
#endif /* VERSION */

#endif /* __OPENCC_DICT_H_ */