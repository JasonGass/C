cd ~/C
mkdir $1
cd $1

cat <<EOT >> $1.cpp
#include <iostream>

using namespace std;
int main()
{
	return 0;
}
EOT

cat <<EOT >> makefile
all:
	g++ $1.cpp -o $1 -g
EOT

cat <<EOT >> run.sh
cd ~/C/$1/
if make; then
		./$1
fi
EOT
chmod +x ./run.sh

