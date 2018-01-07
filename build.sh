if [ $# -ne 1 ]; then
    echo "Invalid argument"
    echo "Please run './run target_name'"
    exit 1
fi

CPP="g++-5"
CPP_FLAGS="-std=c++1y"
TARGET=$1

RESULT=`$CPP $CPP_FLAGS -o $TARGET $TARGET.cpp`
echo $RESULT

