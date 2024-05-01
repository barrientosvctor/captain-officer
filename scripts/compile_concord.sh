git submodule init
git submodule update

cd lib/concord
make
cd ../..
echo "-> Concord was successfully loaded from GitHub and compiled!"
