git submodule init
git submodule update
echo "-> Concord was successfully loaded from GitHub."

cd lib/concord
make
cd ../..
echo "-> Concord was successfully compiled!"
