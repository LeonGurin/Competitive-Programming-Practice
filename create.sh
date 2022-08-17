#!/usr/bin/bash

# Create a new competitive programming problem
dirnameFull=""

echo "Select where you want to create a program"
read -p "Type 1) for CSES and 2) for judege.alon.kr: " choise

if [ $choise == 1 ] ; then
    dir="CSES"
elif [ $choise == 2 ] ; then
    dir="judege.alon.kr"
else
    echo "Invalid input"
    exit 1
fi

cd $dir 

read -p "what is the directory name? " -a dirname
for i in "${dirname[@]}" 
do
    # check if i is the last element
    if [ $i == ${dirname[-1]} ]
    then
        dirnameFull=$dirnameFull$i
    else
        dirnameFull=$dirnameFull$i" "
    fi

done
# echo $dirnameFull

mkdir "$dirnameFull"

cd "$dirnameFull"

touch README.md
touch main.cpp
touch testInput.txt