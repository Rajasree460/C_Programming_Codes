#odd even
read -p "enter a no: " n
r=`expr $n % 2`
if [ $r -eq 0 ]
then
echo "$n is even"
else
echo "$n is odd"
fi

#add 2 no.
read -p "enter the 1st no.: " a
read -p "enter the 2nd no.: " b
sum=$(( $a + $b ))
echo "sum: " $sum

#factorial
read -p "enter a no: " n
fact=1
n1=$n
while ( $n -gt 1 )
do
fcat=$(( $n * fact ))
n=$(( $n - 1 ))
done
echo "fact $n1: " $n

#leap year
read -p "enter a year: " a
b=`expr $a % 4`
c=`expr $a % 100`
if [[ $b -eq 0 && $c -ne 0 ]]
then
echo "$a is leap year"
else
echo "$a isnt leap year"
fi

#convert °c into F
read -p "enter the temp in °c: " c
f=$(echo "scale=2;$c * 9/5 + 32" | bc)  #syntax to print float
echo "$c °c -> $f F"

#swapp 2 no.
read -p "enter the 1st no.: " a
read -p "enter the 2nd no.: " b
a1=$a
b1=$b
temp=$a
a=$b
b=$temp
echo "after swapping:$a1 $b1 -> $a $b"

#prime
read -p "enter a no: " n
for (( i=2; i<=$(( $n / 2)); i++ ))
do
if [[ $(( $n % $i )) -eq 0 ]]
then
echo "$n isnt prime no"
exit
fi
done 
echo "$n is prime no."

#prime in range
read -p "enter the limit: " n
echo "prime no. between 1 to $n"
for (( i=1; i<=$n; i++ ))
do
flag=0
for (( j=2; j*j<$(( $i + 1 )); j++))
do
if [[ $(( $i % $j )) -eq 0 ]]
then
flag=1
break
fi
done
if [[ flag -eq 0 ]]
then
echo "$i -prime no."
fi

