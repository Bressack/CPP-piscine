
makefile_rules()
{
	echo "Compilation of ex00:" ; make -j $1 -C ex00
	# echo "Compilation of ex01:" ; make -j $1 -C ex01
	echo "Compilation of ex02:" ; make -j $1 -C ex02
	echo "Compilation of ex03:" ; make -j $1 -C ex03
	echo "Compilation of ex04:" ; make -j $1 -C ex04
	echo "Compilation of ex05:" ; make -j $1 -C ex05
	echo "Compilation of ex06:" ; make -j $1 -C ex06
	echo "Compilation of ex07:" ; make -j $1 -C ex07
}

makefile_rules $1
