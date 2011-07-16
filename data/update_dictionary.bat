@echo off
del /q *.ocd
opencc_dict.exe -i dictionary\trad_to_simp_characters.txt -o trad_to_simp_characters.ocd
opencc_dict.exe -i dictionary\trad_to_simp_phrases.txt -o trad_to_simp_phrases.ocd
opencc_dict.exe -i dictionary\simp_to_trad_characters.txt -o simp_to_trad_characters.ocd
opencc_dict.exe -i dictionary\simp_to_trad_phrases.txt -o simp_to_trad_phrases.ocd