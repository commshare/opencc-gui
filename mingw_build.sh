#!/bin/bash

# build opencc.dll and opencc_dict.exe
cd opencc
cmake -G "MSYS Makefiles" .
make

# build uchardet.dll
cd ../uchardet
qmake uchardet.pro
make release

# build opencc-gui
cd ../opencc-gui
qmake opencc-gui.pro
make release

# Qt Linguist
lrelease opencc-gui.pro

# put files in the build folder
cd ..
mkdir build
mkdir build/dictionary
mv opencc/build/libopencc.dll build/opencc.dll
mv opencc/build/opencc_dict.exe build
mv uchardet/release/uchardet.dll build
mv opencc-gui/release/opencc-gui.exe build
mv opencc-gui/l10n/*.qm build
cp data/*.bat build
cp data/*.ini build
cp data/simp_to_trad_*.txt build/dictionary
cp data/trad_to_simp_*.txt build/dictionary
cp data/from_*.txt build/
cp data/to_*.txt build/

# update dictionary
cd build
opencc_dict.exe -i dictionary/trad_to_simp_characters.txt -o trad_to_simp_characters.ocd
opencc_dict.exe -i dictionary/trad_to_simp_phrases.txt -o trad_to_simp_phrases.ocd
opencc_dict.exe -i dictionary/simp_to_trad_characters.txt -o simp_to_trad_characters.ocd
opencc_dict.exe -i dictionary/simp_to_trad_phrases.txt -o simp_to_trad_phrases.ocd
